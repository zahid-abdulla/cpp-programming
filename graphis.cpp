#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i =1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n>>r;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
                cout<<" ";}
     for(int j=0;j<=i;j++){
    cout<<(fact(i)/(fact(j)*fact(i-j)))<<" ";
    }
     cout<<endl;}
   
}
