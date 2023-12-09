#include <iostream>
using namespace std;

int main()
{
    long long N, M;  
    cin >> N;
    cin >> M;
    
    if (N >= -2000000000 && M <= 2000000000) {
        cout << abs(N - M) << endl; 
    }
    return 0;
}
