#include <bits/stdc++.h>

using namespace std;

long ways = 0;

bool validate(vector<string> chess, int row, int col){
    for(int i = col; i >= 0; i--){
        if(chess[row][i] == '#'){
            return false;
        }
        else if(chess[row][i] == '*'){
            break;
        }
    }

    for(int i = row; i >= 0; i--){    
        if(chess[i][col] == '#'){
            return false;
        }
        else if(chess[i][col] == '*'){
            break;
        }
    }

    for(int i = row; i >= 0; i--){
        for(int j = col; j >= 0; j--){
            if(chess[i][j] == '#'){
                return false;
            }
            else if(chess[i][j] == '*'){
                break;
            }
        }
    }

    for(int i = row; i >= 0; i--){
        for(int j = col; j < 8; j++){
            if(chess[i][j] == '#'){
                return false;
            }
            else if(chess[i][j] == '*'){
                break;
            }
        }
    }

    return true;
}

void solveBoard(vector<string> chess, int row, int col){
    if(col == 8){
        row++;
        col = 0;
    }
    else if(row == 8){
        ways++;
        
        return; 
    }

    if(chess[row][col] != '*'){
        chess[row][col] = '#';

        if(validate(chess, row, col)){
            solveBoard(chess, row, col + 1);
        }

        chess[row][col] = '.';
    }

    solveBoard(chess, row, col + 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> chess;

    for(long i = 0; i < 8; i++){
        string aux;

        cin >> aux;

        chess.push_back(aux);
    }

    solveBoard(chess, 0, 0);

    cout << ways << "\n";

    return 0;
}