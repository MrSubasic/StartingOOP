/*
Napisati program koji pita korisnika da unese neki cijeli broj. Kada je korisnik unijeo broj,
 program ispisuje sve brojeve djeljive sa 13. 
 Unesite cijeli broj kao gornju granicu: 100
 Brojevi djeljivi sa 13 u rasponu od 1 do 100 su: 
 13 26 39 52 65 78 91 

*/
#include <bits/stdc++.h>
using namespace std;

main(){
    int n;
    cout << "Unesite cijeli broj kao gornju granicu: " << endl; 
    cin >> n;
    cout << "Brojevi djeljivi sa 13 u rasponu 1 do " <<n<< " su:" << endl;
    for (int i=1;i<=n;i++){
        if(i%13==0) cout<<i<<" ";
    }
    return 0;
}