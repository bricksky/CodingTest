#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A,B;
    
    while(cin >> A >> B){
        
        if(A==0 && B==0)
            break;
        else
            cout << A + B <<'\n';
    }
    return 0;
}