#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <cstdint>

struct Data
{
	int	value;
};

uintptr_t	serialize(Data* ptr);
Data*	deserialize(uintptr_t raw);

#endif