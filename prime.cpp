#include<iostream>
using namespace  std;
bool isprime(int n){
    int i;
    for( i=2;i<n;i++){
    if(n%i==0){
    cout<<"It isn't a prime number"<<endl;
     break;
        }}
    if(i==n){
    cout<<"It is a prime number"<<endl;
}
    }

int main(){
   
int a,b;
cout << "Enter the number:";
cin>>a>>b;

for(int i=a;i<=b;i++){
if(isprime(i)){
   cout<<i<<endl;
}

}}