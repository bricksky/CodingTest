#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    // n까지 전부 돌며 확인.
    for(int i=1; i<n; i++){
        int a = i;
        int sum = i;

        // 분해합이 아닌 경우, 
        while(a>0){
            sum += a%10;
            a = a/10;
        }

        if(sum==n){
            cout << i << '\n';
            return 0;
        }
    }
    cout << "0" << '\n';
}