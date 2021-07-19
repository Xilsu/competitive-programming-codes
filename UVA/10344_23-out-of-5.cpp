#include <bits/stdc++.h>

#define MAX_NUMBERS 5

using namespace std;

bool solve23out5(int total, int cont, vector<int> numbers){
    if(cont == MAX_NUMBERS){
        return (total == 23);
    }

    int sum = numbers[cont];

    return solve23out5(total+sum, cont+1, numbers) 
        || solve23out5(total-sum, cont+1, numbers) || solve23out5(total*sum, cont+1, numbers);
}

int fillVector(vector<int> &numbers){
    int cont = 0;
    

    for(int i = 0; i < MAX_NUMBERS; i++){
        int number;

        cin >> number;

        numbers.push_back(number);

        if(number == 0){
            cont++;
        }
    }

    return cont;
}

int main(){
    vector<int> numbers;

    while(fillVector(numbers) != 5){
        bool possible = false;

        sort(numbers.begin(), numbers.end());

        do{
            possible = solve23out5(numbers[0], 1, numbers);

            if(possible){
                break;
            }
        }while(next_permutation(numbers.begin(), numbers.end()));

        if(possible){
            cout << "Possible" << endl;
        }
        else{
            cout << "Impossible" << endl;
        }

        numbers.clear();
    }

    return 0;
}