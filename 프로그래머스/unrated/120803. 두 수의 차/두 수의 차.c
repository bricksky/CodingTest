#include <stdio.h>

int solution(int num1, num2) {
    int answer = 0;
    if(-50000 <= num1 <= 50000 && -50000<= num2 <= 50000)
        answer = num1 - num2;
    return answer;
}
