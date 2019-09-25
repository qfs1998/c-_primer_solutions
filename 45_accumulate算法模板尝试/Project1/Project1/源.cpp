//#include<iostream>
//#include<vector>
//using namespace std;
////累加
//template <class Iter,class Tp>
//Tp Accumulate(Iter first, Iter last, Tp init)
//{
//	for (; first != last; ++first)
//		init = init + *first;
//	return init;
//}
////平方和
//int SumSquare(int total, int value)
//{
//	return total + value*value;
//}
//
//
////n次方和
//template<class Iter, class Tp, class Operation>
//Tp Accumulate(Iter first, Iter last, Tp init, Operation op)
//{
//	for (; first != last; ++first)
//		init = op(init,*first);
//	return init;
//}
//
////op类
//template <class T>
//class SumPowers
//{
//private:
//	int power;
//public:
//	SumPowers(int a) :power(a) {};
//	~SumPowers();
//	T operator	()(const T&total, const T&value)
//	{
//		T temp = value;
//		for (int i = 0; i < power - 1; ++i)
//			temp = value*temp;
//		return total + temp;
//	}
//};
//int main()
//{
//	vector<int>v{ 12,78,33,45,67,-42,231 };
//	int result;
//	result=Accumulate(v.cbegin(), v.cend(), 0);
//	cout << result << endl;
//
//	v.push_back(77);
//	result = Accumulate(v.begin(), v.end(), 0, SumPowers<int>(3));
//	
//	cout << result << endl;
//	cout << result << endl;
//	system("pause");
//	return 0;
//}