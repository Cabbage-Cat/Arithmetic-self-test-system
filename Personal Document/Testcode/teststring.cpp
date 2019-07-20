#include <bits/stdc++.h>
using namespace std;

void string_sort(char **begin,int l){
    char *temp;
    for (int i=0;i<l;i++){
        for (int j=0;j<l;j++){
            if (strcmp(begin[i],begin[j])<0){
                temp = *(begin+i); 
                *(begin+i) = *(begin+j);
                *(begin+j) = temp;
            }
        }
    }
}
int main(){
    char *s[5] = {"111","222","1","44","1"};
    char **sp;
    // for (sp=s;sp!=s+5;sp++)
    //     printf("%s\n",*sp);
    sp = s;
    string_sort(sp,5);
    for (sp=s;sp!=s+5;sp++)
        printf("%s\n",*sp);
    
}