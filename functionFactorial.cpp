#include <iostream>
#include <math.h>

using namespace std;

int fact(int n){
    int factorial = 1;

    for(int i=2; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){

    int n;
    cin >> n;

    int ans;
    ans = fact(n);
    
    cout << ans;

    return 0;
}