#include <iostream>
#include <cmath>

int main()
{

    double c;
    double a;
    double b;

    std::cout << "Welcome to the hypotenuse calculator!" << '\n' << "give me the two sides of the right angle please!" << '\n' << ">>";
    std::cin >> a;
    std::cout << ">>";
    std::cin >> b;
    
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenuse is: " << c << "!\n";

    return 0;
}