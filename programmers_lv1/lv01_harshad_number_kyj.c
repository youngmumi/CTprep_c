#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    
    int sum=0;
    int tmp=x;
    
    while(tmp!=0){
        sum==tmp%10;
        tmp/=10;
    }
    
    return (x%10==0) ? true: false; 
    
}
