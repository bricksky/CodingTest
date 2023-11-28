#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*(3*n)+1); // null을 위해 +1을 해주었다.
    char* a = "수";
    char* b = "박";
    
    if(n>0 && n<=10000){
        answer[0] = '\0';
        
        for(int i=0; i<n; i++){
             if(i%2==0){
                strcat(answer, "수");
            }
             else{
                 strcat(answer, "박");
            }
        }
    }
    return answer;
}

