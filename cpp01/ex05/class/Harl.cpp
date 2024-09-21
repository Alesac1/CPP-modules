#include "./Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(const std::string& level) {
	if (level == "DEBUG")
		debug();
	else if (level == "INFO")
		info();
	else if (level == "WARNING")
		warning();
	else if (level == "ERROR")
		error();
}

void	Harl::debug() {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup "
		"burger.\nI really do!\n" << std::endl;
}
void	Harl::info() {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put "
		"enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for "
		"years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}