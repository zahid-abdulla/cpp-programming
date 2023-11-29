#include<iostream>
using namespace std;
void display (int a){
    cout<<"value of a ="<<a<<endl;
}
void displa (int a ,int b= 10){
    cout <<"value of b ="<<b<<endl;
}
int main (){
    display(5);
     displa(10.1);
    return 0;
    
}
