// C++ program to find GCD of two numbers
#include "functions.h"

#include <iostream>
using namespace std;
// Function to return gcd of a and b
// int gcd(int a, int b)
// {
// 	int result = min(a, b); // Find Minimum of a nd b
// 	while (result > 0) {
// 		if (a % result == 0 && b % result == 0) {
// 			break;
// 		}
// 		result--;
// 	}
// 	return result; // return gcd of a nd b
// }

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}