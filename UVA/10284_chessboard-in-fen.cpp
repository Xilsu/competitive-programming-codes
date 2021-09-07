/*
    Luis Henrique Morelli
    10284 - Chessboard in FEN
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1225
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vector<bool>> mask;
vector<vector<char>> b;
const int d = 2;
int squares;

void diagonalmove(int i, int j){
    int aux = j + 1;
    
    for(int k = i + 1; k < 8 && aux < 8 && b[k][aux] == '#'; k++){
        squares -= mask[k + d][aux + d];
        mask[k + d][aux + d] = 0;

        aux++;
    }

    aux = j - 1;

    for(int k = i - 1; k >= 0 && aux >= 0 && b[k][aux] == '#'; k--){
        squares -= mask[k + d][aux + d];
        mask[k + d][aux + d] = 0;

        aux--;
    }

    aux = j - 1;

    for(int k = i + 1; k < 8 && aux >= 0 && b[k][aux] == '#'; k++){
        squares -= mask[k + d][aux + d];
        mask[k + d][aux + d] = 0;

        aux--;
    }

    aux = j + 1;

    for(int k = i - 1; k >= 0 && aux < 8 && b[k][aux] == '#'; k--){
        squares -= mask[k + d][aux + d];
        mask[k + d][aux + d] = 0;

        aux++;
    }
}

void linearmove(int i, int j){
    for(int k = i + 1; k < 8 && b[k][j] == '#'; k++){
        squares -= mask[k + d][j + d];
        mask[k + d][j + d] = 0;
    }

    for(int k = i - 1; k >= 0 && b[k][j] == '#'; k--){
        squares -= mask[k + d][j + d];
        mask[k + d][j + d] = 0;
    }

    for(int k = j + 1; k < 8 && b[i][k] == '#'; k++){
        squares -= mask[i + d][k + d];
        mask[i + d][k + d] = 0;
    }

    for(int k = j - 1; k >= 0 && b[i][k] == '#'; k--){
        squares -= mask[i + d][k + d];
        mask[i + d][k + d] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string fen;

    while(cin >> fen){
        mask = vector<vector<bool>> (12, vector<bool> (12, 1));

        for(int i = 0; i < 12; i++){
            mask[i][0] = mask[0][i] = 0;
            mask[i][1] = mask[1][i] = 0;
            mask[i][10] = mask[10][i] = 0;
            mask[i][11] = mask[11][i] = 0;
        }

        int i = 0, j = 0;
        char aux;

        b = vector<vector<char>> (8, vector<char> (8, '#'));
        squares = 64;

        for(unsigned int sq = 0; sq < fen.size(); sq++){
            aux = tolower(fen[sq]);
            
            if(fen[sq] == '/'){
                i++;
                j = 0;
            }
            else if(fen[sq] >= '1' && fen[sq] <= '7')
                j += fen[sq] - '0';
            else if(aux >= 'a' && aux <= 'z'){
                b[i][j] = fen[sq];
                squares--;
                mask[i + d][j + d] = 0;

                j++;
            }
        }

        for(i = 0; i < 8; i++){
            for(j = 0; j < 8; j++){
                if(b[i][j] != '#'){
                    aux = b[i][j];

                    if(aux != 'p' && aux != 'P')
                        aux = tolower(aux);

                    switch(aux){
                        case 'k':
                            squares -= mask[i + d][j - 1 + d];
                            mask[i + d][j - 1 + d] = 0;

                            squares -= mask[i + d][j + 1 + d];
                            mask[i + d][j + 1 + d] = 0;

                            squares -= mask[i - 1 + d][j + d];
                            mask[i - 1 + d][j + d] = 0;

                            squares -= mask[i - 1 + d][j - 1 + d];
                            mask[i - 1 + d][j - 1 + d] = 0;

                            squares -= mask[i - 1 + d][j + 1 + d];
                            mask[i - 1 + d][j + 1 + d] = 0;

                            squares -= mask[i + 1 + d][j + d];
                            mask[i + 1 + d][j + d] = 0;

                            squares -= mask[i + 1 + d][j - 1 + d];
                            mask[i + 1 + d][j - 1 + d] = 0;

                            squares -= mask[i + 1 + d][j + 1 + d];
                            mask[i + 1 + d][j + 1 + d] = 0;

                            break;
                        case 'q':
                            linearmove(i, j);
                            diagonalmove(i, j);

                            break;
                        case 'r':
                            linearmove(i, j);

                            break;
                        case 'b':
                            diagonalmove(i, j);

                            break;
                        case 'n':
                            squares -= mask[i - 2 + d][j - 1 + d];
                            mask[i - 2 + d][j - 1 + d] = 0;

                            squares -= mask[i - 2 + d][j + 1 + d];
                            mask[i - 2 + d][j + 1 + d] = 0;

                            squares -= mask[i - 1 + d][j - 2 + d];
                            mask[i - 1 + d][j - 2 + d] = 0;

                            squares -= mask[i - 1 + d][j + 2 + d];
                            mask[i - 1 + d][j + 2 + d] = 0;

                            squares -= mask[i + 1 + d][j - 2 + d];
                            mask[i + 1 + d][j - 2 + d] = 0;

                            squares -= mask[i + 1 + d][j + 2 + d];
                            mask[i + 1 + d][j + 2 + d] = 0;

                            squares -= mask[i + 2 + d][j - 1 + d];
                            mask[i + 2 + d][j - 1 + d] = 0;

                            squares -= mask[i + 2 + d][j + 1 + d];
                            mask[i + 2 + d][j + 1 + d] = 0;

                            break;
                        case 'p':
                            squares -= mask[i + 1 + d][j - 1 + d];
                            mask[i + 1 + d][j - 1 + d] = 0;

                            squares -= mask[i + 1 + d][j + 1 + d];
                            mask[i + 1 + d][j + 1 + d] = 0;

                            break;
                        case 'P':
                            squares -= mask[i - 1 + d][j - 1 + d];
                            mask[i - 1 + d][j - 1 + d] = 0;

                            squares -= mask[i - 1 + d][j + 1 + d];
                            mask[i - 1 + d][j + 1 + d] = 0;

                            break;
                    }
                }
            }
        }

        cout << squares << "\n";
    }

    return 0;
}