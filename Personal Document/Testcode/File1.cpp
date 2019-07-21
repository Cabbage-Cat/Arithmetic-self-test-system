#include <bits/stdc++.h>
using namespace std;
const int strmax = 10000;
void str_sort(char *str_begin[],int n){
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1;j++){
            if (strcmp(str_begin[j],str_begin[j+1])>0){
                char *temp = str_begin[j];
                str_begin[j] = str_begin[j+1];
                str_begin[j+1] = temp;
            }
        }
    
}
int main(){
    int n; cin >> n;
    char *dict[1000];
    char buf[strmax];
    for (int i=0;i<n;i++){
        scanf("%s",buf);
        dict[i] = (char*)malloc(strlen(buf)+1);
        strcpy(dict[i],buf);
    }
    str_sort(dict,n);
    
    FILE *fp = fopen("ftxt","w");
    for (int i=0;i<n;i++){
        fputs(dict[i],fp);
        fputc('\n',fp);
        free(dict[i]);
    }
    fclose(fp);
    return 0;
}