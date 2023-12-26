#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int a = 0, b = 0;

    cin >> N;

    for(int i=1; i<=N; i++){
        cin >> a >> b;
        cout << a+b << '\n';
    }
    return  0;
}