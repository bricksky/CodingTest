#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len){
    int* answer = (int*)malloc(sizeof(int)*num_list_len);
    int len = num_list_len-1;
    for(int i = 0; i<num_list_len; i++){
        answer[i] = num_list[len];
        len--;
    }
    return answer;
}