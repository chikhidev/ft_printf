test() {
    if [ ! -d "exec" ]; then
        mkdir exec
    fi

    if [[ $2 -eq 1 ]]; then
        gcc -Wall -Wextra -Werror *.c tests/${1}.test.c -o exec/${1}.output && ./exec/${1}.output
    else
        gcc *.c tests/${1}.test.c tests/test.c -o exec/${1}.output && ./exec/${1}.output | cat -e
    fi
}

testlib() {
    if [ ! -d "exec" ]; then
        mkdir exec
    fi
    if [ ! -f "libftprintf.a" ]; then
        make
    fi
    if [[ "$2" -eq 1 ]]; then
        gcc -Wall -Wextra -Werror tests/"${1}".test.c tests/test.c libftprintf.a -o exec/"${1}".output && ./exec/"${1}".output
    else
        gcc tests/"${1}".test.c tests/test.c libftprintf.a -o exec/"${1}".output && ./exec/"${1}".output | cat -e
    fi
}

push() {
    git add .
    git commit -m "$1"
    git push origin master
}