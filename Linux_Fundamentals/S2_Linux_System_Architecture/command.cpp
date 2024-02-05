#include <iostream>
#include <unistd.h>
#include <pwd.h>

// #include <unistd.h> provides access to various system calls related to the operating system, such as getuid, getlogin_r, and write3.
// #include <pwd.h> provides access to the password database, which contains information about the users on the system, such as their usernames, home 
//  directories, and passwords

void print_username()
{
    // get the user ID of the current process
    unsigned int uid = getuid();
    // get the password structure associated with the user ID
    struct passwd *pw = getpwuid(uid);
    // check if the structure is valid
    if (pw)
    {
        // print the username to the standard output stream
        std::cout << "Username: " << pw->pw_name << std::endl;
        std::cout << "ID      : " << getuid() << std::endl;
    }
    else
    {
        // print an error message
        std::cout << "Cannot find username for UID " << uid << std::endl;
    }
}

int main(){
    print_username();
    return 0;
}