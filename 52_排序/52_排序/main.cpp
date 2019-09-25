/*
*/
#include<iostream>

#include"head.h"
using namespace std;
int main()
{
	vector<int>v = { 3,2,7,5,9,8,11 };
	//bubbleSort(v);
	//selectionSort(v);
	//insertSort(v);
	//merge_sort_up2down(v, 0, v.size()-1);
	//quick_sort(v, 0, v.size()-1);
	quick_sort(v, 0, v.size() - 1);
	for (const auto&a : v)
		cout << a << ' ';

	return 0;
}