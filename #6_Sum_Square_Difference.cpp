//
// Created by Marvin's MacBook on 05/02/25.
//
#include <iostream>

using namespace std;

int main() {
    int sum=0;
    int sq=0;
    for(int i = 1; i < 101; i++){
        sum+=i;
        sq+= i*i;
    }

    cout<<((sum*sum)-sq)<<endl;
    return 0;
}