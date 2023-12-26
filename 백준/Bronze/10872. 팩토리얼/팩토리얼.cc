#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;

    while(cin >> N){
        int result = 1;
        for(int i=1; i<=N; i++){
            result *= i;
        }
        cout << result <<'\n';
    }
    return 0;
}