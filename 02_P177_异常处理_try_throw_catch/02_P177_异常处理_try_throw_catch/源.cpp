//try和catch配套，throw抛出异常，终止当前行数，由catch抓住，由catch执行异常处理。
#include<iostream>
#include<stdexcept>
using namespace std;
/*int main()    5.24
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
		throw std::runtime_error("divisor can't be zero.");
	cout << static_cast<double>(a) / b << endl;
	system("pause");
	return 0;
}*/
int main()
{
	int a, b;
	cout << "input two integers" << endl;
	while (cin >> a >> b)
	{
		try 
		{
			if (b == 0)
				throw std::runtime_error("divisor can't be zero.");
			cout << static_cast<double>(a) / b << endl;//原先把这句话放在catch语句后，运行时，除数为0时
			cout << "input two integers" << endl;      //输出了inf(无穷大），即，catch抓住异常并执行完
                                                       //继续执行语句块之后的句子，除数为0的运算还是进行了
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
			cout << "try again?Enter y or n" << endl;
			char c;
			cin >> c;
			if(c=='y')
				cout << "input two integers" << endl;
			if (c == 'n')
				break;
		}
	}
	system("pause");
	return 0;
}