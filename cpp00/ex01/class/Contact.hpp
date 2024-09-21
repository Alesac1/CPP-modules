#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
    std::string  first_name;
    std::string  last_name;
    std::string  phone_number;
    std::string  nickname;
    std::string  drk_secret;

    public:

    std::string GetFirstName(void);
    void    SetFirstName(std::string str);
	std::string GetLastName(void);
    void    SetLastName(std::string str);
	std::string GetPhoneNumber(void);
    void    SetPhoneNumber(std::string str);
	std::string GetNickname(void);
    void    SetNickname(std::string str);
	std::string GetDrkSecret(void);
    void    SetDrkSecret(std::string str);
};

#endif