#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    int oR=n;
    while(n>0){
        int ld=n%10;
        sum=sum+pow(ld,3);
        n=n/10;
    }
    cout<<sum;
    if(sum==oR){
        cout<<" its a aramstrong number"<<endl;
    }
    else{
         cout<<" it is not a aramstrong number"<<endl;
    }
}