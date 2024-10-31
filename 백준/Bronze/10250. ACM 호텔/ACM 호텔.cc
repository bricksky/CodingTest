#include <iostream>

using namespace std;

int main(){
    int count;
    int h, w, n;
    int result;

    cin >> count;

    for(int i = 0; i < count; i++){
        cin >> h >> w >> n;
        
        int floor = (n % h == 0) ? h : n % h;
        int room = (n % h == 0) ? (n / h) : (n / h) + 1;
        
        result = floor * 100 + room;
        cout << result << '\n';
    }
    return 0;
}
