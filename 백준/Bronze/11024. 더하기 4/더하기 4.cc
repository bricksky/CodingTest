#include <iostream>
#include <sstream>

using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        string s;

        getline(cin, s);

        // sumstream(s)에선 문자열 형태.
        stringstream sumstream(s);

        int sum = 0;    
        int result;

        // 전달하는 과정에서는 숫자 형태.
        while(sumstream >> result){
        sum += result;
       }

       cout << sum << '\n';
    }
    return 0;
}