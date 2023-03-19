#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char bilangan[6];
    
    
    cout<<"masukkan angka = \n";
    cin>>bilangan;
    
       int l= (bilangan[0]-'0') +2;
       int i= (bilangan[1]-'0') +2;
       int e= (bilangan[2]-'0') +2;
       int b= (bilangan[3]-'0') +2;
       int s= (bilangan[4]-'0') +2;
       int t= (bilangan[5]-'0') +2;
       
       if(l>=10) {l=l%10;}; 
       if(i>=10) {i=i%10;}; 
       if(e>=10) {e=e%10;}; 
       if(b>=10) {b=b%10;}; 
       if(s>=10) {s=s%10;}; 
       if(t>=10) {t=t%10;}; 
 
 
      cout<<"hasil = \n"<<l<<i<<e<<b<<s<<t<<endl; 
}