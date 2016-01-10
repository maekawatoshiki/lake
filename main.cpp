#include "token.h"
#include "lex.h"
#include "main.h"
#include "lake.h"

int main() {
	Lake lake;

	lake.run("a = 12+1; def func(); puts 1; end");
}
