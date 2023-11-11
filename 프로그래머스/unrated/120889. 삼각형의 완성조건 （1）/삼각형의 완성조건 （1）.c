#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int num0 = sides[0];
    int num1 = sides[1];
    int num2 = sides[2];

    if (num0 > num1 && num0 > num2) {
        if (num0 < num1 + num2) {
            answer = 1;
        } else {
            answer = 2;
        }
    } else if (num1 > num0 && num1 > num2) {
        if (num1 < num0 + num2) {
            answer = 1;
        } else {
            answer = 2;
        }
    } else if (num2 > num0 && num2 > num1) {
        if (num2 < num0 + num1) {
            answer = 1;
        } else {
            answer = 2;
        }
    } else if(num0==num1 && num1==num2){
        answer = 1;
    } else if(num0 == num1 && num1 != num2){
        answer = 1;
    } else if(num0 == num2 && num1 != num2){
        answer = 1;
    } else if(num1 == num2 && num0 != num1){
        answer = 1;
    }
    else {
        answer = 2;
    } 
    return answer;
}
