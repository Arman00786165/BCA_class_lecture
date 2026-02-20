# Linux & unix commands
# 21 April

_18. print_ -display message    

_19. echo_  -display message

_20. wall_  -display message

_21. ps_  -display current running processes

_22. kill_  -stops the current running  process
    *kill -9 pid
        kill -9 1001

_23. To identify the user_ 
    
    *who - display information about current user
    
    *whoami - display information about current user
    
    *w - display information about current user

_24. ifconfig_ - display system configuration like ip addresses and mac address

_25. ipconfig_ - display system configuration like ip addresses and mac address

    Types of IP 
        dynamic IP
        static IP

    IP can be changed depending on the server however mac address cannot be changed 

_26. du_ - display disk usage 

_27. df_ - display disk free space

_28. grep_ - use for pattern search

    *grep "Text You Want To search" file_name
    *grep -i    - to ignore case
    *grep -n    - to show line number
    *grep "pattern" input.txt >> output.txt - store output of command into a file

        cat > country.txt - create and write into the file
            India
            China
            INDIA
            iNDIA
            Pakistan

        cat country.txt  - display file content
        
        grep "India" country.txt - searches with case sensitivity
        
        grep -i "india" country.txt - search by ignoring cases
        
        grep -n "india" country.txt - show output with line number
        
        grep "^hello" file1.txt - displays lines start with "hello" in file1.txt  

        grep "india$" file1.txt - displays lines end with "hello" in file1.txt  

        // write a grep command to find all line number with a,b,c,d,e in it
        grep "[a-e]" file.txt
        grep "[a-z]" file.txt
        
        // write a grep command to find all line number with vowels in it
        grep "[aeiou]" file.txt

        // write a grep command to find all line number without vowels in it
        grep "[^aeiou]" file.txt

        // write a grep command to find all line starts with a digit
        grep "*[0-9]" file.txt

        // store output of a command into another file
        grep -i "china" country.txt >> output.txt
        cat output.txt



