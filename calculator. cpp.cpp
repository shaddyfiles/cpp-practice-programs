#include <iostream>
typedef char op_t;

int main()
{
    double a, b, sol;
    op_t operation;

    std::cout << "enter your first digit: " << std::endl;
    std::cin >> a;

    std::cout << "enter your second digit: " << std::endl;
    std::cin >> b;

    std::cout << "enter your operation: " << std::endl;
    std::cin >> operation;

    switch (operation)
    {
        case '+':
            sol = a + b;
            std::cout << "your sol is " << sol << std::endl;
            break;
        case '-':
            sol = a - b;
            std::cout << sol << std::endl;
            break;

        case '*':
            sol = a * b;
            std::cout << sol << std::endl;
            break;

        case '/':
            if (b != 0)
           std::cout << a / b << std::endl;
            else
           std::cout << "division by zero not allowed" << std::endl;
           break;

          default:
            std::cout << "enter a valid operation" << std::endl;
    }

    return 0;
}