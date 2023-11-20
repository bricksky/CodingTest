#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int answer = 0;

    if (num >= 1 && num < 8000000) {
        while (num != 1) {
            if (num % 2 == 0) {
                answer++;
                num = num / 2;
            } else {
                answer++;
                num = (num * 3) + 1;
            }
            if (answer == 500 && num != 1) {
                return -1;
            }
        }
    }
    return answer;
}
