/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <rgiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:33:44 by rgiraud           #+#    #+#             */
/*   Updated: 2024/06/20 14:07:22 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("foo"), _grade(150){
	std::cout << "(Bureaucrat) Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	std::cout << "(Bureaucrat) Parameters constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "(Bureaucrat) Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade){
	std::cout << "(Bureaucrat) Copy constructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs){
	std::cout << "(Bureaucrat) Assignation operator called" << std::endl;
	if (this != &rhs){
		this->_grade = rhs._grade;
	}

	return (*this);
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i){
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}


// method
std::string Bureaucrat::getName() const{
	return (this->_name);
}

int Bureaucrat::getGrade() const{
	return (this->_grade);
}


void Bureaucrat::incrementGrade(){
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade(){
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade++;
}