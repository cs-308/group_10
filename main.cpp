#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    //cout<< endl;
    printf("\n");
    int x;
    cin >> x;
    //cout<<"The factorial of"<<x<< " is "<< factorial(x)<< endl;
    printf("The factorial of %d is %d\n", x, factorial(x));

    return 0;
}
