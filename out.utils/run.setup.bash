test() {
    if [ ! -d "exec" ]; then
        mkdir exec
    fi

    if [[ $2 -eq 1 ]]; then
        gcc -Wall -Wextra -Werror ft_printf.c utils/*.c tests/${1}.test.c -o exec/${1}.output && ./exec/${1}.output
    else
        gcc ft_printf.c utils/*.c tests/${1}.test.c tests/test.c -o exec/${1}.output && ./exec/${1}.output | cat -e
    fi
}

push() {
    git add .
    git commit -m "$1"
    git push origin master
}
