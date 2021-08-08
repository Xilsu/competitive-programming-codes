/*
    Luis Henrique Morelli
    88A - Chords
    https://codeforces.com/problemset/problem/88/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int calcSeminotes(int a, int b){
    if(a > b)
        return 12 - a + b;
    
    return b - a;
}

string solve(int a, int b, int c){
    int seminotes1, seminotes2;

    seminotes1 = calcSeminotes(a, b);
    seminotes2 = calcSeminotes(b, c);

    if(seminotes1 == 4 && seminotes2 == 3)
        return "major";
    else if(seminotes1 == 3 && seminotes2 == 4)
        return "minor";

    return "strange";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string, int> notes;

    notes["C"] = 1;
    notes["C#"] = 2;
    notes["D"] = 3;
    notes["D#"] = 4;
    notes["E"] = 5;
    notes["F"] = 6;
    notes["F#"] = 7;
    notes["G"] = 8;
    notes["G#"] = 9;
    notes["A"] = 10;
    notes["B"] = 11;
    notes["H"] = 12;

    string first, second, third;

    cin >> first >> second >> third;

    string triad;

    if((triad = solve(notes[first], notes[second], notes[third])) != "strange")
        cout << triad << "\n";
    else if((triad = solve(notes[first], notes[third], notes[second])) != "strange")
        cout << triad << "\n";
    else if((triad = solve(notes[second], notes[first], notes[third])) != "strange")
        cout << triad << "\n";
    else if((triad = solve(notes[second], notes[third], notes[first])) != "strange")
        cout << triad << "\n";
    else if((triad = solve(notes[third], notes[first], notes[second])) != "strange")
        cout << triad << "\n";
    else if((triad = solve(notes[third], notes[second], notes[first])) != "strange")
        cout << triad << "\n";
    else
        cout << "strange\n";

    return 0;
}