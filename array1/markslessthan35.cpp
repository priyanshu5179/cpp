#include < iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number of student";
    cin>>n<<endl;
    int marks[n];
    for(int i=0; i<=5; i++) {
        cin>>marks[i];
    }
    for(int i=0; i<=5;i++){
        if (marks[i]<35) cout <<i<<endl;
        
    }

}