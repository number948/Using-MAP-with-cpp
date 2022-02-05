#include<iostream>
#include<map>
#include<vector>

using namespace std;




int main(){

map<string, int> discos;

discos["Sawdust"] = 2007;
discos["Day and Age"] = 2008;
discos["Battle Born"] = 2012;
discos["Direct Hits"] = 2013;
discos["Don't waste your wishes"] = 2016;

map<string, int> :: iterator i;

cout<<"discografia The Killers"<<endl;
for(i = discos.begin(); i != discos.end(); i++){
    cout<<i->first<<" : "<<i->second<<endl;
}

//TRATANDO DE ORDENAR LA SALIDA DEL MAP

map<int, string> discos_2;

discos_2.insert(pair<int, string>(2007, "Sawdust"));
discos_2.insert(pair<int, string>(2008, "Day and Age"));
discos_2.insert(pair<int, string>(2012, "Battle Born"));
discos_2.insert(pair<int, string>(2013, "Direct Hits"));
discos_2.insert(pair<int, string>(2016, "Don't waste your wishes"));

map<int, string> :: iterator itr;

cout<<"discografia The Killers 2"<<endl;
for(itr = discos_2.begin(); itr != discos_2.end(); itr++){
    cout<<itr->first<<" : "<<itr->second<<endl;
}



    return 0;
}