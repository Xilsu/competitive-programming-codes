#include <bits/stdc++.h>

#define MAX_SUDOKU 9

using namespace std;

void imprimeSudoku(int sudoku[][MAX_SUDOKU], int N){
    for(int i = 0; i < N*N; i++){
        cout << sudoku[i][0];

        for(int j = 1; j < N*N; j++){
            cout << " "<< sudoku[i][j]; 
        }

        cout << endl;
    }
}

bool validateBoard(int sudoku[][MAX_SUDOKU], int N, int row, int col, int key){
    for(int i = 0; i < N*N; i++){
        if(sudoku[row][i] == key){
            return false;
        }
    }

    for(int i = 0; i < N*N; i++){
        if(sudoku[i][col] == key){
            return false;
        }
    }

    int auxRow = row-(row%N), auxCol = col-(col%N);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(sudoku[i+auxRow][j+auxCol] == key){
                return false;
            }
        }
    }

    return true;
}

bool solveBoard(int sudoku[][MAX_SUDOKU], int N, int row, int col){
    if(col == N*N){
        col = 0;
        row += 1;
        
        if(row == N*N){
            return true;
        }
    }

    if(sudoku[row][col] != 0){
        return solveBoard(sudoku, N, row, col+1);
    }
    
    for(int i = 1; i <= N*N; i++){
        if(validateBoard(sudoku, N, row, col, i)){
            sudoku[row][col] = i;

            if(solveBoard(sudoku, N, row, col+1)){
                return true;
            }
        }

        sudoku[row][col] = 0;
    }

    return false;
}

int main(){
    int N;
    int sudokuBoard[MAX_SUDOKU][MAX_SUDOKU];
    bool flag = false;

    while(cin >> N){
        if(flag == true){
            cout << endl;
        }

        flag = true;

        for(int i = 0; i < N*N; i++){
            for(int j = 0; j < N*N; j++){
                cin >> sudokuBoard[i][j];
            }
        }

        if(solveBoard(sudokuBoard, N, 0, 0)){
            imprimeSudoku(sudokuBoard, N);
        }
        else{
            cout << "NO SOLUTION" << endl;
        }
    }

    return 0;
}