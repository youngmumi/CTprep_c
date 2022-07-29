#include <stdio.h>
#include <stdlib.h>
#define DataType int

typedef struct Snode {  //스택 노드 구조 정의 
	DataType data;
	struct Snode *link;
} Snode;

typedef struct Linkedstack{ //스택의 헤드 노드 구조 정의 
	Snode *top;
} LinkedStack;

void init_stack(Linkedstack *LS){ //스택 초기화 
	LS->top = NULL;
}

int is_stack_full(Snode *node){ //스택이 포화상태인지 판단 
	return node == NULL;
}

int is_stack_empty(Linkedstack *LS){ //스택이 공백인지 판단 
	return LS->top == NULL;
}

void push (Linkedstack *LS, DataType data){ //스택에 삽입 
	Snode *new = (Snode *)malloc(sizeof(Snode));
	if(is_stack_full(new)){
		printf("포화상태임\n");
		exit(1);
	}
	else {
		new -> data = data;
		new -> link = LS->top;
		LS->top = new;
	}
}

DataType pop (Linkedstack *LS){ //스택에서 삭제 
	if(is_stack_full(LS)){
		printf("이미 공백이라 삭제 못함\n");
		exit(1);
	}
	else {
		Snode *deleted = LS->top;
		DataType data = deleted->data;
		LS->top = LS->top->link;
		free(deleted);
		return data;
	}
}

DataType peek (Linkedstack *LS){ //스택에서 top 데이터 반환 
	if(is_stack_empty(LS)){
		printf("공백이라 데이터 없음\n");
		exit(1);
	}
	else return LS->top->data;
}
