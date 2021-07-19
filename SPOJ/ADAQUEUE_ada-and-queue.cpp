#include <bits/stdc++.h>

using namespace std;

int main(){
    long int Q;

    cin >> Q;

    vector<int> vector;
    int reverse = -1;

    for(long int i = 0; i < Q; i++){
        string aux;
        int auxInt;
        
        cin >> aux;

        if(aux == "reverse"){
            reverse = -(reverse);
        }
        else if(aux == "push_back"){
            cin >> auxInt;

            if(reverse == -1){
                vector.push_back(auxInt);
            }
            else{
                vector.insert(vector.begin(), auxInt);
            }
        }
        else if(aux == "toFront"){
            cin >> auxInt;

             if(reverse == 1){
                vector.push_back(auxInt);
            }
            else{
                vector.insert(vector.begin(), auxInt);
            }
        }
        else{
            if(vector.empty() != 0){
                cout << "No job for Ada?" << endl;
            }
            else if(aux == "back"){
                if(reverse == -1){
                    cout << vector.back() << endl;
                    vector.pop_back();
                }
                else{
                    cout << vector.front() << endl;
                    vector.erase(vector.begin());
                }
            }
            else if(aux == "front"){
                if(reverse == -1){
                    cout << vector.back() << endl;
                    vector.pop_back();
                }
                else{
                    cout << vector.front() << endl;
                    vector.erase(vector.begin());
                }
            }
        }
    }

    return 0;
}
