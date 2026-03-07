// Number of Ways.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int num1, num2;
int ways(int num)
{
    if (num >= num2)
    {
        return num == num2;
    }
    return ways(num + 1) + ways(num + 2) + ways(num + 3);
}
int main()
{
    std::cin >> num1 >> num2;
    std::cout << ways(num1);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
