/*
    Luis Henrique Morelli
    462 - Bridge Hand Evaluator
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=403
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string hand;

    while(getline(cin, hand)){
        map<char, vector<char>> cards;
        vector<char> s = {'S', 'H', 'D', 'C'};
        vector<bool> stop (4, 0);
        stringstream ss (hand);

        while(ss >> hand)
            cards[hand[1]].push_back(hand[0]);

        vector<int> l (4);
        ll points = 0, extra = 0;

        for(ll i = 0; i < 4; i++){
            ll n = cards[s[i]].size();

            if(n == 2)
                extra++;
            else if (n < 2)
                extra += 2;

            l[i] = n;

            for(ll j = 0; j < n; j++){
                if(cards[s[i]][j] == 'A'){
                    points += 4;

                    stop[i] = 1;
                }
                else if(cards[s[i]][j] == 'K'){
                    points += 2;

                    if(n > 1){
                        points++;

                        stop[i] = 1;
                    }
                }
                else if(cards[s[i]][j] == 'Q'){
                    points += 1;

                    if(n > 2){
                        points++;

                        stop[i] = 1;
                    }       
                }
                else if(cards[s[i]][j] == 'J' && n > 3)
                    points++;
            }
        }

        bool trump = stop[0];

        for(ll i = 1; i < 4 && trump; i++)
            trump = stop[i];

        if(points >= 16 && trump)
            cout << "BID NO-TRUMP\n";
        else if(points + extra >= 14){
            ll i = max_element(l.begin(), l.end()) - l.begin();
            
            cout << "BID " << s[i] << "\n";
        }
        else
            cout << "PASS\n";
    }
    
    return 0;
}