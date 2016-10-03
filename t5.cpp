#include <iostream>
#include <map>
using namespace std;

int main(){
	map<char, int> mymap;
	map<char, int>::iterator it;
	
	mymap.insert(pair<char, int>('a', 1));
	mymap['b'] = 2;
	mymap['c'] = 3;
	mymap['d'] = 4;
	mymap['e'] = 5;

	it = mymap.find('c');
	mymap.erase(it);
	mymap.erase('d');

	for(it=mymap.begin() ; it != mymap.end() ; it++)
		cout << (*it).first << " => "<<(*it).second<<endl;
}