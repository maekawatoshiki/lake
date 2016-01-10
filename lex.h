#ifndef _LEXER_LAKE_
#define _LEXER_LAKE_

#include "common.h"
#include "token.h"

class Lexer {
public:
	Token &tok;

	Lexer(Token &);
	bool lexer(std::string);
};

#endif 
