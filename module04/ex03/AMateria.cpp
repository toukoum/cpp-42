/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <rgiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:29:24 by rgiraud           #+#    #+#             */
/*   Updated: 2024/04/15 19:30:45 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type("bar"){
	std::cout << "(AMateria) Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){
	std::cout << "(AMateria) Parameters Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) : _type(src._type){
	std::cout << "(AMateria) Copy Constructor called" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "(AMateria) Destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const &rhs){
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

std::string const & AMateria::getType() const{
	return (_type);
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}