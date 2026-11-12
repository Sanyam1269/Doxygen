
/**
 * @file main.cpp
 * @brief Demonstration of Doxygen documentation.
 */

#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 *
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief Main function.
 *
 * Program execution starts here.
 */
int main()
{
    int x = 10, y = 20;

    cout << "Sum = " << add(x, y) << endl;

    return 0;
}
