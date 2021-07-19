/*
Luis Henrique Morelli
ZigZag
https://arena.topcoder.com/#/u/practiceCode/1239/1209/1259/1/1239
10/09/2020
*/

/*
    - variação de Longest Increasing Subsequence (LIS)
    - criar matriz dp[2][MAX + 1]
    - iterar sobre a sequência, aumentando o número de elementos que a compõem até processar todos os n elementos
    - dp[0][i] guarda o número de elementos na maior subsquência onde a diferença entre o elemento i e o último elemento testado (j) é postiiva
    - dp[1][i] guarda o número de elementos na maior subsquência onde a diferença entre o elemento i e o último elemento testado (j) é negativa
    - preencher a matriz com 1, pois o caso base do problema é pegar uma sequência de apenas um elemento
    - a partir do segundo elemento da sequência, comparar o valor com os j valores anteriores e aplicar:
        . max(dp[0][i], dp[1][j] + 1) caso j < i, ou seja, i - j > 0
        . max(dp[1][i], dp[0][j] + 1) caso j > i, ou seja, i - j < 0
    - a condição acima garante a adição ou não do elemento para sequência
    - guardar a quantidade de elementos na maior sequência em uma varíavel, aplicando max(variável, max(dp[0][i], dp[1][i]))
*/


#include <bits/stdc++.h>

#define MAX 50

using namespace std;

class ZigZag{
    public:
        int longestZigZag(vector<int> sequence){
            int N;

            N = sequence.size();

            int dp[2][MAX + 1];

            for(int i = 0; i < N; i++){
                dp[0][i] = 1;
                dp[1][i] = 1;
            }

            int longest;

            longest = 1;

            for(int i = 1; i < N; i++){
                for(int j = i - 1; j >= 0; j--){
                    if(sequence[j] < sequence[i]){
                        dp[0][i] = max(dp[0][i], dp[1][j] + 1);
                    }
                    
                    if(sequence[j] > sequence[i]){
                        dp[1][i] = max(dp[1][i], dp[0][j] + 1);
                    }
                }

                longest = max(longest, max(dp[0][i], dp[1][i]));
            }

            return longest;
        }
}