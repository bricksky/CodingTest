#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    long long a = 0;
    long long b = 0;
    
    cin >> a >> b;
    
    if(a>=1 && a<=1000 && b>=1 && b<=1000){
        if(a>b){
            swap(b, a);
        }
        if(a==b || b-a == 1){
            cout << 0;
        }
        else
            cout << b-a-1 << '\n';
      
        for(long long i=a+1; i<b; i++){
            cout << i << ' ';
        }
    }
}
