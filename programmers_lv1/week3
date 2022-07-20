#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> 

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(n*strlen("수")); //assign As many as the number of letters
    
    strcpy(answer,""); //initialize 
    
    for(int i=0; i<n; i++){
        if(i%2==0) strcat(answer, "수"); // stored in the destination string
        else strcat(answer, "박");
    }
    

    return answer;
}
