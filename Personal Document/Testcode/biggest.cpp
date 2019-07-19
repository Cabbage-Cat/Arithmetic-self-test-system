#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(112);
    int t[10][10];
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            t[i][j] = rand();
    int m = -100;
    int k,l;
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
        {
            if (t[i][j] > m){
                m = t[i][j];
                k = i; l = j;
            }

        }
    cout << k << " " << l << endl;
    return 0;
}