#include<iostream>
#include<list>
#include<forward_list>
#include<deque>
using namespace std;
int main()
{/*
	list<int> l {1, 2, 3, 4, 5};
	auto b = l.begin();
	cout << *b << endl;
	l.insert(b, 5, 10);
	for (auto const &a : l)
		cout << a << ' ';
	cout << endl << *b << endl;
	*/
	deque<int>d{ 1,2,3,4,5 };
	auto d2 = d.begin()+1 ;
	auto const&c = d[1];
	cout << "d2 "<<*d2 << endl;
	cout << "c " << c << endl;
	/*d.push_front(100);*/
	d.pop_front();
	for (auto const &a : d)
		cout << a << ' ';
	cout << endl;
	/*cout << "d2 " << *d2 << endl;*/
	cout << "d2 " << *d2 << endl;
	cout << "c " << c << endl;
	system("pause");
	return 0;
}