#include <iostream>
#include <stack>

using namespace std;

int main(){
    int k;
   
    stack<int> stack;
    
    cin >> k;

   for(int i; i<k; i++){
        int num;
        cin >> num;

        if(num==0){
            stack.pop();
        } else {
            stack.push(num);
        }
   }
   int sum = 0;

   while(!stack.empty()){
    /*
    stack.pop();만 실행해서는 원하는 결과를 얻을 수 없음.
    sum 변수에 top의 값을 읽어오고 읽어온 후에 pop을 통해 스택에서 값을 제거하는 과정을 거쳐야 함.
    */
    sum += stack.top();
    stack.pop();
   }

   cout << sum;
}