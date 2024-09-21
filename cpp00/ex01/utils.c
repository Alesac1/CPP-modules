#include "class/phonebook.hpp"

void   tenprint(std::string str, char extra_char)
{
	int len = str.length();

	std::cout << std::setw(10);
	if (len > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	std::cout << str << extra_char;
}