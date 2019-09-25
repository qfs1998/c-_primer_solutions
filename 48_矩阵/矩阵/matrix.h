#pragma once
#include<vector>
#include<initializer_list>
using namespace std;
template <typename object>
class matrix
{
public:
	matrix(int rows, int cols):array(rows),rows(rows),cols(cols)
	{
		for (int i = 0; i < rows; ++i)
		{
			array[i].resize(cols);
		}
	}
	const vector<object>& operator[](const int&row)const
	{
		return array[row];
	}
	vector<object>&operator[](const int&row)
	{
		return array[row];
	}
	int numrows()
	{
		return array.size();
	}
	int numcols()
	{
		return array.size() ? array[0].size() : 0;
	}
	matrix &operator=(const initializer_list<initializer_list<object>>&il)
	{
		
		for(auto a:il)
			if(a.size()>cols)
				cols=a.size();
			//rows*cols
		for(int i=0;i<rows;++i)
			copy(il[i].begin(),il[i].end(),array[i]);
		return *this;
	}

	
private:
	vector<vector<object>> array;
	int rows;
	int cols;
};



//class mytry
//{
//public:
//	mytry&operator=(const initializer_list<int>&rhs)
//	{
//		int i = 0;
//		
//		for (auto a : rhs)
//			v.push_back(a);
//		return *this;
//	}
//	vector<int>::iterator begin()
//	{
//		return v.begin();
//	}
//	vector<int>::iterator end()
//	{
//		return v.end();
//	}
//private:
//	vector<int>v;
//};