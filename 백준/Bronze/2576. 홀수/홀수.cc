#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    int min = 100;
    
    // 반복문을 활용해 7번의 입력을 받는 부분
    if(n < 100){
        for(int i=0; i<7; i++)
        {
            cin >> n;
            if(n % 2 != 0)
            {
                sum += n;
                if(n < min)
                    min = n;
            }
        }
        // 홀수가 없는 경우 -1을 출력하고 홀수가 있는 경우 합을 출력하는 부분
        if(sum == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << sum << '\n';
            cout << min << '\n';
        }
    }
    return 0;
}