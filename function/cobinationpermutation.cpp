#include <iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i=1; i<=x; i++ ){
    f*=i;
}
   return f;
}
int main (){
    int n;
    cout <<"enter n:";
    cin>>n;
    int r;
    cout<<"enter r:";
    cin>>r;
    int nfact=fact(n);
    int rfact=fact (r);
    int nrfact=fact (n-r);
    //int nfact=1;//n!
      //  for (int i=1; i<=n; i++){
       //     nfact*=i;
      //  }
       /// int rfact=1;//r!
       // for (int i=1; i<=r; i++){
          //  rfact*=i;
       // }
       // int nrfact=1;//n-r!
      //  for (int i=1; i<=n-r; i++){
      //      nrfact*=i;//
       // }//
    int ncr =nfact/(rfact*nrfact);
    cout<<ncr;

}