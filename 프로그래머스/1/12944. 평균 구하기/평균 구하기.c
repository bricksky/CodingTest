#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    double total = 0;
    
    if(1<=arr_len && arr_len<=100){
        for(int i=0; i<arr_len; i++){
            total += arr[i]++;
        }
        answer = total / arr_len;
    }
    return answer;
}