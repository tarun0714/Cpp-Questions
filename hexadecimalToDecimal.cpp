#include <bits/stdc++.h>

using namespace std;

int hexadecimalToDecimal(string n){
    int ans = 0;
    int temp  = 1;

    int s = n.size();

    for (int i=s-1; i>=0; i--){
        if(n[i] >= '0' && n[i] <='9'){
            ans +=  temp*(n[i]-0);
        }
        else if (n[i] > 'A' && n[i] <='F'){
            ans += temp*(n[i]-'A' + 10);
        }
        temp *= 16;
    }
    return ans;
}

int main(){
    string n;
    cin >> n;

    cout << hexadecimalToDecimal(n) << endl;
}