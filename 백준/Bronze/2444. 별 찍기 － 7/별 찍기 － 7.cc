#include <iostream>
using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int N;
   cin >> N;
    
    // 윗줄의 피라미드를 출력하는 부분
    for(int i=1; i<=N; i++){
            for(int j=1; j<=N-i; j++) cout << ' ';
            for(int j=1; j<=2*i -1; j++) cout  << '*';
            cout << '\n';
        }
    
    // 아랫줄의 역피라미드를 출력하는 부분
   for(int i=N-1; i>=1; i--)
   {
       for(int j=1; j<=N-i; j++) cout << ' ';
       for(int j=1; j<=2*i -1; j++) cout <<'*';
       cout << '\n';
   }
}

