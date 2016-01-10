#include "token.h"

token_t Token::get() {
	return tok[pos];
}

token_t Token::next() {
	return tok[pos++];
}
