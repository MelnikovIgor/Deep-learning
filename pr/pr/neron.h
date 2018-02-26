#pragma once
#include "windows.h"
#include <iostream>

class CNeron;

class CFunction
{	
public:
	func_type function;
	func_type derivation;
};

class CConnection
{
public:
	CNeron * out_;
};

class CNeron
{
public:
	vector<CConnection*>
	double input_;
	double output_;

	CFunction* activation_function_;
};