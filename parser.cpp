#include "parser.h"
#include "lex.h"
#include "token.h"

Parser::Parser(Token &token):
	tok(token) { }

int Parser::parse() {
	eval();
	return 0;
}

int Parser::eval() {
	while(tok.pos < tok.tok.size()) 
		expression();

	return 0;
}

int Parser::expression() {
	if(tok.get().val == "puts") {
	}

	return 0;
}
