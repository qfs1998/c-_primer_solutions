#pragma once
class IntCell
{
public:
	//explicit使得不能由int生成临时的IntCell变量
	explicit IntCell(int initialValue = 0)
	{
		storedValue = new int(initialValue);
	}
	/*
		如果将拷贝构造函数和赋值函数声明为private的话
	*/
//private:
	IntCell(const IntCell &i);
	IntCell & operator=(const IntCell& i);
	~IntCell()
	{
		delete storedValue;
	}
public:
	int read()const
	{
		return *storedValue;
	}
	void write(int x)
	{
		*storedValue = x;
	}
private:
	int *storedValue;
};
IntCell::IntCell(const IntCell& i)
{
	int a = *i.storedValue;
	this->storedValue = new int(a);
}
IntCell &IntCell::operator=(const IntCell& i)
{
	if (this != &i)
	{
		int a = *i.storedValue;
		this->storedValue = new int(a);
	}
	return *this;
}