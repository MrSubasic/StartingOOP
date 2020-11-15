/*Napisati program koji generiše dva cijela, nasumična broja te traži od korisnika da odgovori pitanje tipa:
 “Koliko je 8 - 3?” gdje su 8 i 3 nasumično generisani brojevi. Ispisati rezultat korisniku - ako je tacan, 
 cestitati ako nije - ispisati tacan odgovor.Ukoliko je prvi generisani broj manji od drugog, program treba da
 im zamijeni pozicije - rezultat oduzimanja ne smije biti negativan broj. */ 



#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

main(){
    srand(time(0));
    int a=rand() % 100+1;
    int b=rand() % 100+1;
    int rez;
    int c;
    if (a>=b){ 
        rez=a-b;
        cout<<"Koliko je " << a <<"-"<< b << endl;
    }
    else {
        rez=b-a;
        cout<<"Koliko je " << b <<"-"<< a << endl;
    }
    cin>>c;
    if(rez==c) cout<<"Cestitamo, tacan odgovor"<< endl;
    else cout<<"Odgovorili ste netacno. Tacan odgovor je "<<rez<<endl;
    return 0;
}