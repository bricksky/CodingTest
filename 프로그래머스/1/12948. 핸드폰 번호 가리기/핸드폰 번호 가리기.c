#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* phone_number) {
    size_t len = strlen(phone_number);

    char* answer = (char*)malloc(len + 1); 
    strcpy(answer, phone_number);

    if (len >= 4 && len <= 20) {
        for (size_t i = 0; i < len - 4; i++) {
            answer[i] = '*';
        }
    }

    return answer;
}
