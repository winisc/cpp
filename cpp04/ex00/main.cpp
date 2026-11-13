/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:16:23 by wini              #+#    #+#             */
/*   Updated: 2026/11/12 10:16:23 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "===== teste do subject =====" << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();		// som do gato
	j->makeSound();		// som do cachorro
	meta->makeSound();	// som do Animal

	delete meta;
	delete j;
	delete i;

	std::cout << "\n===== Wrong: sem virtual =====" << std::endl;
	const WrongAnimal	*wrong = new WrongCat();
	const WrongCat		*wc = new WrongCat();

	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();	// som do WrongAnimal! (makeSound nao e virtual)
	wc->makeSound();	// som do WrongCat (chamado pelo tipo real)

	delete wrong;
	delete wc;

	std::cout << "\n===== copias =====" << std::endl;
	Dog	d1;
	Dog	d2(d1);
	Cat	c1;
	Cat	c2;
	c2 = c1;
	d2.makeSound();
	c2.makeSound();

	std::cout << "\n===== fim =====" << std::endl;
	return (0);
}
