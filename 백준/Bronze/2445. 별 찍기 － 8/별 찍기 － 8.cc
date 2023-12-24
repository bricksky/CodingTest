#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    for(int i=1; i<=N-1; i++){
        for(int j=1; j<=i; j++) cout << '*';
        for(int j=1; j<=2*(N-i); j++) cout << ' ';
        for(int j=1; j<=i; j++) cout << '*';
        cout << '\n';
    }
    
    for(int j=1; j<=2*N; j++)
        cout << '*';
        cout << '\n';
    
    for(int i=1; i<=N-1; i++){
        for(int j=1; j<=N-i; j++) cout << '*';
        for(int j=1; j<=2*i; j++) cout << ' ';
        for(int j=1; j<=N-i; j++) cout << '*';
        cout << '\n';
    }
}



//1번줄: * 2개 / 공백 8개
//2번줄: * 4개 / 공백 6개
//3번줄: * 6개 / 공백 4개
//4번줄: * 8개 / 공백 2개

//5번줄: * 10개 / 공백 0개

//6번줄: * 8개 / 공백 2개
//7번줄: * 6개 / 공백 4개
//8번줄: * 4개 / 공백 6개
//9번줄: * 2개 / 공백 8개