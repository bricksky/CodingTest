#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n){
    int answer = 0;
    
    if(0<=n && n<=1000000){
        while(n>0){
            answer += n%10;
            n /= 10;
        }
    }
    return answer;
}

