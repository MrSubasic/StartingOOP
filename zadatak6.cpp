
/*
Napisati program koji ispisuje sve prestupne godine, 10 po liniji, u rasponu godina koje korisnik unese.
 Program pita korisnika da unese početnu godinu, krajnju godinu te ispisuje sve godine u tom rasponu. 
 Razmak između godina treba biti jedan space. 

*/		
#include <bits/stdc++.h>
using namespace std;

main(){
	int i=0;
	int pocetna_god;
	int krajnja_god;
	cout << "Unesite pocetnu godinu: " << endl;
	cin>>pocetna_god;
	cout << "Unesite krajnju godinu: " << endl; 
	cin>>krajnja_god;
	cout << "Prestupne godine u rasponu "<<pocetna_god<<"-"<<krajnja_god<<" su:"<< endl;
	for(pocetna_god;pocetna_god<=krajnja_god;pocetna_god++){
		if((pocetna_god%4==0 && pocetna_god%100!=0) || pocetna_god%400==0){
			if(i<10)cout<<pocetna_god<<" ";
			else {
				cout<<endl<<pocetna_god<<" ";
				i=-1;
				 }
			i++;
		}
		
	}
	return 0;
}
