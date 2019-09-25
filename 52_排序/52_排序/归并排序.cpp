#include"head.h"
//void merge(vector<int>&v,int start ,int mid,int end)
//{
//	if (start >= end)
//		return;
//	vector<int>temp;
//	int i = start, j = mid + 1;
//	while (i <= mid && j <= end)
//	{
//		if (v[i] <= v[j])
//			temp.push_back(v[i++]);
//		else
//			temp.push_back(v[j++]);
//	}
//
//	while (i <= mid)
//		temp.push_back(v[i++]);
//	while (j <= end)
//		temp.push_back(v[j++]);
//	copy(temp.begin(), temp.end(), v.begin() + start);
//	
//}
//void merge_sort_up2down(vector<int>&v, int start, int end)
//{
//	if (start >= end)
//		return;
//	int mid = (start + end) / 2;
//	merge_sort_up2down(v, start, mid);
//	merge_sort_up2down(v, mid + 1, end);
//
//	merge(v, start, mid, end);
//	return;
//}
void merge(vector<int>&v, int start, int mid, int end)
{
	if (start >= end)
		return;
	vector<int>temp;
	int i = start, j = mid + 1;
	while (i <= mid && j <= end)
	{
		if (v[i] <= v[j])
			temp.push_back(v[i++]);
		else
			temp.push_back(v[j++]);
	}
	if (i <= mid)
		temp.push_back(v[i++]);
	if (j <= end)
		temp.push_back(v[j++]);
	copy(temp.begin(), temp.end(), v.begin() + start);
	return;
}
void merge_sort_up2down(vector<int>&v, int start, int end)
{
	if (start >= end)
		return;
	int mid = (start + end) / 2;
	merge_sort_up2down(v, start, mid);
	merge_sort_up2down(v, mid + 1, end);
	merge(v, start, mid, end);
	return;
}