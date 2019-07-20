#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[10];
    for(int i=0;i<10;i++) scanf("%d",&num[i]);
    int min_n = num[0],max_n = num[0];
    for (int *begin = num;begin!=num+10;begin++)
        if (*begin<min_n) min_n = *begin;
        else if (*begin>max_n) max_n = *begin;
    cout << min_n <<" " << max_n << endl;
}