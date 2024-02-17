#include <iostream>
using namespace std;

// 최대공약수 구하는 부분
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

// 최소공배수 구하는 부분
int lcm(int a, int b)
{
    return (a*b) / gcd(a,b);
}

// 결국 최소공배수 활용해서 main 함수 돌리는 부분
int num1, num2;

int main()
{
    int count;
    cin >> count;
    
    for(int i=1; i<=count; i++){
        cin >> num1 >> num2;
        cout << lcm(num1, num2) << '\n';
    }
}

