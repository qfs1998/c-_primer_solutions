#include<iostream>
using namespace std;
int main()
{
	//cout << "Ping 192.168.10.30 with 32 bytes of data:" << endl;
	//cout << endl << endl << endl;
	//cout << "Request timed out." << endl;
	//cout << "Request timed out." << endl;
	//cout << "Request timed out." << endl;
	//cout << "Request timed out." << endl;
	cout << "Ping 192.168.10.30 with 32 bytes of data:" << endl;
	//cout << endl << endl << endl;
	cout << endl;
	cout << "Reply form 192.168.10.30: bytes=32 time=2ms TTL=61" << endl;
	cout << "Reply form 192.168.10.30: bytes=32 time<1ms TTL=61" << endl;
	cout << "Reply form 192.168.10.30: bytes=32 time<1ms TTL=61" << endl;
	cout << "Reply form 192.168.10.30: bytes=32 time<1ms TTL=61" << endl;
	system("pause");
	return 0;
}