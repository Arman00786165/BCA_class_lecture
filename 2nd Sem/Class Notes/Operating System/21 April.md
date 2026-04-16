# Linux & unix commands

_1. Date_ - Shows date in dd/mm/yy hh:mm:ss Am/Pm format

_2. Cal_ - shows current year calendar
    cal 2024 - shows specific year

_3. ls_ - shows list of files and folder
    * ls -l
    * ls -a - shows hidden files
    * ls -lrth

_4. pwd_ - shows present working directory
    => c:/students

_5. cd_ - changes current working directory
    => cd c:/desktop - change current directory to desktop
    => cd c:/course/BCA - change current directory to BCA in courses
    => ls -l - shows all the list of files and folder

_6. chmod_ - File permission

    * r - read    4
    * w - write   2
    * x - execute 1

    fileName -7     7       7       - shows all the user have all the permissions
            User    Group   Admin

_7. mkdir_ - use to make folder
    => mkdir Code - makes a folder with name "code"
    => mkdir Code/python - makes nested folder "python" inside "code"

_8. rmdir_ - remove/delete folder
    => rmdir python - delete python folder

_9. mv_ - move one file tp another location.  Works as cut & paste 
    *mv source_file destination_File 
    
_10. cp_ - copy one file tp another location. Works as copy & paste
    *cp source_file destination_File 
    => cp c:/dir1/student.txt d:/BCA

_11. File creation_ 
    => touch file_name

    => cat > file_name
        
        cat > file1.txt - create a file "file1.txt"

        cat file1.txt
        
        "writes something into the file"
        "writes something into the file"

        ctrl + z - to save the file

        cat file1.txt - displays the content of a file

    => vi file_name

_12. head_ - display firsts 10 lines of a file
    => head file_name

_13. tail_ - display last 10 lines of a file
    => tail file_name

_14. more_ - display file in different pages

_15. less_ - display file in different pages

_16. man_ - shows manual of a command
    * man ls    - shows manual about ls command 
    * man mkdir - shows manual about mkdir command 
    * man pwd   - shows manual about pwd command 

_15. cmp_ - compare 2 file on the bases of lines
    => cmp file1.txt file2.txt 

_16. diff_ - show different between 2 file on lines & words
    => diff file1.txt file2.txt 

_17. patch_ - updates first file with the difference of second file

    => patch file1.txt diff.txt - updates file1.txt with differences of diff.txt




