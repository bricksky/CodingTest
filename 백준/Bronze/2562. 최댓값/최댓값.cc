#include <iostream>
using namespace std;

int n, maxvalue, maxindex;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=1; i<=9; i++){
        cin >> n;
        if(maxvalue<n){
            maxvalue = n;
            maxindex = i;
        }
    }
    cout << maxvalue << '\n' << maxindex;
}
