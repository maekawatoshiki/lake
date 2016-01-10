#ifndef _PARSER_LAKE_
#define _PARSER_LAKE_

#include "common.h"
#include "token.h"

class Parser {
public:
	Token &tok;

	Parser(Token &);

	int parse();
	int eval();
	int expression();
};

#endif 
