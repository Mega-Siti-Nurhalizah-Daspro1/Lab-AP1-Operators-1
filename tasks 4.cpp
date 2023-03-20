#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {
	int angka;
	int hh, mm, ss;
	
	printf("masukkan angka: ");
	scanf("%d", &angka);
	
	hh = (angka/3600);
	mm = (angka -(3600*hh))/60;
	ss = (angka -(3600*hh)-(mm*60));
	
	
	cout<<setw(2)<<setfill('0')<<hh<<":";
	cout<<setw(2)<<setfill('0')<<mm<<":";
	cout<<setw(2)<<setfill('0')<<ss;
	
	return 0;
}