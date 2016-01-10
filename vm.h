#ifndef _VM_LAKE_
#define _VM_LAKE_

#include "common.h"
#include "object.h"

enum {
	VM_NOP,
	VM_PUSH,
	VM_POP,
	VM_CALL,
	VM_ENTRY,
	VM_ADD,
	VM_SUB,
	VM_MUL,
	VM_DIV
};

enum {
	OP_JMP,
	OP_OBJECT
};

struct op_t {
	int op;
	Object arg;
};

class VM {
public:
	std::vector<op_t> op_list;
	std::stack<Object> mem;

	VM();

	void gen_push(Object);
	void gen_push(int);
	void gen_push(std::string);
	void gen_add();
	void gen_sub();
	void gen_mul();
	void gen_div();

	void run();
};

#endif 
