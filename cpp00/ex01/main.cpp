/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <asacchin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:35:48 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/21 02:17:30 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/phonebook.hpp"

void    tabHead(void)
{
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

std::string index_to_string(short i)
{
	std::string str;

	str.append(1, (char)(i + 48));
	return str;
}

void searchCommand(PhoneBook *phonebook)
{
    std::string id;
    
    std::cout << YELLOW << "\n\nSelect a ID: " << WHITE;
    std::cin >> id;
    system("clear");
    if (id[0] >= 48 && (id[0] - 48) < 8 && phonebook->contacts[(id[0] - 48)].GetFirstName()[0])
    {
        std::cout << YELLOW << "\n-CONTACT INFO:\n\n" << WHITE << std::endl;
        std::cout << "First Name:     ";
        std::cout << phonebook->contacts[(id[0] - 48)].GetFirstName() << '\n';
        std::cout << "Last Name:      ";
        std::cout << phonebook->contacts[(id[0] - 48)].GetLastName() << '\n';
        std::cout << "Nickname:       ";
        std::cout << phonebook->contacts[(id[0] - 48)].GetNickname() << '\n';
        std::cout << "Phone Number:   ";
        std::cout << phonebook->contacts[(id[0] - 48)].GetPhoneNumber() << '\n';
        std::cout << "Darkest Secret: ";
        std::cout << phonebook->contacts[(id[0] - 48)].GetDrkSecret() << "\n\n\n";
    }
    else
        std::cout << "\nNo contact found with this ID\n\n";
}

void    SearchContact(PhoneBook *phonebook)
{
    int c = 0;
    
    system("clear");
    
    for (int j = 0; j < 8; j++)
    {
        if (!phonebook->contacts[j].GetFirstName()[0])
            continue ;
        if (j == 0)
            tabHead();
        tenprint(index_to_string(j), '|');
        tenprint(phonebook->contacts[j].GetFirstName(), '|');
        tenprint(phonebook->contacts[j].GetLastName(), '|');
        tenprint(phonebook->contacts[j].GetNickname(), '\n');
        c++;
    }
    if (!c)
        std::cout << RED << "No contact found\n\n\n";
    else
        searchCommand(phonebook);
} 

bool	Whitespace(std::string str){
	for(int i = 0; i < str.length(); i++){
		if(!std::isspace(str[i]))
			return false;
	}
	return true;
}

void	AddContact(PhoneBook *phonebook)
{
    Contact new_contact;
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string nickname;
    std::string drk_secret;

    system("clear");
    getline(std::cin, first_name);
    std::cout << MAGENTA << "    > Enter first name: " << WHITE;
    getline(std::cin, first_name);
    std::cout << MAGENTA << "    > Enter last name: " << WHITE;
    getline(std::cin, last_name);
    std::cout << MAGENTA << "    > Enter phone number: " << WHITE;
    getline(std::cin, phone_number);
    std::cout << MAGENTA << "    > Enter nickname: " << WHITE;
    getline(std::cin, nickname);
    std::cout << MAGENTA << "    > Enter darkest secret: " << WHITE;
    getline(std::cin, drk_secret);
	if (Whitespace(first_name) || Whitespace(last_name) || Whitespace(phone_number)
		|| Whitespace(nickname) || Whitespace(drk_secret))
		{
            std::cout << RED << "\n Found empty field\n" << WHITE;
            return ;
        }
    new_contact.SetFirstName(first_name);
    new_contact.SetLastName(last_name);
    new_contact.SetPhoneNumber(phone_number);
    new_contact.SetNickname(nickname);
    new_contact.SetDrkSecret(drk_secret);
        
    phonebook->contacts[phonebook->lst_index++] = new_contact;
    if (phonebook->lst_index == 8)
        phonebook->lst_index = 0;
}

int main(void)
{
    std::string action;
    PhoneBook PhoneBook;

    while (1)
    {
        std::cout << GREEN << "\n    > Enter one command: ADD | SEARCH | EXIT\n\n" ORANGE "> " << WHITE;
        std::cin >> action;
        if (action.compare("EXIT") == 0)
            break ;
        else if (action.compare("ADD") == 0)
            AddContact(&PhoneBook);
        else if (action.compare("SEARCH") == 0)
            SearchContact(&PhoneBook);
    }
    return 0;
}
