#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    long long q;

    cin >> n;

    q = sqrt(n);

    if((q*q)<n){
        ++q;
    } 
    cout << q << '\n';
    return 0;
}