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
	std::cout << "===== teste do subject =====" << std::endl;
	{
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		delete j;	// nao deve vazar memoria
		delete i;
	}

	std::cout << "\n===== array de Animals (metade Dog, metade Cat) =====" << std::endl;
	{
		const int	size = 4;
		Animal		*animals[size];

		for (int k = 0; k < size; k++)
		{
			if (k < size / 2)
				animals[k] = new Dog();
			else
				animals[k] = new Cat();
		}
		std::cout << std::endl;
		for (int k = 0; k < size; k++)
			animals[k]->makeSound();
		std::cout << std::endl;
		for (int k = 0; k < size; k++)
			delete animals[k];	// deletados COMO Animal
	}

	std::cout << "\n===== copia profunda (Dog) =====" << std::endl;
	{
		Dog	a;
		a.getBrain()->setIdea(0, "quero um osso");

		Dog	b(a);		// construtor de copia
		b.getBrain()->setIdea(0, "quero passear");

		std::cout << "a: " << a.getBrain()->getIdea(0)
			<< " | brain em " << a.getBrain() << std::endl;
		std::cout << "b: " << b.getBrain()->getIdea(0)
			<< " | brain em " << b.getBrain() << std::endl;
	}

	std::cout << "\n===== copia profunda (Cat, operator=) =====" << std::endl;
	{
		Cat	a;
		Cat	b;
		a.getBrain()->setIdea(0, "quero peixe");
		b = a;			// operador de atribuicao
		a.getBrain()->setIdea(0, "quero dormir");

		std::cout << "a: " << a.getBrain()->getIdea(0)
			<< " | brain em " << a.getBrain() << std::endl;
		std::cout << "b: " << b.getBrain()->getIdea(0)
			<< " | brain em " << b.getBrain() << std::endl;
	}

	std::cout << "\n===== fim =====" << std::endl;
	return (0);
}
