#include <iostream>
#include <string>
#include <list>
using namespace std;
void PrintIt(list<int> n) {
	for (list<int>::iterator iter = n.begin(); iter != n.end(); ++iter)
		cout << *iter << " ";//用迭代器进行输出循环
}

int main(void) {
	list<int> listn1, listn2;
	//给listn1,listn2初始化
	listn1.push_back(123);
	listn1.push_back(0);
	listn1.push_back(34);
	listn1.push_back(1123);
	//now listn1:123,0,34,1123
	listn2.push_back(100);
	listn2.push_back(12);
	//now listn2:100,12
	listn1.sort();
	listn2.sort();
	//给listn1和listn2排序
	//now listn1: 0,34,123,1123 listn2: 12,100
	PrintIt(listn1);
	cout << endl;

	PrintIt(listn2);
	listn1.merge(listn2); //合并两个排序列表后,listn1:0,12,34,100,123,1123
	cout << endl;
	
	PrintIt(listn1);
	cin.get();
}