#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;
    
    for(int i = 0; i < t; i++){
        long long int m, n;

        cin >> m >> n;

        if(m == 1){
            m++;
        }

        for(long long int j = m; j <= n; j++){
            bool flag = false;

            for(long long int k = 2; k <= sqrt(j); k++){
                if(j%k == 0){
                    flag = true;

                    break;
                }
            }

            if(flag == false){
                cout << j << endl;
            }
        }

        cout << endl;
    }

    return 0;
}