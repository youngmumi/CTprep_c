#include <stdio.h>

int solution(long long num) { //must be 'long long'
    
     int answer=0;
    
    while(num!=1){
    	if(num!=0){
    		if(num%2==0) {
            num/=2;
            answer++;
            }
        else {
            num=num*3+1;
            answer++;
        }
		}
        else if(num==1) break;
    }
   
    if(answer>=500) return -1 ;
    else return answer;
        
    
}
