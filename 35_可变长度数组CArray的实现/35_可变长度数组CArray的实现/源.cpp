#include<iostream>
#include<string>
#include<initializer_list>
using namespace std;
class CArray
{
public:
	CArray(int s = 0);
	CArray(const CArray&C);//如果不自己写拷贝构造函数，则会使两个ptr指向同一个空间
	CArray(const initializer_list<int>&l);//列表初始化!!! 
	~CArray();
	CArray& operator =(const CArray&C);
	int & operator [](int a)const;//!!const类对象不能引用非const成员函数，因为有可能非const成员函数会要改变const类对象中的成员，譬如这个如果函数后面如果不加const修饰，则const CArray C; C将无法使用这个重载的<<函数
	void push_back(const int &a);
	int get_size() { return size; }
	friend ostream&operator<<(ostream&os, const CArray&C);
	operator int();//类型转化
private:
	int size;
	int *ptr;
};
CArray::CArray(int s) :size(s)
{
	if (size == 0)
		ptr = NULL;
	else
		ptr = new int[s];
	cout << "CArray(int s)" << endl;
}
CArray::CArray(const CArray&C)
{
	if (!C.size)
	{
		size = 0;
		ptr = NULL;
		cout << "CArray(const CArray&C)" << endl;
		return;
	}
	size = C.size;
	ptr = new int[size];
	memcpy(ptr, C.ptr, sizeof(int)*size);
	cout << "CArray(const CArray&C)" << endl;
}
CArray::CArray(const initializer_list<int>&l)
{
	size = l.size();
	ptr = new int[size];
	memcpy(ptr, l.begin(), sizeof(int)*size);
	cout << "CArray(const initializer_list<int>&l)" << endl;
}
CArray::~CArray()
{	
	if (!ptr)
		delete[] ptr;
}
CArray& CArray:: operator =(const CArray&C)
{
	if (ptr == C.ptr)
		return *this;
	if (!C.ptr)
	{
		size = 0;
		delete[]ptr;
		ptr = NULL;	
		return *this;
	}
	if (size < C.size)
	{
		delete[]ptr;
		ptr = new int[C.size];
	}
	size = C.size;
	memcpy(ptr, C.ptr, sizeof(int)*size);
	return *this;
}
int& CArray::operator[]( int a)const
{
	return ptr[a];
}
void CArray::push_back(const int &a)
{
	if (ptr)
	{
		int *tmp = new int[size + 1];
		memcpy(tmp, ptr, sizeof(int)*size);
		tmp[size] = a;
		delete[]ptr;
		ptr = tmp;
		++size;
	}
}
ostream& operator <<(ostream&os, const CArray&C)
{
	os << "size=" << C.size << endl;
	for (int i = 0; i < C.size; ++i)
	{
		os << C[i] << ' ';
	}
	os << endl;
	return os;
}
CArray::operator int()
{
	return size;
}
int main()
{
	/*CArray A(3);
	A[0] = 1; A[1] = 2; A[2] = 3;
	CArray B(A);
	CArray C;
	C = A;
	cout << B << C;*/
	/*CArray A(1);
	CArray B = A;*/
	CArray D{ 1,2,3,4,5 };
	cout << D << endl;
	D.push_back(6);
	cout << D;
	cout << 1 + D << endl;
	system("pause");
	return 0;
}
