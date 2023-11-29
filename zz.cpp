#include <iostream>
#include <iomanip>
using namespace std;
int main (){

int a, b;
float c= 55.667788;
cout<<" Enter the number"<<endl;
cin>>a>>b;
cout<<"sum="<<a+b<<endl<<"sub="<<a-b<<endl<<"mult="<<a*b<<endl<<"dib="<<a/b;

if(a%2==0){
    cout<<"its even"<<endl;
     cout<<"its even"<<endl;
      cout<<"its even"<<endl;
       cout<<"its even"<<endl;
}

else{
    cout<<"its odd";
}
for(int i=a;i<=a+10;i++){
cout<<" noeo i is=";
    cout<<i<<endl;
}
cout <<fixed<<setprecision(3)<<c;
    return 0;
}