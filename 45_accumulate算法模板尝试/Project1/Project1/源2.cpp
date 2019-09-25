#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;


template<typename _InputIterator, typename _Tp,
	typename _BinaryOperation>
	_Tp Accumulate(_InputIterator __first, _InputIterator __last,
		_Tp __init, _BinaryOperation __binary_op)
{
	for (; __first != __last; ++__first)
		__init = __binary_op(__init, *__first);
	return __init;
}


int SumSquares(int total, int value)
{
	return total + value * value;
}
template <class T>
void PrintInterval(T first, T last)
{ //�������[first,last)�е�Ԫ��
	for (; first != last; ++first)
		cout << *first << " ";
	cout << endl;
}


template<class T>
class SumPowers
{
private:
	int power;
public:
	SumPowers(int p) :power(p) { }
	const T operator() (const T & total,
		const T & value)
	{ //���� value��power�η����ӵ�total��
		T v = value;
		for (int i = 0; i < power - 1; ++i)
			v = v * value;
		return total + v;
	}
};


int main()
{
	const int SIZE = 10;
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> v(a1, a1 + SIZE);
	cout << "1) "; PrintInterval(v.begin(), v.end());
	int result = Accumulate(v.begin(), v.end(), 0, SumSquares);
	cout << "2) ƽ���ͣ�" << result << endl;
	result =Accumulate(v.begin(), v.end(), 0, SumPowers<int>(3));
	cout << "3) �����ͣ�" << result << endl;
	result =Accumulate(v.begin(), v.end(), 0, SumPowers<int>(4));
	cout << "4) 4�η��ͣ�" << result;
	system("pause");
	return 0;
}