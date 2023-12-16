#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[9];
    int sum=0;
    
    // 9개의 수를 입력받아 sum변수에 차례대로 저장하는 부분
    for (int i = 0; i < 9; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    // 크기 순서대로 입력받은 9개의 수를 정렬하는 부분
    sort(arr, arr + 9);
    
    // 9개의 수 중 2개의 수를 골라 전체 합에서 제외했을 때 100이 나오면 됨.
    for (int i = 0; i < 8; i++){
        for (int j = 1; j < 9; j++){

            if (sum - arr[i] - arr[j] == 100){
                
                // 9개의 수를 돌며 sum이 100이 되도록 하는 2개의 수를 찾을때 까지 반복.
                // 총 합이 100이 되도록 하는 7개의 수를 찾으면 배열에 넣어 결과 출력.
                for (int k = 0; k < 9; k++){
                    if (k == i || k == j) continue;
                    cout << arr[k] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}
