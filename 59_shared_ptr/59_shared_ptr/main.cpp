////#include<iostream>
////#include<vector>
////#include"StrBlob.h"
////#include"БъЭЗ.h"
////using namespace std;
//#include "StrBlob.h"
////#include<string>
////#include<string>
////#include"people.h"
////#include"FuckWrong.h"
//void haha(shared_ptr<int>mm)
//{
//	cout << "inside haha" << endl;
//	cout << mm.use_count() << endl;
//}
//int main()
//{
//	StrBlob b({ "hello","world" });
//	StrBlob a(b);
//	//a and b use a same vector stored in the same space 
//	a.front() = "Hello";
//
//	//b.show();
//
//	vector<string> *p = b.get_shared_ptr().get();
//	for (auto a : *p)
//	{
//		cout << a << endl;
//	}
//
//	shared_ptr <int> pp;
//	int aa = 5;
//	//pp = static_cast<shared_ptr<int>>(&aa);
//
//	int *bb = new int(3);
//	cout << *bb << endl;
//	//pp.reset(bb);
//	//cout << *pp << endl;
//	{
//		int z = 5;
//		shared_ptr <int>cc =make_shared<int>(z);
//		*cc = 6;
//		//cout << cc.use_count() << endl;
//		
//	}
//	//the space that bb point to has been released/deleted
//	cout << *bb << endl;
//	//cout << *pp << endl;
//
//	//People p;
//	//cout << p.getname() << '\t' << endl;
//	/*cout << "hello" << endl;*/
//
//
//
//	shared_ptr <int> ss (new int(1));
//	if (ss == nullptr)
//		cout << "empty" << endl;
//	cout << *ss << endl;
//	int *sp = ss.get();
//	//cout << *sp << endl;
//	//{
//	//	shared_ptr<int>(sp);	
//	//}
//	haha(shared_ptr<int>(sp));
//	cout << "hhh" << endl;
//	int ff = *ss;
//	cout << ff << endl;
//	//at the end of main ss will free the memory that has been freed inside haha(). double freed will make false!
//	system("pause");
//	return 0;
//}
//
//
///***************************************************************************
// *  @file       The code is for the exercises in C++ Primmer 5th Edition
// *  @author     Alan.W
// *  @date       23  DEC 2013
// *  @remark
// ***************************************************************************/
// //!
// //! Exercise 12.11:
// //! What would happen if we called process as follows?
// //  An error was generated at run time : double free or corruption.
// //  See the comments below.
//
////#include <iostream>
////#include <vector>
////#include <string>
////#include <memory>
////#include<exception>
////using namespace std;
////void process(std::shared_ptr<int> ptr)
////{
////	std::cout << "inside the process function:" << ptr.use_count() << "\n";
////}
////
////int main()
////{
////	//std::shared_ptr<int> p(new int(42));
////	std::shared_ptr<int> p= std::make_shared<int>(42);
////
////	/**
////	 * @brief   std::shared_ptr<int>(p.get()) construct a temporary shared_ptr
////	 * and copy it
////	 *          to the parameter.However it is not a copy of p. As a result, at
////	 * end of this
////	 *          main function p will free the memory that has been freed inside
////	 * process ().
////	 *          That's why "double freed or corruption" was generated.
////	 */
////	//try {
////	//	process(std::shared_ptr<int>(p.get()));
////	//	std::cout << *p << std::endl;
////	//}
////	//catch (std::exception x)
////	//{
////	//	cout << x.what() << endl;
////	//}
////	//try {
////	//	throw exception("fuck you bitch");
////	//}
////	//catch (exception x)
////	//{
////	//	cout << x.what() << endl;
////	//}
////
////	system("pause");
////	return 0;
////}



#include<iostream>
#include<memory>
using namespace std;
int main()
{
	
	//shared_ptr <int> p = make_shared<int>(5);
	//int *q = p.get();
	//int *p1 = new int(3);
	////delete p1;
	//int a = 10;
	//int *p2 = p1;
	//delete p2;
	
	unique_ptr <int>p = make_unique<int>(100);


	shared_ptr<int>q(p);

	cout << *p << endl;
	system("pause");
	return 0;
}
