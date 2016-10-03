/*
不改变顺序的操作的算法
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
	int myints[] = { 10, 20, 30 ,40 };
	
	vector<int> myvector (myints,myints+4);
	vector<int>::iterator it;

	it = find (myvector.begin(), myvector.end(), 30);
	++it;
	cout << "The element following 30 is " << *it << endl;

	return 0;
}