#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    std::string	type;

public:
	WrongAnimal();
	WrongAnimal(std::string value);
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);

	void	makesound() const;
	std::string	getType() const;
};

#endif