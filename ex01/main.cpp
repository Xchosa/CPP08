/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:46 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/10 15:15:15 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"



//int main()
//{
//    Span sp = Span(5);
//    sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//	return 0;

//}

int main()
{
    std::cout << "=== Test 1: Wide Range with Large Positive Numbers ===" << std::endl;
    //Span sp2 = Span(4);
    Span sp2 = Span(10);
    sp2.addNumber(100);
    sp2.addNumber(50000);
    sp2.addNumber(303340);
    sp2.addNumber(150000);
    sp2.addNumber(200000);
    sp2.addNumber(75000);
    sp2.addNumber(250000);
    sp2.addNumber(125000);
    sp2.addNumber(180000);
    sp2.addNumber(90000);
    std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "=== Test 2: Test with 20 000 numbers  ===" << std::endl;
    Span sp3 = Span(20000);
    std::vector< long long >numberContainer;
    for(int i = 0; i < 20000; i++)
    {
        numberContainer.push_back((-1) * i *3);
    }
    sp3.addNumber(numberContainer.begin(), numberContainer.end());
    std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp3.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "=== Test 3: Extreme Range Mix ===" << std::endl;
    Span sp4 = Span(10);
    sp4.addNumber(-19923);
    sp4.addNumber(-10000);
    sp4.addNumber(-1000);
    sp4.addNumber(-100);
    sp4.addNumber(0);
    sp4.addNumber(1000);
    sp4.addNumber(50000);
    sp4.addNumber(150000);
    sp4.addNumber(250000);
    sp4.addNumber(303340);
    std::cout << "Shortest Span: " << sp4.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp4.longestSpan() << std::endl;
    std::cout << std::endl;
	
	std::cout << "Copy assignment operator" << std::endl;
	Span sp5 = sp4;
	std::cout << "Shortest Span: " << sp4.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp4.longestSpan() << std::endl;
	
	
    return 0;

}