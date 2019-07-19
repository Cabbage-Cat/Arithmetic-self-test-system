#include <bits/stdc++.h>
using namespace std;

int fib[20+2];
int main(){
    fib[0] = fib[1] = 1;
    for (int i=2;i<=21;i++) fib[i] = fib[i-1] + fib[i-2];
    for (int i=0;i<=20;i++) cout << fib[i] << " ";
    cout << endl;
    return 0;
}