/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:45:43 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 02:06:15 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) { }

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weapon->getType()
        << std::endl;
}
