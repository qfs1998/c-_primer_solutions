#pragma once
#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include<map>	
#include<set>
#include<fstream>
#include<sstream>
#include"QueryResult.h"
using namespace std;
class TextQuery
{
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream & infile);
	QueryResult query(const  string &word) const;

private:
	//shared_ptr<vector<string>> file;
	shared_ptr < vector<string> >file;
	//a map of a word (string) to its all line_no in a file (set)
	 map<string, shared_ptr<set<line_no>>>wm;
};
TextQuery::TextQuery(ifstream & infile):file(new vector<string>())
{
	string s;
	while (getline(infile,s))
	{
		file->push_back(s);
		int n = file->size() - 1;
		istringstream ll(s);
		string word;
		while (ll >> word)
		{
			auto &lines = wm[word];
			if (!lines)
			{
				lines.reset(new set<line_no>());
			}

			lines->insert(n);
		}
		
	}
}



QueryResult TextQuery::query(const  string &word) const
{
	//static shared_ptr<set<line_no>> nodata(new set<line_no>());
	static shared_ptr<set<TextQuery::line_no>> nodata(new set<line_no>);
	auto loc = wm.find(word);
	if (loc == wm.end())
		return QueryResult(word, nodata, file);
	else
		return QueryResult(word, loc->second, file);
}

//QueryResult TextQuery::query(const string& str) const
//{
//	// use static just allocate once.
//	static shared_ptr<std::set<line_no>> nodate(new std::set<line_no>);
//	auto found = wm.find(str);
//	if (found == wm.end())
//		return QueryResult(str, nodate, file);
//	else
//		return QueryResult(str, found->second, file);
//}