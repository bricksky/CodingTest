#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N = 0;
    cin >> N;
    for(int i=1; i<=N; i++){
        for(int k=0; k<N-i; k++){
            cout << ' ';
        }
        for(int j=1; j<=i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
