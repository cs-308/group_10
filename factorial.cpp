#include "functions.h"
#include <iostream>
using namespace std;

int factorial(int n){
    while(n<0){
        cout<<"Enter a positive number"<<endl;
        int x;cin>>x;
        n = x;
    }
    // if(n!=1){
	// return(n * factorial(n-1));
    // }
    // else return 1;
    if (n==1) return 1;
    else {
        return (n * factorial(n-1));
    }
}
