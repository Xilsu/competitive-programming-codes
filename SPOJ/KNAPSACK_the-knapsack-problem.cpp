#include <bits/stdc++.h>

#define MAX_ITEMS 2000
#define MAX_WEIGHT 2000

using namespace std;

int table[MAX_ITEMS+1][MAX_WEIGHT+1];

int knapsack(int price[], int weight[], int numItems, int maxWeight){
    for(int i = 0; i <= numItems; i++){
        table[i][0] = 0;
    }

    for(int i = 0; i <= maxWeight; i++){
        table[0][i] = 0;
    }
    
    for(int i = 1; i <= numItems; i++){
        for(int j = 1; j <= maxWeight; j++){
            if(weight[i] > j){
                table[i][j] = table[i-1][j];
            }
            else{
                table[i][j] = max(table[i-1][j-weight[i]] + price[i], table[i-1][j]);
            }
        }
    }

    return table[numItems][maxWeight];
}

int main(){
    int S, N;

    cin >> S >> N;

    int prices[MAX_WEIGHT+1], weights[MAX_ITEMS+1];

    for(int i = 1; i <= N; i++){
        cin >> weights[i] >> prices[i];
    }

    cout << knapsack(prices, weights, N, S) << endl;

    return 0;
}