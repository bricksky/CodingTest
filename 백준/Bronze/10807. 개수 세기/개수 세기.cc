#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[100];
    int n, c;

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    cin >> c;
    
    int result = 0;
    for(int i=1; i<=n; i++)
        if(arr[i]==c){
            result++;
        }
    cout << result;
}

