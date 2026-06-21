/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:45:41 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 02:05:52 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon      *_weapon;
public:
    void attack();
    void setWeapon(Weapon &weapon);
    HumanB(std::string name);
};

#endif
