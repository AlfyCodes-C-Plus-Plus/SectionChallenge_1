#include <iostream>

int main()
{

    int fav_num;
    std::cout << "Enter your favorite number between 1 and 100: ";

    std::cin >> fav_num;

    std::cout << "Amazing! That's my favorite number too!" << std::endl;
    std::cout << "No really! ";
    std::cout << fav_num;
    std::cout << " is my favorite number!";
    return 0;
}
