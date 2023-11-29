#include<iostream>
using namespace std;
float waiver(float n){
    if(n>=5.00){
        cout<<"waiver will be 70%"<<endl;
    }
    else if(n>=4.80){
         cout<<"waiver will be 50%"<<endl;
    }
    else if(n>=4.80){
         cout<<"waiver will be 60%"<<endl;
    }
    else if(n>=4.50){
         cout<<"waiver will be 50%"<<endl;
    }
    else if(n>=4.00){
         cout<<"waiver will be 30%"<<endl;
    }
    else if(n>=3.50){
        cout<<"waiver will be 20%"<<endl;
    }
    else{
        cout<<"waiver will be 10%"<<endl;
    }

    
}
int main (){


     string A;
     int CSE=528,EEE=503,TE=500,PHA=654,LAW=528,ENG=270,BNAG=130;
    
    cout<<" CSE \n EEE \n TE \n PHA \n LAW \n ENG \n BANG \n Chose the subject :";
    cin>>A;

    if(A=="CSE"){
        cout<<"total cost is 528k"<<endl;
    }
    else if (A=="EEE"){
        cout<<"total cost is 498k"<<endl;
    }
     else if (A=="TE"){
        cout<<"total cost is 556k"<<endl;
    }
    else if (A=="PHA"){
        cout<<"total cost is 600k"<<endl;
    }
     else if (A=="LAW"){
        cout<<"total cost is 625k"<<endl;
    }
     else if (A=="ENG"){
        cout<<"total cost is 270k"<<endl;
    }
     else if (A=="BANG"){
        cout<<"total cost is 130k"<<endl;
    }
     else{
        cout<<"This subject isn't in our University"<<endl;
     }

    float SSC,HSC;
    cout<<"Enter your SSC Result="; 
    cin>>SSC;

    cout<<endl<<"Enter your HSC Result="; 
    cin>>HSC;

if(SSC>HSC){
    waiver(HSC);
}
else{
     waiver(SSC);
}
 
 cout<< " write the waiver here:"<<endl;
 int n;
 cin>>n;
 cout<< " write the subject again here:"<<endl;
 int B;
 cin>>B;
 cout<<" after adding  waiver your total cost is: "<<((((B*1000)-82500)/searchn)*152)+82500<<endl;

    return 0;

}