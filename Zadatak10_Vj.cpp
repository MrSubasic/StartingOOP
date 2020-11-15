
/*

*/		
#include <bits/stdc++.h>     //#include <iostream>
#include <string>
#include <vector>
using namespace std;



main(){
	int i=1;
 	vector<string> linije;
 	string linija;
	while(getline(cin,linija)){
		cout<<"Upisite vasu "<<i<<" liniju: "<<endl;
		linije.push_back(linija);
		//cout<<endl;
		i++;
	}
	cout<<"Hvala na unosu! Ispis :"<<endl;
	for(int j=linije.size()-1;j>=0;j--){
		cout<<"Linija "<<j+1<< " :"<< linije.at(j)<<endl;

	}
	return 0;
}
