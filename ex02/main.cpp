/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:46 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/09 17:47:50 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


//int main()
//{
//    MutantStack<int>    mstack;

//    // MutantStack <
    
//    mstack.push(5);
//    mstack.push(17);
//    std::cout << mstack.top() << std::endl;
//    //mstack.pop();
//    std::cout << mstack.size() << std::endl;
//    mstack.push(3);
//    mstack.push(5);
//    mstack.push(737);
//    mstack.push(0);
//    //mstack.pop()
//    MutantStack<int>::iterator it = mstack.begin();
//    MutantStack<int>::iterator ite = mstack.end();
    
//    std::cout << "iterate Stack: " << std::endl;
//    while(it != ite)
//    {
//        std::cout << '['<< *it << "], ";
//        ++it;
//    }
//    std::cout << std::endl;
//    it = mstack.begin();
//    ite = mstack.end();
    
//    ++it;
//    --it;
//    std::cout << "show first element: " << mstack.top() << std::endl;
//    mstack.pop();
//    std::cout << "show new first element: " << mstack.top() << std::endl;
    
//    std::cout << "iterate Stack: " << std::endl;
//    while(it != ite)
//    {
//        std::cout << '['<< *it << "], ";
//        ++it;
//    }
//    std::cout << std::endl;



//    //push()can becomepush_back()
//    return 0;
//}

// for Stack 
/*
s.push(value);           // Add element to top
s.pop();                 // Remove top element
s.top();                 // Access top element
s.size();                // Get number of elements
s.empty();               // Check if empty*/


// Test 2: std::list (same operations)
int main()
{
    std::cout << "\n=== std::list ===" << std::endl;
    {
        std::list<int> mstack;
        
        mstack.push_back(5); 
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl; 
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);

        std::cout << "show oldest element: " << mstack.front() << std::endl;
        std::cout << "show latest element: " << mstack.back() << std::endl;
        
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        std::cout << "iterate Stack: " << std::endl;
        while(it != ite)
        {
            std::cout << '['<< *it << "], ";
            ++it;
        }
        std::cout << std::endl;
        std::list<int> copy_stack;
        copy_stack = mstack;
        std::list<int>::iterator c_it = copy_stack.begin();
        std::list<int>::iterator c_ite = copy_stack.end();
        std::cout << "iterate Copy_Stack: " << std::endl;
        while(c_it != c_ite)
        {
            std::cout << '['<< *it << "], ";
            ++c_it;
        }
    }
}

