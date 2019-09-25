///*
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	long long n, w;
//	cin >> n;
//	cin >> w;
//	vector<long long> contain;
//	for (long long i = 0; i < 2 * n; ++i)
//	{
//		long long eachcontain;
//		cin >> eachcontain;
//		contain.push_back(eachcontain);
//	}
//	sort(contain.begin(), contain.end());
//	//for (auto a : contain)
//	//	cout << a << endl;
//	//vector<int> left(contain.begin(), contain.begin() + n);//前n个
//	//vector<int>right(contain.begin() + n, contain.end());//后n个
//
//	if (contain[0] * 2 <= contain[n])
//	{
//		double res = n * contain[0] + 2 * n*contain[0];
//		if (w >= res)
//			printf("%6f", res);
//		else
//			printf("%6f", double(w));
//	}
//	else
//	{
//		double gril = double(contain[0]) / 2;
//		double res = gril * 1.5*(double)n;
//		if(w>=res)
//			printf("%6f", res);
//		else
//			printf("%6f", double(w));
//
//	}
//
//	system("pause");
//	return 0;
//}