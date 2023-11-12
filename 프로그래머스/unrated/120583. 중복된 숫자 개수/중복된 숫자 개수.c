#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    
    if(1<=array_len && array_len<=100 &&
       0<=array[0]&& array[0]<=1000 &&
       0<=n && n<=1000){
        for (int i=0; i<array_len; i++){
            if(array[i] == n){
                answer++;
            }
        }
    }
    return answer;
}