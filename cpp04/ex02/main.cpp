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

int main(void)
{
	// AAnimal	a;	// NAO compila: AAnimal e abstrata (makeSound = 0)

	std::cout << "===== polimorfismo continua funcionando =====" << std::endl;
	const AAnimal	*j = new Dog();
	const AAnimal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	std::cout << "\n===== array de AAnimals =====" << std::endl;
	const int	size = 4;
	AAnimal		*animals[size];

	for (int k = 0; k < size; k++)
	{
		if (k < size / 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}
	for (int k = 0; k < size; k++)
		animals[k]->makeSound();
	for (int k = 0; k < size; k++)
		delete animals[k];

	std::cout << "\n===== copia profunda =====" << std::endl;
	{
		Dog	a;
		a.getBrain()->setIdea(0, "osso");
		Dog	b(a);
		b.getBrain()->setIdea(0, "bola");
		std::cout << "a: " << a.getBrain()->getIdea(0) << std::endl;
		std::cout << "b: " << b.getBrain()->getIdea(0) << std::endl;
	}

	std::cout << "\n===== fim =====" << std::endl;
	return (0);
}
