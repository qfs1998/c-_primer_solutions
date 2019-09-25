#include<iostream>
using namespace std;
struct C
{
public:
	/*explicit加上就报错*//*explicit*/ C(int a) :a(a) { cout << "int" << endl; }
	//有意思的是如果C(int a)前加了explicit而C(double)前没加
	//则调用double型的，但此时，并未给a赋值，而是给b赋值，故而Add_1的值是未定义的
	/*explicit C(double b) :b(b) { cout << "double" << endl; }*/
	
	
	//如果我们加了explicit而又想转化的类型的话可以强制转化类型
	//如  C a=C(1);   或  C a= static_cast<C>(1);
	inline int get() { return a; }
private:
	int a;
	double b;
};
int Add_1(C a, C b)
{
	return a.get() + b.get();
}
int main()
{ 
	/*C a = C(1);//类型转化的过程钟也要调用构造函数
	C b = static_cast<C>(1);
	cout << Add_1(a, b) << endl;//将1，2转化为C类对象给形参赋值
	*/
	cout << Add_1(1, 2) << endl;
	//需要注意的是如果Add_1函数变为Add_1(C&a,C&b)则发生错误
	//因为是把1，2变成临时变量让形参的引用绑定，可是临时变量完成任务后就要被释放了
	//因为绑定一个不能改变值得对象（临时变量）是毫无意义的
	//故而约定，若使用绑定，则需是const&,即Add_1(const C&a,const C&b)
	//如果我们想要限制这种隐式转化，可以在默认函数前加上explicit adj. 显示的，清楚的明确的


	system("pause");
	return 0;
}