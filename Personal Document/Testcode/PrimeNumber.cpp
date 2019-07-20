#include <bits/stdc++.h>
using namespace std;
bool is_prime(int x){
    for (int i=2;i<=sqrt(x);i++)
        if (x%i==0) return false;
    return true; 
}
int main(){
    int n;
    while (scanf("%d",&n)==1 && n!=-1){
        if (is_prime(n)) cout << "Yes" << endl;
        else cout << "No." << endl;
    }
}