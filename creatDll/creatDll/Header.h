#include<iostream>
using namespace std;

namespace haha {
	static void myprint()
	{
		cout << "fuck you bitch" << endl;
	}


	_declspec(dllexport) void fuck();
}

extern "C" _declspec(dllexport) void mygod();