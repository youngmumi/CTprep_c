문제: https://school.programmers.co.kr/learn/courses/30/lessons/67256

#include <stdio.h>
#include <stdlib.h>

char* solution(int numbers[],int length,char* hand){
	
	int two[]={3,1,0,1,2,1,2,3,2,3,4,99,4}; //키패드 2와 나머지 키패드의 떨어진 거리  
											// ex)2와 0의 거리=3, 2와 1의 거리=1, 2와 9의거리=3  
											//인덱스 10번 12번은 별과 샾 11은 의미없는수  
											
	int five[]={2,2,1,2,1,0,1,2,1,2,3,99,3}; 	//키패드 5와 나머지 키패드의 떨어진 거리 
	int eight[]={1,3,2,3,2,1,2,1,0,1,2,99,2};  	// 8
	int zero[]={0,4,3,4,3,2,3,2,1,2,1,99,1}; 	// 0
	
	char* answer=(char*)malloc(length+1);
	
	int i=0;
	
	int left= 10; //왼손 별 시작 
	int right= 12; //오른손 샾 시작 
		
	for(i=0; i<length; i++){
		
		switch(numbers[i]){
			case 1://왼 손 
			case 4:
			case 7:
				answer[i]='L';
				left=numbers[i];
				break;
			case 3://오른손  
			case 6:
			case 9:
				answer[i]='R';
				right=numbers[i];
				break;
			//2, 5, 8, 0 에 대해서는 따로처리  
			case 2: 
				if(two[left] < two[right]){		//왼손이 오른손보다 가깝다면 L 
					answer[i]='L';
					left=numbers[i];
				}
				else if(two[left] >two[right]){	//멀다면 R 
					answer[i]='R';
					right=numbers[i];
				}
				else{ 							//같다면 hand를 읽고 그에맞는것 
					if(*hand=='r'){
						answer[i]='R';
						right=numbers[i];
					}
					else{
						answer[i]='L';
						left=numbers[i];
					}
				}
				break;
			case 5:
				
				if(five[left] < five[right]){
					answer[i]='L';
					left=numbers[i];
				}
				else if(five[left] >five[right]){
					answer[i]='R';
					right=numbers[i];
				}
				else{
					if(*hand=='r'){
						answer[i]='R';
						right=numbers[i];
					}
					else{
						answer[i]='L';
						left=numbers[i];
					}
				}
				break;
			case 8:
				
				if(eight[left] < eight[right]){
					answer[i]='L';
					left=numbers[i];
				}
				else if(eight[left] >eight[right]){
					answer[i]='R';
					right=numbers[i];
				}
				else{
					if(*hand=='r'){
						answer[i]='R';
						right=numbers[i];
					}
					else{
						answer[i]='L';
						left=numbers[i];
					}
				}
				break;
			case 0:
				
				if(zero[left] < zero[right]){
					answer[i]='L';
					left=numbers[i];
				}
				else if(zero[left] >zero[right]){
					answer[i]='R';
					right=numbers[i];
				}
				else{
					if(*hand=='r'){
						answer[i]='R';
						right=numbers[i];
					}
					else{
						answer[i]='L';
						left=numbers[i];
					}
				}
				break;
				
		}
		//printf("Hand:%c\n",answer[i]);
		//printf("number[%d]:%d\n",i,numbers[i]);
		//printf("left:%d right:%d\n\n",left,right);
	}
	answer[i]='\0';
	return answer;
	
}

int main(){
	int a[]={1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
	int aa[]={7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2};
	int aaa[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	char* b=malloc(100);
	
	b=solution(a,11,"right");
	printf("%s\n",b);
	
	b=solution(aa,11,"left");
	printf("%s\n",b);
	
	b=solution(aaa,10,"right");
	printf("%s\n",b);
}
