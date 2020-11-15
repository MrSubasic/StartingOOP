#include <bits/stdc++.h>
using namespace std;

int main()
{
    int br;
    int suma=0;
    int i=0;
    cout << "Molimo unesite cijele brojeve (Sa nulom zavrsavate unos)" << endl;
    while(cin >> br){
            if(br!=0){
                suma+=br;
                i++;
            } else break;
    }
    cout << "Zbir unesenih brojeva je : " << suma << endl ;
    cout << "Prosjek unesenih brojeva je : " << double(suma/i) << endl;
    return 0;
}