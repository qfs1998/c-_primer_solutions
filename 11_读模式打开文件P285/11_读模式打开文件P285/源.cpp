//#include<iostream>
//#include<string>
//#include<vector>
//#include<fstream>
//using namespace std;
//int main()
//{
//	string filename = "../TEST.txt";
//	string s;
//	ifstream is(filename);
//	cout << is.rdstate() << endl;
//	if (!is)cout << "fail" << endl;
//	else cout << "ok" << endl;
//	vector<string> v;
//	vector<string> v2;
//	while (getline(is,s))
//	{
//		v.push_back(s);
//	}
//	for (auto s : v)
//	{
//		cout << s << endl;
//	}
//	cout << is.rdstate() << endl;
//
//
//
//
//	is.clear();
//	is.seekg(0, ios::beg);
//	//这两句指令要一起，才可以从文件头重新开始读取数据
//	//或者先is.close();is.open(filename);重新打开文件
//
//
//
//	cout << is.rdstate() << endl;
//	cout << "v2" << endl;
//	while (is >> s)
//		v2.push_back(s);
//	for (auto s : v2)
//		cout << s << endl;
//	system("pause");
//	return 0;
//}
