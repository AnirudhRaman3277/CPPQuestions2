#include <iostream>
#include <string>

int main() 
{
    std::string password;
    std::string correct_password = "random";

    while (true) 
    {
        std::cout << "Enter password: ";
        std::cin >> password;

        if (password == correct_password) 
        {
            std::cout << "Access granted.\n";
            break;
        } else 
        {
            std::cout << "Incorrect password. Try again.\n";
        }
    }

    return 0;
}