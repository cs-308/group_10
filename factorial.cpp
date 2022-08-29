#include "functions.h"
#include <iostream>
using namespace std;

int factorial(int n){
    if (n<0) {
        cout << "Enter a positive number" << endl;
        exit(1);
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
