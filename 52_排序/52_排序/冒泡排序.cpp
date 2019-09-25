#include"head.h"
//n个数排序一共要进行n-1轮,每一轮都把最大的数放到数组最后面
//因此后面的数字是已经排序好的了
//j+1<sz
//
void bubbleSort(vector<int>&v)
{
	int sz = v.size();
	for (int i = 0; i < sz-1; ++i)
	{
		for (int j = 0; j < sz - i-1; ++j)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}

	}
	return;
 }
void bubbleSort2(vector<int>&v)
{
	int sz = v.size();
	for (int i = 0; i < sz - 1; ++i)
	{
		for (int j = 0; j < sz - 1 - i; ++j)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
	return;
}