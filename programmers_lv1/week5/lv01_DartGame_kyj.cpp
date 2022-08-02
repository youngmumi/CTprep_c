#include <iostream>
#include <string> //문자열을 쓰기 위한 헤더파일
#include <cmath> //substr(i,1)을 쓰기 위한 헤더 파일
#include <cctype> //isdigit(tmp[i])을 위한 헤더파일

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int tmp[100]; //임시 배열 선언(길이는 임시로 100으로 정의)

    for(int i=0; i<dartResult.length();i++){ //주어진 배열 length만큼 반복
            tmp[i] == dartResult.substr(i,1); //하나씩 나눠서 tmp에 입력
    }

    for(int i=0; i<tmp.length();i++){
        if(isdigit(tmp[i])){ //tmp[i]에 있는 값이 정수일 때
            
        }
        
    }
    
    return answer;
}
