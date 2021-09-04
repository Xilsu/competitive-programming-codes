/*
    Luis Henrique Morelli
    1061 - Consanguine Calculations
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3502
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
    
    string a, b, c;
    int t = 1;

    while(cin >> a >> b >> c){
        if(a == "E" && b == "N" && c == "D")
            break;

        cout << "Case " << t << ": ";

        bool f = false;

        if(a == "?"){
            swap(a, b);

            f = true;
        }

        string str1, str2;
        char rh1, rh2;
        int s1, s2;

        s1 = a.size();
        rh1 = a[s1 - 1];
        str1 = a.substr(0, s1 - 1);

        if(b == "?"){
            s2 = c.size();
            rh2 = c[s2 - 1];
            str2 = c.substr(0, s2 - 1);

            bool f1 = true;

            if((str1 == "AB" && str2 == "O") || (str1 == "O" && str2 == "AB")){
                b = "IMPOSSIBLE";

                f1 = false;
            }
            else if(str1 == str2){
                b = str1 + "-, ";

                if(str1 == "AB" || str1 == "O"){
                    b += "A-, ";
                    b += "B-, ";
                }
                else if(str1 == "A"){
                    b += "B-, ";
                    b += "AB-, ";
                    b += "O-, ";
                }
                else if(str1 == "B"){
                    b += "A-, ";
                    b += "AB-, ";
                    b += "O-, ";
                }
            }
            else{
                if(str1 == "A")
                    b = "B-, ";
                else if(str1 == "B")
                    b = "A-, ";
                else
                    b = "AB-, ";

                if(str1 == "A" && (str2 == "B" || str2 == "AB"))
                    b += "AB-, ";
                else if(str1 == "B" && (str2 == "A" || str2 == "AB"))
                    b += "AB-, ";
                else if(str1 == "A" && str2 == "O"){
                    b += "A-, ";
                    b += "O-, ";
                }
                else if(str1 == "B" && str2 == "O"){
                    b += "B-, ";
                    b += "O-, ";
                }
                else if(str1 == "AB" && (str2 == "A" || str2 == "B")){
                    b += "A-, ";
                    b += "B-, ";
                    b += "O-, ";
                }
                else if(str1 == "O" && (str2 == "A" || str2 == "B"))
                    b += str2 + "-, ";
            }
            
            if(f1){
                if(rh1 == '-' && rh2 == '+'){
                    for(int i = 0; i < b.size(); i++)
                        if(b[i] == '-')
                            b[i] = '+';
                }
                else{
                    string aux = b;

                    for(int i = 0; i < aux.size(); i++)
                        if(aux[i] == '-')
                            aux[i] = '+';
                        
                    b += aux;
                }

                b.pop_back();
                b.pop_back();
                reverse(b.begin(), b.end());
                b += "{";
                reverse(b.begin(), b.end());
                b += "}";
            }
        }
        else if(c == "?"){
            s2 = b.size();
            rh2 = b[s2 - 1];
            str2 = b.substr(0, s2 - 1);

            if(str1 == str2){
                c = str1 + "-, ";
                
                if(str1 == "AB"){
                    c += "A-, ";
                    c += "B-, ";
                }
                else if(str1 == "A" || str1 == "B")
                    c+= "O-, ";
            }
            else if(str1 != str2){
                if((str1 == "AB" && str2 == "O") || (str1 == "O" && str2 == "AB")){
                    c = "A-, ";
                    c += "B-, ";
                }
                else{
                    c = str1 + "-, ";
                    c += str2 + "-, ";
                }

                if((str1 == "A" && str2 == "AB") || (str1 == "AB" && str2 == "A"))
                    c += "B-, ";
                else if((str1 == "AB" && str2 == "B") || (str1 == "B" && str2 == "AB"))
                    c += "A-, ";
                else if((str1 == "A" && str2 == "B") || (str1 == "B" && str2 == "A")){
                    c += "AB-, ";
                    c += "O-, ";
                }
            }

            if(rh1 == '+' || rh2 == '+'){
                string aux = c;

                for(int i = 0; i < aux.size(); i++)
                    if(aux[i] == '-')
                        aux[i] = '+';
                    
                c += aux;
            }
            
            c.pop_back();
            c.pop_back();
            
            if(!(str1 == "O" && str2 == "O" && rh1 == '-' && rh2 == '-')){
                reverse(c.begin(), c.end());
                c += "{";
                reverse(c.begin(), c.end());
                c += "}";
            }
        }

        if(f)
            cout << b << " " << a << " " << c << "\n";
        else
            cout << a << " " << b << " " << c << "\n";

        t++;
    }
    
    return 0;
}