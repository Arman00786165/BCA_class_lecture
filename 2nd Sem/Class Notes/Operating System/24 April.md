# Shell scripting
    It is designed to execute unix/linux program

_Types of shell_  
    1. Bourne Shell 
    2. C shell
    3. SH shell
    4. Korn shell

**Extension of a shell file**
    .sh

**Making a shell file**
    vi test.sh

*Writing into a shell file*
    echo "Input your name
    read name
    echo "Hello, $name"


*Execute shell program*
    ./file_name.sh

*shell program to to display shell program*
    vi test1.sh
    echo "my current directory is $pwd"
    esc:wq
    cat test1.sh
    ./test1.sh

*Mathematical Expressions*
    echo "Enter num1"
    read num1
    echo "Enter num2"
    read num2
    sum = expr $num1 + $num2
    echo "sum of two number $num"
