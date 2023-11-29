#include<iostream>
using namespace std;

  int fact(int x){
    int f=1;
    for (int i = 1; i <=x; i++)
    {
      f=f*i;
    }
    return f;
}
int ncr(int i,int j){
  return fact(i)/((fact(j)*fact(i-j)));
}
int main(){
int n;
cout <<"Enter the number:";
cin>>n;

for (int i = 0; i <=n; i++)
{
  for (int j= 0; j <=n-i; j++)
  {
    cout<<"  ";
  }
  for (int j= 0; j <=i; j++)
  {
    cout<<ncr(i,j)<<"   ";
 
}
cout<<endl;

}}