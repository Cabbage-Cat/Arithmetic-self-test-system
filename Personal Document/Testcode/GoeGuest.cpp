#include <bits/stdc++.h>
using namespace std;

int prime[5000];
void fill_prime(){
    for (int i=2;i<5000;i++)
        prime[i] = 1;
    for (int i=2;i<5000;i++){
        if (prime[i]==1){
            for (int j=2*i;j<5000;j+=i)
                prime[j] = 0;
        }
    }
}
int main(){
    fill_prime();
    int n; cin >> n;
    for (int i=2;i<=n/2;i++){
        if (prime[i]&&i<n){
            if (prime[n-i]) cout << i <<" " <<n-i << endl;
        }
    }
    return 0;
}