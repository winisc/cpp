/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:45:48 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 02:08:24 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), 
    _weapon(weapon) { }

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() 
        << std::endl;
}
