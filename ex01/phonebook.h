/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 01:47:14 by wini              #+#    #+#             */
/*   Updated: 2026/06/15 03:36:18 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
#include <iomanip>
#include <cstdlib>

# define MAX_CONTACTS 8
# define EXIT 1
# define CONTINUE 0


class Contact {
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _number;
    std::string _secret;
public:
    void        setFirstName(std::string name) { _first_name = name; }
    std::string getFirstName(void) const       { return _first_name; }
    void        setLastName(std::string name)  { _last_name = name; }
    std::string getLastName(void) const        { return _last_name; }
    void        setNickname(std::string name)  { _nickname = name; }
    std::string getNickname(void) const        { return _nickname; }
    void        setNumber(std::string name)    { _number = name; }
    std::string getNumber(void) const          { return _number; }
    void        setSecret(std::string name)    { _secret = name; }
    std::string getSecret(void) const          { return _secret; }
};

class PhoneBook {
private:
    Contact _contacts[MAX_CONTACTS];
    int     _count;
public:
    PhoneBook();
    void addContact(void);
    void searchContact(void) const;
};

std::string ft_truncate(std::string s);
void        start_header();

#endif

