#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a>=0 && a<=6 && b>=0 && b<=6 && c>=0 && c<=6){
        if(a==b && b==c)            // a, b, c 모두 같은 경우
            cout << 10000 + a*1000;
        else if(a==b && a!=c)       // a와 b는 같고 c는 다른 경우
            cout << 1000 + a*100;
        else if(a==c && a!=b)       // a와 c는 같고 b는 다른 경우
            cout << 1000 + a*100;
        else if(b==c && b!=a)       // b와 c는 같고 a는 다른 경우
            cout << 1000 + b*100;
        else
            cout << max({a, b, c}) * 100;
    }
}

