#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    // 세 각의 합이 180이 아닌 경우
    if (a + b + c != 180) {
        cout << "Error" << '\n';
    }
    // 세 각이 모두 60인 경우
    else if (a == 60 && b == 60 && c == 60) {
        cout << "Equilateral" << '\n';
    }
    // 세 각의 합이 180이고, 두 각이 같은 경우
    else if (a == b || b == c || a == c) {
        cout << "Isosceles" << '\n';
    }
    // 나머지 경우는 부등변삼각형
    else {
        cout << "Scalene" << '\n';
    }
}