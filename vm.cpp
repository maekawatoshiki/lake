#include "vm.h"
#include "token.h"
#include "lex.h"
#include "parser.h"

VM::VM() {}

void VM::gen_push(Object obj) {
	op_t op = {
		.op = VM_PUSH,
		.arg = obj
	};
	op_list.push_back(op);
}

void VM::gen_push(int n) {
	object_t obj = { .num = n };
	op_t op = {
		.op = VM_PUSH,
		.arg = obj
	};
	op_list.push_back(op);
}

void VM::gen_push(std::string s) {
	object_t obj = { .str = s };
	op_t op = {
		.op = VM_PUSH,
		.arg = obj
	};
	op_list.push_back(op);
}

void VM::gen_add() {
	op_t op = { .op = VM_ADD };
	op_list.push_back(op);
}

void VM::gen_sub() {
	op_t op = { .op = VM_SUB };
	op_list.push_back(op);
}

void VM::gen_mul() {
	op_t op = { .op = VM_MUL };
	op_list.push_back(op);
}

void VM::gen_div() {
	op_t op = { .op = VM_DIV };
	op_list.push_back(op);
}
