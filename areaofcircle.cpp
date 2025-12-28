#include<iostream>
using namespace std;

int main()
{
const double PI = 3.1415;
double area , radius ;
std::cout << "enter radius :" << endl;
std::cin >> radius;
area = PI * radius*radius;
std::cout << "area is " << area << endl;
    return 0;
}