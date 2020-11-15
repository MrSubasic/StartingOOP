/*
	Napisati program koji simulira bacanje 
	kovanice milion puta te ispisuje korisniku koliko puta je novčić pao na glavu a koliko puta na pismo.
*/

#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

main(){
	int pismo=0;
	int glava=0;
	srand(time(0));
	for(int i=0; i<1000000; i++){
		int bacanje;
		bacanje=rand()%2;
		//cout<<bacanje<<endl;
		if(bacanje==1) pismo++;
		else glava++;

	}
	cout << "Novcic je na glavu pao " <<glava<< " puta, a na pismo je pao "<<pismo<<" puta"<< endl; 
	return 0;
}