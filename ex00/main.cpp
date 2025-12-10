/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:46 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/10 15:53:04 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"



int main()
{
	std::vector<int> container = { 10, 30, 32, 5, -4 , 100};

	int needle = 5;
	std::cout << "did u find the needle? " << *easyfind(container, needle) << std::endl;

	std::vector<int> const constContainer = { 10, 30, 32, 5, -4 , 100};
	
	int constNeedle = 10;
	std::cout << "did u find the needle in a const container? " << *easyfind(constContainer, constNeedle) << std::endl;

    
    
    return 0;
}