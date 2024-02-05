# Linux Fundmentals
## S2 Linux system Architecture:
- Task: Implement a command to print username and userid.
    1. Write the cpp code as shown (comments claify the code)
    2. Comile and link the src file and rename o/p to usernameid
        ```
        g++ command.cpp -o usernameid
        ```
    3. Find list of directories where shell searches for exc. files
        ```
        echo $PATH
        ```
    4. Copy the executable usernameid to one of these directories
        ```
        cp usernameid /usr/bin
        ```
    5. Write the command in the terminal to view the o/p
        ```
        usernameid
        ```
