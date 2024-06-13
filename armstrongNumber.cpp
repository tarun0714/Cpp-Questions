//check whether the number is armstrong or not

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int original_n=n;
    int sum = 0;

    while(n>0){
        int lastDigit;
        lastDigit = n % 10;
        sum += pow(lastDigit , 3);
        n=n/10;
    }

    if(sum == original_n){
        cout << "Armstrong Number";
    }
    else{
        cout << "Not An Armstrong Number";
    }
}