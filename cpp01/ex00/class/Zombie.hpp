#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "../Zombie.h"

class Zombie {
	std::string name;

public:

	Zombie(std::string name);
	~Zombie();

	void	announce( void );

};

#endif