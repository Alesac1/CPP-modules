#ifndef	HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	Harl();
	~Harl();
	void complain(const std::string& level);
};

#endif