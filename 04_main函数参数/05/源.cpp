#include<iostream>
using namespace std;
//agrc means argument count
//agrv means argument vector
//agrv为指向数组的数组，第一数组中存exe路径
//运行cmd，直接将exe拖入cmd窗口
int main(int argc,char**argv)
{
	for (int i = 0; i < argc; ++i)
		cout << argv[i] << endl;

	system("pause");
	return 0;
}