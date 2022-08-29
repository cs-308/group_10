#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int x;
    cin >> x;
    cout<<"The factorial of"<<x<< " is "<< factorial(x)<< endl;
    return 0;
}
