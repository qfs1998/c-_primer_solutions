#pragma once
class IntCell
{
public:
	//explicitʹ�ò�����int������ʱ��IntCell����
	explicit IntCell(int initialValue = 0)
	{
		storedValue = new int(initialValue);
	}
	/*
		������������캯���͸�ֵ��������Ϊprivate�Ļ�
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