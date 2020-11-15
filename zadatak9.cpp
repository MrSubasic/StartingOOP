
/*
Napisati program koji pita korisnika da unese string, a zatim prolazi kroz taj string i ispisuje svaki 
 njegov karakter sa jednim spaceom razmaka.
 Unesite string: Kurente, crno dijete. 
 Karakteri stringa: K u r e n t e ,  c r n o   d i j e t e .
*/	

#include <bits/stdc++.h>     //#include <iostream>
#include <string>

using namespace std;


main(){
	string unos;
	cout << "Upisite recenicu: " << endl; 
	getline(cin,unos);
	for(int i=0;i<unos.size();i++){
		cout<<unos.at(i)<<" ";
	}
	return 0;
}
