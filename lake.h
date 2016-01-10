#ifndef _LAKE_
#define _LAKE_

#include "common.h"
#include "lex.h"
#include "token.h"

class Lake {
public:
	Token token;
	Lexer lexer;

	Lake();
	int run(std::string);
};

#endif 
