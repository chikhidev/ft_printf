import os
import subprocess

def process_files(directory):
    for filename in os.listdir(directory):
        if filename.endswith(".c"):
            file_path = os.path.join(directory, filename)

            subprocess.run(["vi", "-c", ":Stdh", "-c", ":wq", file_path])

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python script.py /path/to/your/directory")
        sys.exit(1)

    directory_path = sys.argv[1]
    
    process_files(directory_path)
