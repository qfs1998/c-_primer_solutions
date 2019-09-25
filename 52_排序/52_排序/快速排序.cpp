#include"head.h"

//int partition(vector<int>&v, int p, int r)
//{
//	//基准
//	int x = v[r];
//	int i = p - 1;
//	int j = p;
//	while (j < r)
//	{
//		if (v[j] < x)
//		{
//			++i;
//			int temp = v[i];
//			v[i] = v[j];
//			v[j] = temp;
//			//++j;
//		}
//		//这里有点奇怪，为什么不能放在if语句中？废话，不然读到大于基准的数j的值一直不变不是死循环了吗！！！！！！！！
//		++j;
//	}
//	int temp2 = v[i + 1];
//	v[i + 1] = v[r];
//	v[r] = temp2;
//	return i + 1;
//}
//void quick_sort(vector<int>&v, int p, int r)
//{
//	if (p >= r)
//		return;
//	int q = partition(v, p, r);
//	quick_sort(v, p, q - 1);
//	quick_sort(v, q + 1, r);
//	return;
//}
//int partition(vector<int>&v, int p, int r)
//{
//	int x = v[r];
//	int i = p - 1;
//	int j = p;
//	while (j < r)
//	{
//		if (v[j] < x)
//		{
//			++i;
//			int temp = v[i];
//			v[i] = v[j];
//			v[j] = temp;
//		}
//		++j;
//	}
//	v[r] = v[i + 1];
//	v[i + 1] = x;
//	return i + 1;
//}
//void quick_sort(vector<int>&v, int p, int r)
//{
//	if (p >= r)
//		return;
//	int q = partition(v, p, r);
//	quick_sort(v, p, q - 1);
//	quick_sort(v, q + 1, r);
//	return;
//}
int po(vector<int>&v, int p, int r)
{
	int i = p-1;
	int x = v[r];
	int j = p;
	for (; j < r; ++j)
	{
		if (v[j] < x)
		{
			++i;
			int temp = v[i];
			v[i] = v[j];
			v[j] = temp;
		}
	}
	v[r] = v[i + 1];
	v[i + 1] = x;
	return i + 1;

}

int partition(vector<int>&v, int p, int r)
{
	
	int i = p - 1;
	int j = p;
	int x = v[r];
	for (; j < r; ++j)
	{
		if (v[j] < x)
		{
			++i;
			int temp = v[i];
			v[i] = v[j];
			v[j] = temp;
		}
	}
	v[r] = v[i + 1];
	v[i + 1] = x;
	return i + 1;

}
void quick_sort(vector<int>&v, int p, int r)
{
	if (p >= r)return;
	int q = partition(v, p, r);
	quick_sort(v, p, q - 1);
	quick_sort(v, q + 1, r);
	return;
}













//算法导论
//#include<iostream>
//#include<vector>
//using namespace std;
//int partition(vector<int>&v, int p, int r)
//{
//	int i = p - 1, j = p;
//	int x = v[r];//基准
//	while (j < r)
//	{
//		if (v[j] <= x)
//		{
//			++i;
//			int temp1 = v[i];
//			v[i] = v[j];
//			v[j] = temp1;
//		}
//		++j;
//	}
//	int temp2 = v[i + 1];
//	v[i + 1] = v[j];
//	v[j] = temp2;
//	return i + 1;
//}
//void QuickSort(vector<int>&v, int p, int r)
//{
//	if (p < r)
//	{
//		int q = partition(v, p, r);
//		QuickSort(v, p, q - 1);
//		QuickSort(v, q + 1, r);
//	}
//	return;
//}
//int main()
//{
//	vector <int> v = { 23,21,52,56,85,10,2,3,6,30 };
//	QuickSort(v, 0, v.size() - 1);
//	for (auto const&a : v)
//		cout << a << ' ';
//	cout << endl;
//	system("pause");
//	return 0;
//}
//教材
//#include<iostream>
//#include<vector>
//using namespace std;
//int partition(vector<int>&v, int p, int r)
//{
//	int key = v[p], i = p, j = r + 1;
//	while (true)
//	{
//		while (v[--j] > key&&j > i);
//		while (v[++i] <= key && i < j);
//		if (i >= j)
//			break;
//		int temp = v[j];
//		v[j] = v[i];
//		v[i] = temp;
//	}
//	int temp = v[j];
//	v[j] = key;
//	v[p] = temp;
//	return j;
//}
//void QuickSort(vector<int>&v, int p, int r)
//{
//	if (p < r)
//	{
//		int q = partition(v, p, r);
//		QuickSort(v, p, q - 1);
//		QuickSort(v, q + 1, r);
//	}
//	return;
//}
//int main()
//{
//	vector <int>v{ 15,23,20,14,13,69,25,2 };
//	QuickSort(v, 0, v.size() - 1);
//	for (auto const&a : v)
//		cout << a << ' ';
//	cout << endl;
//	system("pause");
//	return 0;
//}