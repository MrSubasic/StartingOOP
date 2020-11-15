
/*
Napisati program koji pita korisnika da unese ocjenu  kao slovo (A, B, C, D ili F) i 
 ispisuje mu odgovarajuću numeričku ocjenu (5, 4, 3, 2 ili 1).

*/		
#include <bits/stdc++.h>     //#include <iostream>
#include <string>

using namespace std;

main(){
	char ocjena;
	cout << "Unesite ocjenu (A,B,C,D ili F)" << endl; 
	cin>>ocjena;
	if(ocjena=='A'||ocjena=='a') cout<<ocjena<<" = 5" ;
	else if(ocjena=='B'||ocjena=='b') cout<<ocjena<<" = 4" ;
	else if(ocjena=='C'||ocjena=='c') cout<<ocjena<<" = 3" ;
	else if(ocjena=='D'||ocjena=='d') cout<<ocjena<<" = 2" ;
	else if(ocjena=='E'||ocjena=='e') cout<<ocjena<<" = 1" ;
	else cout<<"Unos je pogresan!";
	return 0;
}
