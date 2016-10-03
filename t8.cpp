//sort instance
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool myfunction (int i,int j) { return (i<j); }
int main () {
	int myints[] = {5, 3, 4, 1, 2};
	vector<int> myvector (myints, myints+5);
	vector<int>::iterator it;

	//sort (myvector.begin(), myvector.end());     //利用默认优先级比较大小
	sort (myvector.begin(), myvector.end(), myfunction);  //用函数对象做比较

	for (it=myvector.begin(); it!=myvector.end(); ++it)
		cout << *it << " ";
	return 0;
}