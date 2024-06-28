/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <rgiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:56:00 by rgiraud           #+#    #+#             */
/*   Updated: 2024/06/28 23:00:52 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, const size_t lenght, void (*function)(T &)){
	for (size_t i = 0; i < lenght; i++)
	{
		function(array[i]);
	}
}

template <typename T>
void display(T &a){
	std::cout << a << " ";
}


#endif /* ******************************************************* ITER_H */