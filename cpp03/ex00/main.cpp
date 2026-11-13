/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:14:50 by wini              #+#    #+#             */
/*   Updated: 2026/11/12 10:14:50 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Clappy");
	ClapTrap	b(a);

	std::cout << "\n--- ataque e reparo ---" << std::endl;
	a.attack("um inimigo");
	a.takeDamage(3);
	a.beRepaired(2);

	std::cout << "\n--- gastando toda a energia ---" << std::endl;
	for (int i = 0; i < 10; i++)
		b.attack("um alvo");

	std::cout << "\n--- morrendo ---" << std::endl;
	a.takeDamage(100);
	a.attack("alguem");
	a.beRepaired(5);
	a.takeDamage(1);

	std::cout << std::endl;
	return (0);
}
