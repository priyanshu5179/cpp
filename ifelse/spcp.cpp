#include <iostream>
using namespace std;
int main (){
    int cp;
    cout <<"enter cost price:";
    cin>>cp;
    int sp;
    cout <<"enter selling price:";
    cin>>sp;
    if (sp>cp){
        cout<<"profit"<<sp-cp;
    }
    if (sp<cp){
        cout<<"loss"<<cp-sp;
    }
    if (sp==cp){
        cout<<"not profit not loss"<<sp-cp;
    }
}