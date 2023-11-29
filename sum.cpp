#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i =1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int32_t main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}