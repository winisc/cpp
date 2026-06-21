/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:45:35 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 01:59:36 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { }

const std::string &Weapon::getType(void) const
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
