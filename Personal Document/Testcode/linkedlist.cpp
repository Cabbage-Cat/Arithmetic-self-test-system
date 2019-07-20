#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
    int number;
    struct Node *pNext;
}Node,*pNode;

pNode createList(){
    pNode pHead = (pNode)malloc(sizeof(Node));
    pHead->pNext = NULL;
    pNode pFlag = pHead;
    for (int i=1;i<6;i++){
        pNode pNew = (pNode)malloc(sizeof(Node));
        pNew->number = i; pNew->pNext=NULL;
        pFlag->pNext = pNew;
        pFlag = pNew;
    }
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
int main(){
    pNode pH = createList();
    pNode pN = (pNode)malloc(sizeof(Node)); pN->number  = 100; pN->pNext = NULL;
    insert_LL(pH,pN,3);
    travelLL(pH);
}