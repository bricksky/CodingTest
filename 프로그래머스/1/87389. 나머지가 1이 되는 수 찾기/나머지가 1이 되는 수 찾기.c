#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    if (n >= 3 && n <= 1000000) {
        for (int i = 2; i <= n - 1; i++) {
            if ((n - 1) % i == 0) {
                answer = i;
                break;
            }
        }
    }
    
    return answer;
}
