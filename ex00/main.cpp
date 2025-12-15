/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:46 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/15 15:06:16 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"



int main()
{
	section("vector container");
	std::vector<int> container = { 10, 30, 32, 5, -4 , 100};
	
	try
	{
		int needle = 5;
		std::cout << "did u find the needle? " << *easyfind(container, needle) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	section("const container");
	std::vector<int> const constContainer = { 10, 30, 32, 5, -4 , 100};
	try
	{
		int constNeedle = 2;
		std::cout << "did u find the needle in a const container? " << *easyfind(constContainer, constNeedle) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    
    return 0;
}