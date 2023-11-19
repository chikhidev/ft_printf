sth() {
    if [ "$#" -ne 1 ]; then
        echo "Usage: sth /path/to/your/directory"
        return 1
    fi

    directory="$1"

    for file in "$directory"/*.c; do
        sed -i '1s;^;// :Stdh\n// :Stdh -;' "$file"
    done
}
