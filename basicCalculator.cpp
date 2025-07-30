#include <bits/stdc++.h>
using namespace std;
int main(){

    int n1;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>n1;

    //USE 'OP' , DON'T USE 'OPERATOR' BECAUSE OPERATOR IS A KEYWORD IN C++ 
    char op;
    cout<<"ENTER THE OPERATOR : ";
    cin>>op;

    int n2;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>n2;

    switch(op){

        case '+':
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1-n2<<endl;
        break;

        case '*':
        cout<<n1*n2<<endl;
        break;

        case '/':
        if(n2==0){
            cout<<"INVALID";
        }
        else
        cout<<n1+n2<<endl;
        break;

        default:
        cout<<"INVALID OPERATOR"<<endl;
    }
}