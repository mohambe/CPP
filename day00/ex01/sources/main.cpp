/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:37:35 by msambo            #+#    #+#             */
/*   Updated: 2019/06/05 13:37:38 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Person.class.hpp"

int main()
{
    Contact contactlist;
    std:: string option;
    std:: string userInput;

    int work = 1;
    
    

    while( work == 1 )
    {
    std::cout << "Select one of the following option\n";
    std::cout << "ADD\n";
    std::cout << "SEARCH\n";
    std::cout << "EXIT\n";
    std::getline(std::cin, option);

        if ( option.compare("EXIT") == 0)
        {
             work = 0;
        }
        else if (option.compare("ADD") == 0)
        {
            //make new function to check space
            //Create function that add value to the setters
            contactlist.Add_new_thing(userInput);
            continue ;
        }
        else if (option.compare("SEARCH") == 0)
        {
            contactlist.search();
        }
    }
    return 0;
}
