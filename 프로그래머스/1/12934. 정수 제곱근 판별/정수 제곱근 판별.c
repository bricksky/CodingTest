#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
 
    if(n>=1 && n<=50000000000000){
        for(double x=0; x<=n; x++){
            if(n == x * x){
                answer = (x+1) * (x+1);
                break;
            } else {
                answer = -1;
            }
        }
    }
    return answer;
}