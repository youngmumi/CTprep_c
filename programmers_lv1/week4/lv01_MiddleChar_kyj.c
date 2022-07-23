문제: https://school.programmers.co.kr/learn/courses/30/lessons/12903

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer;
    
    int length= strlen(s); 
    
    if(length%2) { 
        answer = (char *)malloc(sizeof(char) * 2);
        answer[0]= s[length/2];
    }
    else {
        answer = (char *)malloc(sizeof(char) * 3);
        answer[0] = s[length/2-1];
        answer[1] = s[length/2];
    }
    
    return answer;

}
