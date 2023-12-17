#include <iostream>
#include <algorithm>
using namespace std;

int num[21];

// 카드를 역순으로 놓는 함수
void reverse(int a, int b)
{
    // 해당 반복문은 전체를 기준으로 절반을 나누어, swap해야 하는 범위를 정하고 있다.
    // 가운데 값을 기준으로 배열의 첫 요소와 배열의 마지막 요소를 교환하여 역순으로 만든다.
    for(int i=0; i<(b-a+1)/2; i++)
        swap(num[a+i], num[b-i]);
}

int main()
{
    int a, b;
    
    for(int i=1; i<=20; i++)
        num[i] = i;
    
    for(int i=1; i<=10; i++){
        cin >> a >> b;
        reverse(a, b);
    }
    
    for(int i=1; i<=20; i++)
        cout << num[i] << ' ';
}
