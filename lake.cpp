#include "lake.h"
#include "token.h"
#include "lex.h"

Lake::Lake():
	lexer(token) { }

int Lake::run(std::string code) {
	lexer.lexer(code);

	return 0;
}
