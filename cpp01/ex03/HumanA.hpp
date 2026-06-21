/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:45:36 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 02:05:07 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
private:
    std::string _name;
    Weapon      &_weapon;
public:
    void attack();
    HumanA(std::string name, Weapon &weapon);
};

#endif
