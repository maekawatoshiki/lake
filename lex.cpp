#include "lex.h"
#include "token.h"

Lexer::Lexer(Token &t):
	tok(t) { }

bool Lexer::lexer(std::string code) {
	int line = 1;

	for(int i = 0; i < code.size(); i++) {
		if(isdigit(code[i])) { // number
			std::string number;
			for(; isdigit(code[i]) || code[i] == '.'; i++) 
				number += code[i];
			i--;
			token_t t = {
				.val = number,
				.line = line,
				.type = ::TT_NUMBER
			};
			tok.tok.push_back(t);
		} else if(isalpha(code[i])) { // ident
			std::string ident;
			for(; isalpha(code[i]); i++) 
				ident += code[i];
			i--;
			token_t t = {
				.val = ident,
				.line = line,
				.type = ::TT_IDENT
			};
			tok.tok.push_back(t);
		} else if(code[i] == '\n' || code[i] == ';') {
			token_t t = {
				.val = ";",
				.line = line++,
				.type = ::TT_SYMBOL
			};
			tok.tok.push_back(t);
		} else if(code[i] == ' ' || code[i] == '\t') {
		} else {
			std::string symbol;
			symbol += code[i];
			token_t t = {
				.val = symbol,
				.line = line,
				.type = ::TT_SYMBOL
			};
			tok.tok.push_back(t);
		}
	}

	for(int i = 0; i < tok.tok.size(); i++) {
		std::cout << "L: " << tok.tok[i].line << " " << tok.tok[i].val << std::endl;
	}

	return true;
}

