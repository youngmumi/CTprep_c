#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int PrimeNumber(sum){  //a function for getting prime numbers
    
    for(int i=2; i<sum; i++){
        if(sum%i==0) {
            return false;
            break;
        }
    }
    return true;
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int sum=0;
    
    for(int i=0; i<nums_len; i++){   
        for(int j=i+1; j<nums_len; j++){
            for(int k=j+1; k<nums_len; k++){
                
                sum= nums[i]+nums[j]+nums[k]; //Add the number of all cases 
                
                if(PrimeNumber(sum)==true){  //If 'sum' is a prime number, add 'answer'
                    answer++;
                }

            }
        }
    }
    
    return answer;
}
