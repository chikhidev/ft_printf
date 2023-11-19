run() {
    cc ft_printf.c utils/*.c tests/"$1".test.c && ./a.out
}

push(){
    git add .
    git commit -m $1
    git push origin master
}