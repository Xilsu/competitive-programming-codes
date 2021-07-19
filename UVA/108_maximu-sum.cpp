#include <bits/stdc++.h>

#define MAX 100

using namespace std;

long kadane(int v[], int *start, int *end, int N){
    long maxSum = 0, sum = 0;
    int tempStart = 0;

    *end = -1;

    for(int i = 0; i < N; i++){
        sum += v[i];

        if(sum < 0){
            sum = 0;
            tempStart = i+1;
        }
        else if(sum > maxSum){
            maxSum = sum;
            *start = tempStart;
            *end = i;
        }
    }

    if(*end != -1){
        return maxSum;
    }

    maxSum = v[0];
    *start = *end = 0;

    for(int i = 1; i < N; i++){
        if(v[i] > maxSum){
            maxSum = v[i];
            *start = *end = i;
        }
    }

    return maxSum;
}

long somaRetangulo(int matrix[][MAX_MATRIX], int N){
    long maxSum = 0, sum;
    int endLeft, endRight, endTop, endBottom, start, end, aux[MAX_MATRIX];

    for(int left = 0; left < N; left++){
        for(int i = 0; i < N; i++){
            aux[i] = 0;
        }

        for(int right = left; right < N; right++){
            for(int i = 0; i < N; i++){
                aux[i] += matrix[i][right];
            }

            sum = kadane(aux, &start, &end, N);

            if(sum > maxSum){
                maxSum = sum;
                endLeft = left;
                endRight = right;
                endTop = start;
                endBottom = end;
            }
        }        
    }

    return maxSum;
}

int main(){
    int N;

    cin >> N;

    int matrix[MAX_MATRIX][MAX_MATRIX];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }

    cout << somaRetangulo(matrix, N) << endl;

    return 0;
}