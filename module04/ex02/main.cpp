/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <rgiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:28:51 by rgiraud           #+#    #+#             */
/*   Updated: 2024/04/12 15:16:05 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "========= PART 1 =========" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	{
		std::cout << "\n\n========= PART 2 =========" << std::endl;
		int n_animal= 4;
		Animal *animals[n_animal];
		for (int i = 0; i < (n_animal / 2); i++)
		{
			animals[i] = new Dog();
		}
		for (int i = (n_animal / 2); i < n_animal; i++)
		{
			animals[i] = new Cat();
		}

		//  polymorphisme
		for (int i = 0; i < n_animal; i++) {
			std::cout << "Animal #" << i << " is a " << animals[i]->getType() << "\n";
			animals[i]->makeSound();
		}


		for (int i = 0; i < n_animal; i++)
		{
			delete animals[i];
		}
	}

	{
		std::cout << "\n\n========= PART 3 =========" << std::endl;
		// 1- create dog
		// 2- change idea of copy dog
		// 3- kill the copy
		// 4- check if the original was affected
		Dog basic;
		std::cout << basic.getBrain().getIdea(0) << std::endl;
		{
			Dog tmp = basic; 
			tmp.getBrain().changeIdea(0, "New idea for tmp");
			std::cout << "test" << tmp.getBrain().getIdea(0) << std::endl;

		}
		std::cout << basic.getBrain().getIdea(0) << std::endl;
		std::string basicIdea = basic.getBrain().getIdea(0);
		if (basicIdea == "New idea for tmp") {
			std::cout << "Shallow copy detected" << std::endl;
		} else {
			std::cout << "Deep copy confirmed" << std::endl;
		}

	}

	// test de la creation d'une instance de la classe Animal
	//{
	//	Animal animalFail;	
	//}
}
