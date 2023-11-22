#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int result = 0;
    int answer = -1;
    
    if(numbers_len>=1 && numbers_len<=9){
        for(int i=0; i<numbers_len; i++){
            result += numbers[i];
        }
        answer = 45-result;
    }
    return answer;
}