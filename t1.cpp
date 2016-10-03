/*
* vector instance
*/
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> INTVECTOR;// 自定义类型INTVECTOR

int main() { // 测试vector 容器的功能

	INTVECTOR vec1;//vec1 对象初始为空
	INTVECTOR vec2(10, 6);//vec2 对象最初有10 个值为6 的元素
	INTVECTOR vec3(vec2.begin(), vec2.begin() + 3);//vec3 对象最初有3 个值为6 的元素,拷贝构造
	INTVECTOR::iterator i;// 声明一个名为i 的双向迭代器

	cout << "vec1.begin()--vec1.end():" << endl;// 从前向后显示vec1 中的数据
	for (i = vec1.begin(); i != vec1.end(); ++i) 
		cout << *i << " ";
	cout << endl;

	cout << "vec2.begin()--vec2.end():" << endl;// 从前向后显示vec2 中的数据
	for (i = vec2.begin(); i != vec2.end(); ++i) 
		cout << *i << " ";
	cout << endl;

	cout << "vec3.begin()--vec3.end():" << endl;// 从前向后显示vec3 中的数据
	for (i = vec3.begin(); i != vec3.end(); ++i) 
		cout << *i << " ";
	cout << endl;
	
	// 测试添加和插入成员函数,vector 不支持从前插入
	vec1.push_back(2); // 从后面添加一个成员
	vec1.push_back(4);
	vec1.insert(vec1.begin() + 1, 5);// 在vec1 第一个的位置上插入成员5
	vec1.insert(vec1.begin() + 1, vec3.begin(), vec3.end());// 从vec1 第一的位置开始插入vec3的所有成员
	
	cout << "after push() and insert() now the vec1 is:" << endl;
	for (i = vec1.begin(); i != vec1.end(); ++i) 
		cout << *i << " ";
	cout << endl;

	// 测试赋值成员函数
	vec2.assign(8, 1); // 重新给vec2 赋值,8 个成员的初始值都为1

	cout << "vec2.assign(8,1):" << endl;
	for (i = vec2.begin(); i != vec2.end(); ++i)
		cout << *i << " ";
	cout << endl;

	// 测试引用类函数
	cout << "vec1.front()=" << vec1.front() << endl;// vec1 第零个成员
	cout << "vec1.back()=" << vec1.back() << endl;// vec1 的最后一个成员
	cout << "vec1.at(4)=" << vec1.at(4) << endl;// vec1 的第五个成员
	cout << "vec1[4]=" << vec1[4] << endl;

	// 测试移出和删除
	vec1.pop_back();// 将最后一个成员移出vec1
	vec1.erase(vec1.begin() + 1, vec1.end() - 2);// 删除成员
	cout << "vec1.pop_back() and vec1.erase():" << endl;
	for (i = vec1.begin(); i != vec1.end(); ++i)
		cout << *i << " ";
	cout << endl;

	// 显示序列的状态信息
	cout << "vec1.size(): " << vec1.size() << endl;// 打印成员个数
	cout << "vec1.empty(): " << vec1.empty() << endl;// 清空
	return 0;
}