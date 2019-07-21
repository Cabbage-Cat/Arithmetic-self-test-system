#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
    int number;
    struct Node *pNext;
}Node,*pNode;

pNode createNode(){
    pNode pHead = (pNode)malloc(sizeof(Node));
    pHead->pNext = NULL;
    pNode pFlag = pHead;
    // for (int i=1;i<6;i++){
    //     pNode pNew = (pNode)malloc(sizeof(Node));
    //     pNew->number = i; pNew->pNext=NULL;
    //     pFlag->pNext = pNew;
    //     pFlag = pNew;
    // }
    return pHead;
}

void travelLL(pNode pHead){
    for (pNode pN = pHead->pNext;pN!=NULL;pN=pN->pNext) cout << pN->number << endl;
}

void insert_LL(pNode pHead,pNode pData,int idx){
    pNode pTail = pHead;
    for (int i=0;i<idx;i++) pTail = pTail->pNext;
    pData->pNext = pTail->pNext;
    pTail->pNext = pData;
}

int size_LL(pNode pHead){
    int r = 0;
    for (pNode pr = pHead;pr->pNext!=NULL;pr=pr->pNext) r++;
    return r;
}

void sort_LL(pNode pHead){
    for (pNode pT = pHead->pNext;pT->pNext!=NULL;pT=pT->pNext){
        for (pNode pTS = pHead->pNext;pTS->pNext!=NULL;pTS=pTS->pNext){
            if (pTS->number > pTS->pNext->number){
                int tmp = pTS->number;
                pTS->number = pTS->pNext->number;
                pTS->pNext->number = tmp;
            }
        }
    }
}
int main(){
    pNode pH = createNode();
    int n; cin >> n;
    for (int i=0;i<n;i++){
        int res; scanf("%d",&res);
        pNode r = createNode(); r->number = res;
        insert_LL(pH,r,size_LL(pH));
    }
    
    sort_LL(pH);
    travelLL(pH);
}