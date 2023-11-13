#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int i;
    int j;
    int temp;
    
    if(2<=numbers_len && numbers_len<=100){
        for(int i=0; i<numbers_len; i++){
            for(int j=i+1; j<numbers_len; j++){
                if(numbers[i]<numbers[j]){
                    temp=numbers[i];
                    numbers[i]=numbers[j];
                    numbers[j]=temp;
                }
                answer = numbers[0] * numbers[1];
            }
        }
    } 
    return answer;
}