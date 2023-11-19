#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a>=-10000000 && a<=10000000 &&
      b>=-10000000 && b<= 10000000){
        if(a==b){
            answer = a;
        }
        else if(a>b){
            for(b; b<=a; b++){
                answer += b;
            }
        }
        else if(b>a){
            for(a; a<=b; a++){
                answer += a;
            }
        }
    }
    return answer;
}