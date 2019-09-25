#pragma once
#include<vector>
#include<algorithm>
using namespace std;
void bubbleSort(vector<int>&v);

void selectionSort(vector<int>&v);

void insertSort(vector<int>&v);

void merge(vector<int>&v, int start,int mid, int end);
void merge_sort_up2down(vector<int>&v, int start, int end);

void quick_sort(vector<int>&v, int p, int r);
int partition(vector<int>&v, int p, int r);