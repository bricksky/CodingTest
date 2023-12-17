#include <iostream>
using namespace std;

int phone[10000], Y = 0, M = 0;

int main()
{
    int N;
    cin >> N;

    for(int i=0; i<N; i++)
        cin >> phone[i];
        
    for(int i=0; i<N; i++)
        Y += ((phone[i]/30)+1)*10;

    for(int i=0; i<N; i++)
        M += ((phone[i]/60)+1)*15;

    if(Y < M)
        cout << "Y " << Y;
    else if(Y > M)
        cout << "M " << M;
    else
        cout << "Y M " << Y;

    return 0;
}
