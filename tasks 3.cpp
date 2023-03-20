#include<iostream>

using namespace std;
int main(){
    int a,b,hasil;
    
    cout<<"masukkan angka:";
    cin>>a;
    cout<<endl;
    
    while(a>0)
    {
        b=a%10;
        a=a/10;
        hasil=hasil+b;
    }
    cout<<"hasilnya adalah:"<<hasil<<endl;
    
    
    return 0;
}
