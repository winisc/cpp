/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:45:36 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 01:50:17 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
private:
    std::string _type;
public:
    Weapon(std::string type);
    const std::string &getType(void) const;
    void               setType(std::string type);
};

#endif
