#include <bits/stdc++.h>

using namespace std;

int main(){
    string numberLine;

    while(getline(cin, numberLine)){
        string token;
        istringstream helper(numberLine);
        vector<int> numbers;

        while(helper >> token){
            int number;

            istringstream (token) >> number;

            numbers.push_back(number); 
        }

        long long sum = 0, maior = 0;

        for(long i = 0; i < numbers.size(); i++){
            sum += numbers[i];

            if(sum < 0){
                sum = 0;
            }

            if(sum > maior){
                maior = sum;
            }
        }

        cout << maior << endl;
    }

    return 0;
}