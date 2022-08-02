#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int bn[MAX_SIZE][MAX_SIZE];
int leng = 0;

void goBinary(int num, int i){ //a function that obtains a binary number
	
	while (num > 0){ //Put binary numbers upside down
		int bin = (num%2); 
		bn[i][leng] = bin;
		leng++;
		num/=2;
	}
}

int main(){
	int n, num;
	int arr1[16];
	int arr2[16];
	char result[MAX_SIZE][MAX_SIZE];
	
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", arr1 + i);
	for(int j=0; j<i; j++)
		scanf("%d", arr2 + j);
		
	for (i = 0; i < n; i++){ //반복
		num = arr1[i] | arr2[i];
		goBinary(num, i); //이진수
		
		for(j = 0; j< leng; j++)
			result[i][j] = ((bn[i][j] >= 1)? '#' : ' '); //출력 관련
		for (int k = leng -1; k >= 0; k--)
			printf("%c", result[i][k]);
			
		printf("\n");
		
		leng=0;
	}
}
