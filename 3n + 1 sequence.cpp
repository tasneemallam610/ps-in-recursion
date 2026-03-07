// 3n + 1 sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int getSeq(int n)
{
    if (n == 1)
        return 1;
    if (n % 2 == 0)
    {
        return 1 + getSeq(n / 2);
    }
    else
    {
        return 1 + getSeq(3 * n + 1);
    }
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << getSeq(n);
}

