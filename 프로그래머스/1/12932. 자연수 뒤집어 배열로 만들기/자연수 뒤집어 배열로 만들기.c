#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int)*1000);
    int i = 0;
    
    if(n>0 && n<=100000000000){
        while(n>0){
            answer[i] = n%10;
            n /= 10;
            i++;
        }
    }
    return answer;
}