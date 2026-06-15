/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 03:30:40 by wini              #+#    #+#             */
/*   Updated: 2026/06/15 03:33:55 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string ft_truncate(std::string s)
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

void    start_header()
{
    std::cout << "Welcome to the PhoneBook!" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Instructions: Use ADD, SEARCH OR EXIT" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "ADD: Add a new contact." << std::endl;
    std::cout << "SEARCH: View added contacts." << std::endl;
    std::cout << "EXIT: Quit program." << std::endl;
    std::cout << "---------------------------------------" << std::endl;
}
