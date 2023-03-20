#include<iostream>

using namespace std;

int main(){
    int nilai;

    cout<<"Masukkan angka=";
    cin>>nilai;

    nilai = nilai + 8;
    nilai = nilai / 3;
    nilai = nilai % 5;
    nilai = nilai * 5;

    cout<<"hasilnya adalah ="<<nilai;
}