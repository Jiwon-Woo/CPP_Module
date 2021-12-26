#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data*	deserialize(uintptr_t raw)
{
	struct Data*	ret;

	ret = reinterpret_cast<struct Data *>(raw);
	return ret;
}