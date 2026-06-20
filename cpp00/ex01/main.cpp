/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 03:50:46 by wini              #+#    #+#             */
/*   Updated: 2026/06/19 11:16:21 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int process_program(std::string input, PhoneBook &book)
{
    if (input == "ADD")
        book.addContact();
    else if (input == "SEARCH")
        book.searchContact();
    else if (input == "EXIT")
        return EXIT;
    else
        std::cout << "\nError: Command not found." << std::endl;
    return CONTINUE;
}

int main(void)
{
    std::string input;
    PhoneBook book;

    start_header();
    while (true)
    {
        std::cout << "\nCommand: ";
        if (!std::getline(std::cin, input))
            break ;
        if (process_program(input, book) == EXIT)
            break;
    }
    return (0);
}
