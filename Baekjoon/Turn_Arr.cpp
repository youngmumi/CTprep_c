문제: 16927
https://www.acmicpc.net/submit/16927/72768443

#include <iostream>
using namespace std;

#define MAX 300+1

int N, M; // 배열 크기 N*M
int R; // 입력된 회전 수

int A[MAX][MAX];
int tmp[MAX][MAX];

void rocate(){
    int rocate_num = R % (N*2 + M*2 - 4);
    int x=1, y=1;
    int start = 1;
    int last_i = N;
    int last_j = M;
    
    for(i=1; i=<N; i++){
        for(j=1; j=<M; j++){
            x=1;
            y=1;
            for(int k=0; k<rocate_num; k++){
                if(i=start && j!=last_j)
                    y++;
                if(j=last_j && i!=last_i)
                    x++;
                if(i=last_i && j!=start)
                    y--;
                if(j=start && i!= start)
                    x--;
            }
            tmp[x][y] = A[i][j];
        }
    }
    
}

void print(){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            cout << tmp[i][j];
        }
    }
}

int main(){
    
    cin >> N >> M >> R;
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            cin >> A[i][j];
        }
    }
    
    rocate();
    
    print();
    
    return 0;
}
