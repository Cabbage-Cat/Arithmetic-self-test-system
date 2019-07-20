#include <bits/stdc++.h>
using namespace std;


typedef struct Node{
    int number;
    struct Node *pPrev;
    struct Node *pNext;
}Node,*pNode;

pNode createList(){
    pNode pHead = (pNode)malloc(sizeof(Node));
    pHead->pPrev = pHead;
    pHead->pNext = pHead;
    return pHead;
}

pNode createNode(){
    pNode pT = (pNode)malloc(sizeof(Node));
    pT->pNext=pT; pT->pPrev=pT;
    return pT;
}

void ins_LL(pNode pHead,pNode pData){
    if (pHead->number==0)
        pHead->number = pData->number;
    else{
        pData->pPrev = pHead->pPrev;
        pHead->pPrev->pNext = pData;
        pHead->pPrev=pData;
        pData->pNext = pHead;
    }
}

void delete_LL(pNode pBegin,int idx){
    pNode pT=pBegin;
    for (int i=0;i<idx;i++) pT = pT->pNext;
    pNode pF = pT->pPrev;
    pF->pNext = pT->pNext;
    pT->pNext->pPrev = pF;
}
void trace_LL(pNode pHead){
    if (pHead->pNext==pHead && pHead->number!=0) cout << pHead->number;
    else{
        cout << pHead->number << endl;
        for (pNode pp = pHead->pNext;pp!=pHead;pp=pp->pNext) cout << pp->number << endl;
    }
}


int main(){
    pNode ph = createList();
    int n=4,m=1,k=2; //m第几个 k跳过几个
    cin >> n >> m >> k;
    m--;k--;
    for (int i=1;i<=n;i++){
        pNode pt = createNode(); pt->number = i;
        ins_LL(ph,pt);
    }

    pNode pBegin=ph;


    for (int i=0;i<m;i++) pBegin = pBegin->pNext;
    pNode pT = pBegin;
    while (pT->pNext!=pT){
        pT = pBegin;
        for (int i=0;i<k-1;i++) pT = pT->pNext;
            cout << "第" << pT->pNext->number << "号出列"<<endl;
            pBegin = pT->pNext->pNext;
            delete_LL(pT,1);
    }
    cout << "第" << pT->number <<  "号出列" << endl;
    
    return 0;
}