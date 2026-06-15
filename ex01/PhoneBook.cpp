/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 01:28:20 by wini              #+#    #+#             */
/*   Updated: 2026/06/15 03:52:03 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _count(0) {}

void PhoneBook::addContact(void)
{
    std::string prompts[5] = {"First name: ", "Last name: ", "Nickname: ", "Number: ", "Secret: "};
    std::string fields[5];
    int         i;

    i = 0;
    while (i < 5)
    {
        std::cout << prompts[i];
        if (!std::getline(std::cin, fields[i++]))
            break ;
    }
    int idx = _count % MAX_CONTACTS;
    _contacts[idx].setFirstName(fields[0]);
    _contacts[idx].setLastName(fields[1]);
    _contacts[idx].setNickname(fields[2]);
    _contacts[idx].setNumber(fields[3]);
    _contacts[idx].setSecret(fields[4]);
    _count++;
    std::cout << "\nContact added successfully." << std::endl;
}

void PhoneBook::displayList(void) const
{
    int idx;

    idx = 0;
    std::cout << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << std::endl;
    while (idx < _count && idx < MAX_CONTACTS)
    {
        std::cout << std::setw(10) << idx << "|";
        std::cout << std::setw(10) << ft_truncate(_contacts[idx].getFirstName()) << "|";
        std::cout << std::setw(10) << ft_truncate(_contacts[idx].getLastName()) << "|";
        std::cout << std::setw(10) << ft_truncate(_contacts[idx].getNickname()) << std::endl;
        idx++;
    }
}

void PhoneBook::displayContact(int idx) const
{
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "First name: " << _contacts[idx].getFirstName() << std::endl;
    std::cout << "Last name:  " << _contacts[idx].getLastName() << std::endl;
    std::cout << "Number:     " << _contacts[idx].getNumber() << std::endl;
    std::cout << "Secret:     " << _contacts[idx].getSecret() << std::endl;
    std::cout << "---------------------------------------" << std::endl;
}

void PhoneBook::searchContact(void) const
{
    int         idx;
    std::string input;

    displayList();
    if (_count == 0)
        return;
    std::cout << "\nIndex: ";
    std::getline(std::cin, input);
    idx = std::atoi(input.c_str());
    if (idx < 0 || idx >= _count || idx >= MAX_CONTACTS)
    {
        std::cout << "\nInvalid index." << std::endl;
        return ;
    }
    displayContact(idx);
}
