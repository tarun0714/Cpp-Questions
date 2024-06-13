//check wheather this is pythogorian triplet or not

#include <iostream>
#include <math.h>

using namespace std;

bool isTriplet(int x, int y, int z){

    int a = max(x, max(y,z));
    int b, c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else {
        b=x;
        c=y;
    }

    if((pow (a, 2))==(pow(b, 2)+pow(c, 2))){
        return true;
    }
    else
        return false;
}

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    if(isTriplet(a,b,c)){
        cout << "Yes, it is a pythogorian triplet";
    }else{
        cout << "No, it is not a pythogorian triplet";
    }

    cout << endl;
}