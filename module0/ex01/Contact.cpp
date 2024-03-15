/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <rgiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:47:04 by rgiraud           #+#    #+#             */
/*   Updated: 2024/03/15 15:02:20 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string secret) : _firstName(firstName), _lastName(lastName), _nickname(nickname), _phoneNumber(phoneNumber), _secret(secret)
{
	//std::cout << "Constructor Contact called !" << std::endl;
	return ;
}

Contact::Contact() : _firstName(""), _lastName(""), _phoneNumber(""), _secret("")
{
	//std::cout << "Constructor Contact called !" << std::endl;
	return ;
}

Contact::~Contact( void )
{
	//std::cout << "Destructor Contact called !" << std::endl;
	return ;
}

// getter, setter	
std::string Contact::getFirstName( void ) const{
	return (this->_firstName);
}

void Contact::setFirstName(std::string firstName){
	this->_firstName = firstName;
}

std::string Contact::getLastName( void ) const{
	return (this->_lastName);
}

void Contact::setLastName(std::string lastName){
	this->_lastName = lastName;
}

std::string Contact::getPhoneNumber( void ) const{
	return (this->_phoneNumber);
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->_phoneNumber = phoneNumber;
}

std::string Contact::getSecret( void ) const{
	return (this->_secret);
}

void Contact::setSecret(std::string secret){
	this->_secret = secret;
}
	
std::string Contact::getNickname( void ) const{
	return (this->_nickname);
}

void Contact::setNickName(std::string nickname){
	this->_nickname = nickname;
}