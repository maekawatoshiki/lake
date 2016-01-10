#ifndef _TOKEN_LAKE_
#define _TOKEN_LAKE_

#include "common.h"

enum {
	TT_SYMBOL,
	TT_NUMBER,
	TT_STRING,
	TT_IDENT,
	TT_END
};

struct token_t {
	std::string val;
	int line, type;
};

class Token {
public:
	int pos;
	std::vector<token_t> tok;

	token_t get();
	token_t next();
};

#endif
