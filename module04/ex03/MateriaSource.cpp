/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <rgiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:46:08 by rgiraud           #+#    #+#             */
/*   Updated: 2024/04/16 12:02:21 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <cstring>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++){
		_materias[i] = nullptr;
	}
	std::cout << "(MateriaSource) Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (int i = 0; i < 4; i++){
		if (src._materias[i])
			this->_materias[i] = src._materias[i];
		else
			this->_materias[i] = nullptr;
	}
	std::cout << "(MateriaSource) Copy Constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete(_materias[i]);
	}
	std::cout << "(MateriaSource) Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++){
		if (rhs._materias[i])
			this->_materias[i] = rhs._materias[i];
		else
			this->_materias[i] = nullptr;
	}
	std::cout << "(MateriaSource) Assignation operator called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m){
	if (m == nullptr) {
            std::cout << "Error: Null materia cannot be learned." << std::endl;
            return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr){
			std::cout << "(MateriaSource) " << m->getType() << " Successfully Learned !" << std::endl;
			_materias[i] = m->clone();
			return ;
		}
	}
	std::cout << "Error: Materia source is full, cannot learn more materias." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != nullptr && _materias[i]->getType() == type){
			return (_materias[i]->clone());
		}
	}
	return (nullptr);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */