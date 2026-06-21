/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:49:30 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 01:45:26 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main( void )
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "String andress: " << &string << std::endl;
    std::cout << "StringPTR andress: " << stringPTR << std::endl;
    std::cout << "StringREF andress: " << &stringREF << std::endl << std::endl;

    std::cout << "String value: " << string << std::endl;
    std::cout << "StringPTR value: " << *stringPTR << std::endl;
    std::cout << "StringREF value: " << stringREF << std::endl;
    return (0);
}
