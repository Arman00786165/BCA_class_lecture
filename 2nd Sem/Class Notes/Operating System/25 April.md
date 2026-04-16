**chmod [who] [permission] [file path]**
    u - user    1 - execute
    g - group   2 - write
    o - other   4 - read

    chmod +777 main.sh // giving all the user all the permission

    chmod u -x main.sh //  giving user execute permission

    chmod 124 main.sh //  giving user execute , group write, other write permission

    c:/IGNOU/BCA2/student-details.txt
   _Q.) How do we delete BCA2_
        cd BCA2
        rm student-details.txt
        cd ..
        rmdir BCA2

**Redirecting output**
    command inputFile >> outputFile

**To find the grates between 3 number**
    echo "num1"
    read num1
    echo "num1"
    read num2

    if ["num1 -gt num2"];then
        echo "$num1 is grater"
    else
        echo "$num2 is grater"
    fi

_Q.) To check eligibility for voting_
    echo "Enter age"
    read age

    if ["age -gt 18"];then
        echo "You can vote"
    else
        echo "You cannot vote"
    fi

_Q.) Odd even_
    echo "Enter num"
    read num

    if ["$num % 2 == 0"];then
        echo "Even"
    else
        echo "Odd"
    fi
