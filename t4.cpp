/*
 * set / multiset
*/
#include <iostream>
#include <set>

#include <vector>
using namespace std;
int main()
{
	set<int> set1;
	for (int i = 0; i < 10; ++i) 
		set1.insert(i);
	for (set<int>::iterator p = set1.begin();p != set1.end();++p) 
		cout<< *p << " ";
	cout << endl;
	
	if (set1.insert(3).second) 
		cout << "set insert success" <<endl;
	//把3插入到set1中
	//插入成功则set1.insert(3).second返回true,否则返回false
	//此例中,集中已经有3这个元素了,所以插入将失败
	else 
		cout << "set insert failed" <<endl;
	
	if (set1.find(3) != set1.end()) { // 查找元素3
		cout << "find it.." << endl;
	} 
	else {
		cout << "not find it.." << endl;
	}
	
	if (set1.find(300) != set1.end()) { // 查找元素100
		cout << "find it.." << endl;
	} 
	else {
		cout << "not find it.." << endl;
	}
	
	int a[] = {4, 1, 1, 1, 1, 1, 0, 5, 1, 0};
	multiset<int> A;
	A.insert(a, a + 10);
	for (multiset<int>::iterator q =A.begin();q != A.end();++q)
		cout << *q << " ";
	cout << endl;

	return 0;
}