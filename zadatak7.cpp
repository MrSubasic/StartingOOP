
/*
Napisati program koji traži od korisnika da unese neki string, a zatim ispisuje dužinu
 unijetog stringa i njegov prvi karakter.

*/		
#include <bits/stdc++.h>     //#include <iostream>
#include <string>

using namespace std;

main(){
	string recenica;
	cout << "Upisite vasu recenicu :" << endl; 
	getline(cin,recenica);
	cout<<"Duzina vase recenice je "<<recenica.size()<<" a prvi karakter vase recenice je :"<< recenica.at(0)<<endl;
	return 0;
}
