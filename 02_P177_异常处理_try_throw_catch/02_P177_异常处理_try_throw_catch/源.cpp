//try��catch���ף�throw�׳��쳣����ֹ��ǰ��������catchץס����catchִ���쳣����
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
			cout << static_cast<double>(a) / b << endl;//ԭ�Ȱ���仰����catch��������ʱ������Ϊ0ʱ
			cout << "input two integers" << endl;      //�����inf(����󣩣�����catchץס�쳣��ִ����
                                                       //����ִ������֮��ľ��ӣ�����Ϊ0�����㻹�ǽ�����
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