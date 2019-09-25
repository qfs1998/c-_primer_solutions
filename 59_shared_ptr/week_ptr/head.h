#pragma once
#include<memory>
#include<iostream>
using namespace std;
class A;
class B;
using  A_shared= shared_ptr<A>;
using  B_shared=shared_ptr < B>;
using A_weak = weak_ptr<A>;
using B_weak = weak_ptr<B>;
class A
{
public:
	B_shared b;
	//B_weak b;
};
class B
{
public:
	A_shared a;
	//A_weak a;
};