#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter your username: ";
    std::cin >> name;

    if (!name.empty() && name.length() > 12)
    {
        name.append("@gmail.com");
        std::cout << "Your email is correct: " << name;
    }
    else
    {
        std::cout << "Name must be more than 12 characters and not empty.";
    }

    return 0;
}