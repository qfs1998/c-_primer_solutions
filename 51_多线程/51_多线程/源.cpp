/*
*/
#include<iostream>
#include<thread>
using namespace std;
void sayhi()
{
	for(int i=0;i<100;++i)
		cout << "hihihihihihihihihihi" << endl;
	return;
}
int main()
{
	thread t(sayhi);
	/*t.detach();*/
	for (int i = 0; i < 10; ++i)
		cout << "hello" << endl;
	/*for (int i = 1; i < 100; ++i)
		cout <<"hello"<< endl;*/
	t.join();

	return 0;
}