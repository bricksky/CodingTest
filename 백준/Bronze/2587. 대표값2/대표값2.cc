#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    int num[5];
    
    // 5개의 수를 입력받는 부분
    for(int i=0; i<5; i++)
    {
        cin >> num[i];  // 배열에 숫자를 입력받는 부분
        sum += num[i];
    }
    
    sort(num, num+5);
    
    // 입력받은 5개의 수의 평균을 출력하는 부분
    cout << sum/5 << '\n';
    
    // 입력받은 5개의 수 중 중간 값을 출력하는 부분
    cout << num[2] << '\n';
    
    return 0;
}