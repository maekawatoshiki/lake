#ifndef _OBJECT_LAKE_
#define _OBJECT_LAKE_

#include "common.h"

struct object_t {
	int num;
	std::string str;
	std::vector<object_t> obj;
};

class Object {
public:
	object_t obj;

	void set(int);
	void set(std::string);
};

#endif
