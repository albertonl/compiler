/*
	Statement structure
	The ALB Programming Language
	Alberto Navalon Lillo (C) 2019

	This software is distributed under the MIT license
	Visit https://github.com/albertonl/alb/LICENSE for further details
*/

#ifndef ALB_STATEMENT_HPP
#define ALB_STATEMENT_HPP

#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

namespace alb_statement{

	struct Statement{
		string st; // Literal statement
		int level; // Informally, the number of tabs by which the statement is preceded
		int type; // Type of statement (or if it is a reserved keyword)

		Statement(string,int,int); // Constructor
	};

	Statement::Statement(string st_, int level_, int type_){
		st=st_;
		level=level_;
		type=type_;
	}
} // alb_statement

#endif // ALB_STATEMENT_HPP
