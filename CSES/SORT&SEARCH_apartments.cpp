#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, m, k;

    cin >> n >> m >> k;

    priority_queue<long> applicant;

    for(long i = 0; i < n; i++){
        long aux;

        cin >> aux;

        applicant.push(aux);
    }

    priority_queue<long> apt;

    for(long i = 0; i < m; i++){
        long aux;

        cin >> aux;

        apt.push(aux);
    }

    long max;

    max = 0;

    while(!apt.empty() && !size.empty()){
        if(applicant.top() >= apt.top() - k && applicant.top() <= apt.top() + k){
            max++;

            applicant.pop();
            apt.pop();
        }
        else if(applicant.top() < apt.top()){
            apt.pop();
        }
        else{
            applicant.pop();
        }
    }

    cout << max << "\n";

    return 0;
}