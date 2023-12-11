#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;

        if (sum == 3)
        {
            cout << "A ";
        }
        else if (sum == 2)
        {
            cout << "B ";
        }
        else if (sum == 1)
        {
            cout << "C ";
        }
        else if (sum == 0)
        {
            cout << "D ";
        }
        else
            cout << "E ";
    }
    cout << '\n';

    return 0;
}
