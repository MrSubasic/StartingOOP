
/*
Napisati program koji generiše cijeli, nasumičan broj u rasponu od 0 do 10 te pita korisnika da pogodi
 koji je broj generisan. Ukoliko korisnik unese veći broj od generisanog, program ispisuje da je broj veći
 te pita korisnika da pokuša ponovo sa manjim brojem. Ukoliko unese manji - pokušaj ponovo sa većim brojem. 
 Kada korisnik pogodi broj, program mu čestita i završava sa radom. 

*/		
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

main(){
	srand(time(0));
	int nasumican_br=rand()%11;
	int x;
	cout<<"Unesite nasumican broj (od 0 do 10) "<<endl;
	do {
  		cin>>x;
  		if(x>nasumican_br) cout<<"Broj je veci! Unesite manji broj: "<< endl;
  		else if(x<nasumican_br) cout<<"Broj je manji! Unesite veci broj: "<<endl;
  		else cout<<"Cestitamo pogodili ste broj!";

	}while(x!=nasumican_br);
	
	return 0;
}
