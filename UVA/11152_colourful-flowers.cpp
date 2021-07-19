#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c;

    while(cin >> a >> b >> c){
        double halfPer;

        halfPer = (a + b + c) / 2;

        double circ1, triangle, circ2;

        triangle = sqrt(halfPer * (halfPer - a) * (halfPer - b) * (halfPer - c));
        circ1 = pow((a * b * c) / (4 * triangle), 2) * M_PI;
        circ2 = pow(triangle / halfPer, 2) * M_PI;

        cout << fixed << setprecision(4) << circ1 - triangle << " " <<  triangle - circ2 << " " <<  circ2 << "\n";
    }

    return 0;
}
