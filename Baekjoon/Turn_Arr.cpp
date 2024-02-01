문제: 16927
https://www.acmicpc.net/submit/16927/72768443

#include <iostream>
using namespace std;

#define MAX 300+1

int N, M;
int R;

int A[MAX][MAX];

void input(){
    cin >> N >> M >> R;
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            cin >> A[i][j];
        }
    }
}

void print(){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            cout << A[i][j];
        }
    }
}

void solve(){
    input();
    print();
}

int main(){
    
}
