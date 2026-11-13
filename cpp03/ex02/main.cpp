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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "--- construcao ---" << std::endl;
	FragTrap	f("Fraggy");
	ScavTrap	s("Scavvy");

	std::cout << "\n--- acoes do FragTrap ---" << std::endl;
	f.attack("um inimigo");
	f.takeDamage(50);
	f.beRepaired(20);
	f.highFivesGuys();

	std::cout << "\n--- acoes do ScavTrap ---" << std::endl;
	s.attack("um inimigo");
	s.guardGate();

	std::cout << "\n--- copia ---" << std::endl;
	FragTrap	copy(f);
	copy.highFivesGuys();

	std::cout << "\n--- destruicao (ordem inversa) ---" << std::endl;
	return (0);
}
