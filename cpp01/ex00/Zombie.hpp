/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 03:53:39 by wini              #+#    #+#             */
/*   Updated: 2026/06/20 16:12:56 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


class Zombie {
private:
    std::string _name;
public:
    Zombie( std::string name );
    ~Zombie( void );
    void announce( void );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
