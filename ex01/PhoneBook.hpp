/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 03:53:39 by wini              #+#    #+#             */
/*   Updated: 2026/06/15 03:53:40 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

# define MAX_CONTACTS 8
# define EXIT         1
# define CONTINUE     0

class PhoneBook {
private:
    Contact _contacts[MAX_CONTACTS];
    int     _count;
public:
    PhoneBook();
    void addContact(void);
    void searchContact(void) const;
    void displayContact(int idx) const;
    void displayList(void) const;
};

std::string ft_truncate(std::string s);
void        start_header();

#endif
