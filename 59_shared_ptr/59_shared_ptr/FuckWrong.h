#pragma once
#include<vector>
#include<memory>
#include<string>
#include<initializer_list>
#include<iostream>
#include <exception>
using namespace std;
class StrBlob
{
public:
	using size_type = vector<string>::size_type;

	StrBlob();
	StrBlob(initializer_list<string> l);
	//StrBlob() : data(std::make_shared<vector<string>>()) {}
	//StrBlob(initializer_list<string>l) : data(make_shared<vector<string>>(l)) {}
	void push_back(const string &s);
	void pop_back();
	string & front();
	string & back();
	void show();
	bool empty() const { return data->empty(); };


private:
	shared_ptr <vector<string>> data;
	void check(size_type i, const string &msg);

};

StrBlob::StrBlob() : data(std::make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string>l) : data(make_shared<vector<string>>(l)) {}

void StrBlob::push_back(const string & s)
{
	data->push_back(s);
}

void StrBlob::pop_back()
{
	data->pop_back();
}

void StrBlob::check(size_type i, const string & msg)
{
	if (i >= data->size())
		throw out_of_range(msg);
	return;
}

string &StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string &StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}


void StrBlob::show()
{
	for (auto a : *data)
	{
		cout << a << "  ";
	}
	return;
}
