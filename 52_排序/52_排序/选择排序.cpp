#include"head.h"
//每一轮都选择最小的值放到排头
void selectionSort(vector<int>&v)
{
	int sz = v.size();
	for (int i = 0; i < sz-1; ++i)
	{
		int current_min_index = i;
		for (int j = i + 1; j < sz; ++j)
		{
			if (v[j] < v[current_min_index])
				current_min_index = j;
		}
		int temp = v[i];
		v[i] = v[current_min_index];
		v[current_min_index] =temp;
	}
	return;
}
void sele2(vector<int>&v)
{
	int sz = v.size();
	for (int i = 0; i < sz - 1; ++i)
	{
		int min_index = i;
		for (int j = i + 1; j < sz; ++j)
		{
			if (v[j] < v[min_index])
				min_index = j;
		}
		int temp = v[i];
		v[i] = v[min_index];
		v[min_index] = temp;
	}

}