/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <asacchin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:09:26 by asacchin          #+#    #+#             */
/*   Updated: 2024/07/18 13:09:26 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define RED	"\033[91m"
# define WHITE	"\033[0m"
# define ORANGE "\033[38;5;208m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define RL_START "\1"
# define RL_END "\2"

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    public:
    Contact	contacts[8];
    short	lst_index;
};

void   tenprint(std::string str, char extra_char);


#endif