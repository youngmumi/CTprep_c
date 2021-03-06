 문제: https://school.programmers.co.kr/learn/courses/30/lessons/92334
strtok 함수 설명: https://blockdmask.tistory.com/382
stcrmp 함수 설명: https://blockdmask.tistory.com/391

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// id_list_len은 배열 id_list의 길이입니다.
// report_len은 배열 report의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    //init 
    int tmp[id_list_len][id_list_len];
    for(int i = 0; i<id_list_len; ++i)
    {
        for(int j =  0; j<id_list_len; ++j)
        {
            tmp[i][j] = 0; //initialize 'tmp' String
        }
    }

    
    for(int i = 0; i<report_len; ++i)
    {
        char* pch; //WHY?
        pch = strtok (report[i]," "); //Cut from Blank

        int idx1 = 0;
        for(int j = 0; j<id_list_len; ++j)
        {
            if(strcmp(id_list[j],pch) == 0) 
            {
                idx1 = j; //Index to display the reporter
            }
        }
        
        pch = strtok(NULL, " "); //Cut at the end of a string
        int idx2 = 0;
        for(int j = 0; j<id_list_len; ++j) 
        {
            if(strcmp(id_list[j],pch) == 0)
            {
                idx2 = j; //Index that displays the reported person
            }
        }

        tmp[idx1][idx2] += 1; //WHY?        
    }

    int tmp2[id_list_len];
    for(int i = 0; i<id_list_len; ++i)
    {
        tmp2[i] = 0;
        for(int j =  0; j<id_list_len; ++j)
        {
            if(tmp[j][i] > 0)
            {
                tmp2[i] += 1; //a user has been reported
            }
        }
    }

    int* answer = (int*)malloc(id_list_len*sizeof(int));
    for(int i = 0; i<id_list_len; ++i)
    {
        answer[i] = 0;
        for(int j =  0; j<id_list_len; ++j)
        {
            if(tmp[i][j] > 0 && tmp2[j] >= k) //If the reported person is reported more than k times,
            {
                answer[i] += 1; //Send mail to the reporter
            }
        }
    }



    return answer;

}
