#include"head.h"

void  func(A&a, B&b)
{
	/*a.b.reset(&b);
	b.a.reset(&a);*/
	return;
}
int main()
{
	A_shared a = make_shared<A>();
	B_shared b = make_shared<B>();
	//a.b.reset(&b);
	//b.a.reset(&a);
	//func(a,b);
	a->b = b;
	b->a = a;
	//use_count=2
	//so at the end of main
	//the memory of a point to is still can not be released! just change the use_count to 1
	//that is why we need weak_ptr which will not add the use_count
	cout << a.use_count() << endl;
	cout << b.use_count() << endl;
	system("pause");
	return 0;
}