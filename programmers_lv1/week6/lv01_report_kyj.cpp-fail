#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    board.erase(unique(board.begin(), board.end()), board.end());
    
    for(int i=0; i<30; i++){
        moves[i]=board[0][i];
        board.erase(unique(board.begin(), board.end()), board.end());
    }
    
    for(int i=30; i=0; i--){
        if(moves[i]==moves[i+1]){
            answer+=2;
            moves.erase(moves.begin() + i);
            moves.erase(moves.begin() + i+1);
        }
    }
    
    return answer;
}
