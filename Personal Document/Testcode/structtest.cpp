#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int id;
    string name;
    int wage;
    int bonus;
    int insure;
} P;
P ps[10];

int main(){
    int maxp = 0;
    for (int i=0;i<10;i++){
        int pw = ps[i].wage + ps[i].bonus + ps[i].insure;
        if (pw > ps[maxp].wage + ps[maxp].bonus + ps[maxp].insure)
            maxp = i;
    }
    cout << ps[maxp].name  << " " << ps[maxp].wage + ps[maxp].bonus + ps[maxp].insure;
    return 0;
}