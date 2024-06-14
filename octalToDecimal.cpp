#include <iostream>

using namespace std;

int octalToBinary(int n){
    int ans = 0;
    int temp = 1;

    while (n>1){
        int lastDigit = n%10;
        ans += temp * lastDigit;
        temp *= 8;
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << octalToBinary(n) << endl;

    return 0;
}