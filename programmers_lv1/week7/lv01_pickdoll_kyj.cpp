#include <string>
#include <vector>
#include <stack> // To use stack

using namespace std;


int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    
    for(int i=0;i<moves.size();i++) //Scan all 'moves'
    {
        int check = moves[i] - 1; //-1 because it must be in an array
        for(int j=0;j<board.size();j++) //Scan all 'board'
        {
            if(board[j][check] != 0) //Pass by when it's 0
            {
                if(!s.empty() && s.top() == board[j][check]) //If the stack is empty and on top of the stack is the same as the picked doll
                {
                    s.pop(); //The one on the stack pop
                    answer += 2; //Add 2 to answer
                }
                else
                    s.push(board[j][check]); //Pushing a Caught Doll onto a Stack
                board[j][check] = 0; //Get rid of the picked doll
                break; //break and Move to 14 lines
            }
        }
    }
    
    return answer;
}
