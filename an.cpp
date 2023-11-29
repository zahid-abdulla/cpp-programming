#include<iostream>
using namespace std ;
int main(){
    
   int price[3],quantity[3],i,sum[3],sum1=0;
    
    for(i=1;i<=3;i++){
   
    cout<<i<<" Enter the  price:";
    cin>>price[i];
    
    cout<< i<<" Enter the Quantity:";
    cin>>quantity[i];
   
    sum[i]= (price[i]*quantity[i]);
    
    }
    sum1=sum[1]+sum[2]+sum[3];
    
   
    cout<<" Total price ="<<sum1;

    if(sum1>10000){
        cout<<"\nExpensive";
       
    }
    else if (sum1>7000 && sum1<10000){
        cout<<"\nafordable";
        
    }
     else if(sum1>5000 && sum1<7000){
        cout<<"\nMore afordable";
        
    }
     else if(sum1>3000 && sum1<5000){
        cout<<"\nEnexpensive";
        
    }
    else{
          cout<<"\ncheap";
    }
      
    
    return 0;
}