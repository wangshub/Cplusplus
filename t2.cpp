/*
deque
*/
#include <iostream>
#include <deque>
using namespace std;
typedef deque<int> INTDEQUE;
// 从前向后显示deque 队列的全部元素
void put_deque(INTDEQUE deque, char *name)
{
	INTDEQUE::iterator pdeque;// 仍然使用迭代器输出
	cout << "The contents of " << name << " : ";
	for(pdeque = deque.begin(); pdeque != deque.end(); pdeque++)
	cout << *pdeque << " ";// 注意有 "*" 号哦,没有"*" 号的话会报错
	cout<<endl;
}
// 测试deqtor 容器的功能
int main()
{
	//deq1 对象初始为空
	INTDEQUE deq1;
	//deq2 对象最初有10 个值为6 的元素
	INTDEQUE deq2(10,6);
	// 声明一个名为i 的双向迭代器变量
	INTDEQUE::iterator i;
	// 从前向后显示deq1 中的数据
	put_deque(deq1,"deq1");
	// 从前向后显示deq2 中的数据
	put_deque(deq2,"deq2");
	
	// 从deq1 序列后面添加两个元素
	deq1.push_back(2);
	deq1.push_back(4);
	cout<<"deq1.push_back(2) and deq1.push_back(4):"<<endl;
	put_deque(deq1,"deq1");
	// 从deq1 序列前面添加两个元素
	deq1.push_front(5);
	deq1.push_front(7);
	cout<<"deq1.push_front(5) and deq1.push_front(7):"<<endl;
	put_deque(deq1,"deq1");
	
	// 在deq1 序列中间插入数据
	deq1.insert(deq1.begin()+1,3,9);
	cout<<"deq1.insert(deq1.begin()+1,3,9):"<<endl;
	put_deque(deq1,"deq1");
	// 测试引用类函数
	cout<<"deq1.at(4)="<<deq1.at(4)<<endl;
	cout<<"deq1[4]="<<deq1[4]<<endl;
	deq1.at(1)=10;
	deq1[2]=12;
	cout<<"deq1.at(1)=10 and deq1[2]=12 :"<<endl;
	put_deque(deq1,"deq1");
	
	// 从deq1 序列的前后各移去一个元素
	deq1.pop_front();
	deq1.pop_back();
	cout<<"deq1.pop_front() and deq1.pop_back():"<<endl;
	put_deque(deq1,"deq1");
	// 清除deq1 中的第2 个元素
	deq1.erase(deq1.begin()+1);
	cout<<"deq1.erase(deq1.begin()+1):"<<endl;
	put_deque(deq1,"deq1");
	// 对deq2 赋值并显示
	deq2.assign(8,1);
	cout<<"deq2.assign(8,1):"<<endl;
	put_deque(deq2,"deq2");
}

