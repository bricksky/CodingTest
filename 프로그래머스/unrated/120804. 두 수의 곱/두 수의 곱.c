#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(num1, num2) {
    int answer = 0;
    if(0<=num1<=100 && 0<=num2<=100)
        answer = num1 * num2;
    return answer;
}