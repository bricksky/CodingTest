#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2*sizeof(int));
    if(0<money && money<=1000000){
        if(money%5500 == 0){
            answer[0] = money/5500;
            answer[1] = 0;
        }
        else{
            answer[0] = money/5500;
            answer[1] = money- (money/5500)*5500;
        }
    }else{
        answer[0] = 0;
        answer[1] = 0;
    }
    return answer;
}