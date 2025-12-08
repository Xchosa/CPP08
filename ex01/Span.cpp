/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:38 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/08 18:24:36 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <exception>

#include "Span.hpp"

Span::Span(unsigned int Number) : _N(Number)
{

}
Span::~Span()
{
	// automatically cleans up
}


void Span::addNumber(unsigned int randNumber)
{
	if( _Numbers.size() > _N)
		throw std::out_of_range("no more space left");
	
	_Numbers.insert(_Numbers.begin(), randNumber);
}

unsigned int Span::shortestSpan()
{
	if(_Numbers.empty())
		throw std::empty("no values saved");
	if(_Numbers.size() == 1)
		throw std::empty("No Span found");
	
	for()
		
}
unsigned int Span::longestSpan()
{
	
}
	

