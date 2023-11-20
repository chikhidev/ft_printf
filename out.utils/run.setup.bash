run() {
    cc ft_printf.c utils/*.c tests/"$1".test.c -o exec/"$1".output && ./exec/"$1".output
}

push(){
    git add .
    git commit -m $1
    git push origin master
}
