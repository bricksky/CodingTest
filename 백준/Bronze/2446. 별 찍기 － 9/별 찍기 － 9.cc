#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    // 역피라미드 출력 부분
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i - 1; j++)
            cout << ' ';
        for (int j = 1; j <= (2 * N) - (2 * i) + 1; j++)
            cout << '*';
        cout << '\n';
    }

    // 피라미드 출력 부분
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= N - i - 1; j++)
            cout << ' ';
        for (int j = 1; j <= (2 * i) + 1; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
