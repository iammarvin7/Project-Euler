//
// Created by Marvin's MacBook on 06/02/25.
//

#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int lcm(int a, int b) {
    return (a / gcd(a, b))*b;
}
//what i learned was, in LCM you should do (a / gcd(a, b))*b : Its created less int overflow risks
//                             compared to ((a*b) / gcd(a, b)): Latter one has higher chances of failing
int main() {
    int LCM = 1;
    for(int i = 2; i < 21; i++){
        LCM = lcm(LCM, i);
    }
    cout<<LCM<<endl;
    return 0;
}
