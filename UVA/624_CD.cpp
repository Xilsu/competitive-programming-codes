#include <bits/stdc++.h>

using namespace std;

/*void createPath(stack <int> *solution, int numTracks, int maxMinutes, int minutes[]){
    for(int i = numTracks; i >= 1; i--){
        if(table[i][maxMinutes] != table[i-1][maxMinutes]){
            (*solution).push(minutes[i]);
            maxMinutes -= minutes[i];
        }
    }
}*/

int knapsackTracks(int minutes[], int numTracks, int maxMinutes, stack <int> *solution){
    int table[21][maxMinutes+1];
    
    for(int i = 0; i <= numTracks; i++){
        table[i][0] = 0;
    }

    for(int i = 0; i <= maxMinutes; i++){
        table[0][i] = 0;
    }

    for(int i = 1; i <= numTracks; i++){
        for(int j = 1; j <= maxMinutes; j++){
            if(minutes[i] > j){
                table[i][j] = table[i-1][j];
            }
            else{
                table[i][j] = max(table[i-1][j-minutes[i]] + minutes[i], table[i-1][j]);
            }
        }
    }

    int max = table[numTracks][maxMinutes];

    for(int i = numTracks; i >= 1; i--){
        if(table[i][max] != table[i-1][max]){
            (*solution).push(minutes[i]);
            max -= minutes[i];
        }
    }

    return table[numTracks][maxMinutes];
}

int main(){
    int N, tracks;
    int minutes[21];

    while(cin >> N >> tracks){
        for(int i = 1; i <= tracks; i++){
            cin >> minutes[i];
        }

        stack <int> solution;

        int sum = knapsackTracks(minutes, tracks, N, &solution);

        while(!solution.empty()){
            cout << solution.top() << " ";

            solution.pop();
        }

        cout << "sum:" << sum << endl;
    }

    return 0;
}