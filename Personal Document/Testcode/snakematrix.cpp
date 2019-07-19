#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000;
int matrix[maxn][maxn];
int n;
bool t(int x,int y){
    if (!(x>=0&&x<n&&y>=0&&y<n)) return false;
    if (matrix[x][y]!=0) return false;
    return true;
}
int main(){
    cin >> n;
    int res = 0;
    int beginx=0,beginy=0;
    while (res<n*n){
        for (;t(beginx,beginy);beginy++) matrix[beginx][beginy] = ++res; beginx++;beginy--;
        for (;t(beginx,beginy);beginx++) matrix[beginx][beginy] = ++res; beginx--;beginy--;
        for (;t(beginx,beginy);beginy--) matrix[beginx][beginy] = ++res; beginy++;beginx--;
        for (;t(beginx,beginy);beginx--) matrix[beginx][beginy] = ++res; beginx++;beginy++;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            printf("%4d",matrix[i][j]);
        cout << endl;
    }

    return 0;
}