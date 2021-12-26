#include "serialization.hpp"
#include <iostream>

int	main()
{
	struct Data	data = { 42 };
	uintptr_t	raw;
	struct Data	*ptr;

	std::cout << "Data struct value : " << data.value << std::endl;
	std::cout << "Data struct ptr   : " << &data << std::endl;
	raw = serialize(&data);
	std::cout << "serialize         : " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "deserialize value : " << ptr->value << std::endl;
	std::cout << "deserialize ptr   : " << ptr << std::endl;
}