//
//  ex12_27_TEST.cpp
//  Exercise 12.27
//
//  Created by pezy on 12/31/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  The TextQuery and QueryResult classes use only capabilities that we have
//  already covered.
//  Without looking ahead, write your own versions of these classes.

#include "others.h"
#include <iostream>
using namespace std;
void runQueries(std::ifstream& infile)
{
	TextQuery tq(infile);
	while (true) {
		std::cout << "enter word to look for, or q to quit: ";
		string s;
		if (!(std::cin >> s) || s == "q") break;
		print(std::cout, tq.query(s)) << std::endl;
	}
}

int main()
{
	std::ifstream file("../hello.txt");
	//string m;
	//file >> m;
	//cout << m << endl;
	//system("pause");
	runQueries(file);
	return 0;

}
