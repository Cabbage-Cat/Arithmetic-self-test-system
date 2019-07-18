#include <bits/stdc++.h>

using namespace std;

map<string,int> bank;

bool deposit(string ID,int num){
    if (!bank.count(ID)) return false;
    bank[ID]+=num;
    return true;
}

bool withdraw(string ID,int num){
    if (!bank.count(ID)) return false;
    int res = bank[ID] - num;
    if (res<0) return false;
    bank[ID]-=num;
    return true;
}

int inq(string ID){
    if (!bank.count(ID)) return -1;
    return bank[ID];
}

bool transfer(string ID,string toID,int num){
    if (!bank.count(ID) || !bank.count(toID)) return false;
    int res = bank[ID] - num;
    if (res<0) return false;
    bank[ID]-=num; bank[toID]+=num;
    return true;
}

int main(){
    int select;
    string ID="1001";
    bank["1001"] = 200;
    bank["1002"] = 500;
    while (1){
        cout << "Please select your function (1. desposit 2. withdraw 3.inquary 4. transfer 0.Quit.)" << endl;
        cin >> select;
        switch (select){
            case 0:{
                cout << "Quit the program.\n";
                return 0;
            }

            case 1: {
                int num;
                cout << "Enter the amount you want to deposit:"; cin >> num;
                if (!deposit(ID,num)) {
                    cout << "Unknown Error.\n";
                }
                else cout << "Deposit "<< num << " done,\n";

                break;    
            }

            case 2: {
                int num;
                cout << "Enter the amount you want to withdraw:"; cin >> num;
                if (!withdraw(ID,num)) "Have no enough money or other error.\n";
                else cout << "Withdraw "<<num << " money.";
                break;
            }

            case 3: {
                string inqID;
                cout << "Enter the ID you want to inq: "; cin >> inqID;
                if (inq(inqID)==-1) cout << "Amount do not exsit.\n";
                else cout << "Balance is:" << inq(inqID) << endl;
                break;
            }

            case 4: {
                string toID; int num;
                cout << "Enter the ID you want to transfer and the num you want to transfer(Eg: 1001111 500) :";
                cin >> toID >> num;
                if (!transfer(ID,toID,num)) cout << "Error,plz check transfer ID or transfer num,\n";
                else cout << "Transfer Done." << endl;
                break;
            }
        }
    }

    
    return 0;
}