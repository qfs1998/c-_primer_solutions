#include<iostream>
#include<cmath>
#include<algorithm>
#include<cmath>
using namespace std;
class CShape
{
public:
	virtual double Area() = 0;//纯虚函数，这个基类不需要函数体
	virtual void PrintInfo() = 0;
};
class CTriangle :public CShape
{
public:
	double a, b, c;
	virtual double Area();
	virtual void PrintInfo();
};
double CTriangle::Area()
{
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a)*(p - b)*(p - c));
}
void CTriangle:: PrintInfo()
{ 
	cout << "Triangle:" << Area() << endl; return;
}



class CRectangle:public CShape
{
public:
	double w, h;
	virtual double Area();
	virtual void PrintInfo();
};

double CRectangle::Area()
{
	return w*h;
}

void CRectangle::PrintInfo()
{
	cout << "Rectangle:" << Area() << endl;
	return;
}



class CCircle :public CShape
{
public:
	double r;
	virtual double Area();
	virtual void PrintInfo();
};
double CCircle::Area()
{
	return 3.14*r*r;
}
void CCircle :: PrintInfo()
{
	cout << "Circle:" << Area() << endl;
	return;
}
bool  Mycompare( const void*a,const void*b)
{
	
	CShape **p1;
	CShape **p2;
	p1 = (CShape**)a;
	p2 = (CShape**)b;
	double s1 = (*p1)->Area();
	double s2 = (*p2)->Area();
	return (s1<s2);
	
}
int MyCompare(const void * s1, const void * s2)
{
	double a1, a2;
	CShape * * p1;
	CShape * * p2;
	p1 = (CShape * *)s1;
	p2 = (CShape * *)s2;
	a1 = (*p1)->Area();
	a2 = (*p2)->Area();
	if (a1 < a2) return -1; else if (a2 < a1)return 1; 
	else return 0;
}

int main()
{
	int n;
	cout << "组数:" << endl;
	cin >> n;
	CShape* a[100];

	for (int i = 0; i < n; ++i)
	{
		char c;
		cin >> c;
		CRectangle *pr;
		CTriangle*pt;
		CCircle *pc;
		switch (c)
		{
			case 'R':
				pr = new CRectangle();
				cin >> pr->w >> pr->h;
				
				a[i] = pr;
				break;
			case 'T':
				pt = new CTriangle();
				cin >> pt->a >> pt->b >> pt->c;
				
				a[i] = pt;
				break;
			case 'C':
				pc = new CCircle();
				cin >> pc->r;
				
				a[i] = pc;
				break;
		}
	}
	qsort(a,n, sizeof(CShape*), MyCompare);
	//sort(a, a+n-1, Mycompare);
	for (int i = 0; i < n; ++i)
	{
		a[i]->PrintInfo();
	}
	system("pause");
	return 0;
}
/*bool compare(int a, int b)
{
	return a<b; //升序排列，如果改为return a>b，则为降序
}
#include <algorithm>
#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 2,4,1,23,5,76,0,43,24,65 }, i;
	for (i = 0; i<10; i++)
		cout << a[i] << ' ';
	cout << endl;
	sort(a, a+10, compare);
	for (i = 0; i<10; i++)
		cout << a[i] << ' ';
	cout << endl;
	system("pause");
	return 0;
}*/