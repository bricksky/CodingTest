#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    if(0<n<1000 && n/10<=k<1000){
        if(n<10)
            return answer = 12000*n + 2000*k;
        else if(10<=n && n%10==0)
            return answer = 12000*n + 2000*(k-(n/10));
        else 
            return answer = 12000*n + 2000*(k-(n/10));
    }
    return answer;
}

