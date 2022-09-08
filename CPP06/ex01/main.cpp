#include <iostream>
#include <string>

struct Data
{
	std::string _data;
};

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


int main(void)
{
	Data		*data;
	uintptr_t	serialized;
	Data		*deserialized;

	data = new Data();
    data->_data = "One Piece red sucks";

	std::cout << "data ptr = " << data << std::endl;
	std::cout << "contains  = " << data->_data << std::endl;

	serialized = serialize(data);
	std::cout << "serialize(data ptr) = " << serialized << std::endl;

	deserialized = deserialize(serialized);
	std::cout << "deserialize(serialize(data ptr)) = " << deserialized << std::endl;
	std::cout << "contains = " << deserialized->_data << std::endl;

	delete data;
	system("leaks Serialization");
	return (0);
}