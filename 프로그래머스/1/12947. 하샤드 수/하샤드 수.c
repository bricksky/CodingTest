#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int copy = 0;
    int sum = 0;
    copy = x;

    while(copy>=1 && copy<=10000){
        sum += copy%10;
        copy /= 10;
    } 
    
    answer = (x % sum == 0) ? true : false;
     
    return answer;
}