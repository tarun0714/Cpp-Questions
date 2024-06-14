#include <iostream>

using namespace std;

int decimalToBinary(int n){

    int ans = 0;
    int temp = 1;

    while(n>0){
        int lastDigit = n%10;
        ans += temp * lastDigit;
        temp *= 2;
        n /= 10;
    }
    return ans;
}

int main(){

    int n;
    cin >> n;

    cout << decimalToBinary(n) << endl;

    return 0;
}