/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:36:36 by msambo            #+#    #+#             */
/*   Updated: 2019/06/05 13:36:41 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Person.class.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{
//    std::string List[8];
//    std::int contactNo = 0;
ContactSize = 0;
}

Contact::~Contact()
{

}

void Contact::Add_new_thing(std::string holder)
{
    Person newUser;
    std::cout << "add firstname\n";
    std::cin >> holder;
    newUser.setFirstname(holder);

    std::cout << "add Lastname\n";
    std::cin >> holder;
    newUser.setLastname(holder);
    
    std::cout << "add nickname\n";
    std::cin >> holder;
    newUser.setNickname(holder);

    std::cout << "add login\n";
    std::cin >> holder;
    newUser.setLogin(holder);

    std::cout << "add postal address\n";
    std::cin >> holder;
    newUser.setPostalAddress(holder);

    std::cout << "add email address\n";
    std::cin >> holder;
    newUser.setEmail(holder);

    std::cout << "add birthdate\n";
    std::cin >> holder;
    newUser.setBirthdate(holder);

    std::cout << "add Phone Number\n";
    std::cin >> holder;
    newUser.setPhoneNumber(holder);
    
    std::cout << "add favourite meal\n";
    std::cin >> holder;
    newUser.setFavouriteMeal(holder);

    std::cout << "add under wear color please\n";
    std::cin >> holder;
    newUser.setUnderwearColour(holder);

    std::cout << "add darkest secret\n";
    std::cin >> holder;
    newUser.setDarkestSecret(holder);

    addUser(newUser);
}

void Contact:: addUser(Person user)
{
    if (ContactSize < 8)
    {
        contacts[ContactSize] = user;
        ContactSize++;
        std::cout << "User added\n";
    } 
    else
    {
        std::cout << "List of contact is currently full";
    }
    
}
void Contact::contact_details(Person contact){
        std::cout << "First Name            " << contact.getFirstname() << "\n";
        std::cout << "Last Name             " << contact.getLastname() << "\n";
        std::cout << "Nick Name              " << contact.getNickname() << "\n";
        std::cout << "Login                 " << contact.getLogin() << "\n";
        std::cout << "Postal Address        " << contact.getPostalAddress() << "\n";
        std::cout << "Email Address         " << contact.getEmail() << "\n";
        std::cout << "Phone Number          " << contact.getPhoneNumber() << "\n";
        std::cout << "Birth Date         " << contact.getBirthdate() << "\n";
        std::cout << "Favourite Meal        " << contact.getFavouriteMeal() << "\n";
        std::cout << "Underwear Color       " << contact.getUnderwearColour() << "\n";
        std::cout << "Darkest Secret        " << contact.getDarkestSecret() << "\n";
}


void Contact::Display_user_info(Person contacts[], int size){
        std::string command;
        int place;
        std::cout << "\nwhich user do you want to view  enter index number";
		std::getline(std::cin, command, '\n');
        if (command[0]){
            place = command[0] - '0' -1;
            if (place >= 0 ){
                contact_details(contacts[place]);
            }
            else std::cout << "NOPED NOPE";
        }
        else std::cout << "NOPED NOPE";        
}

void Contact::search(void)
{
    Person newUser;
    int i = 1;
    int j = 1;

    std::cout << "No.\tFirstname\tLastname\tNickname\n";
    while (i <= ContactSize)
    {
        newUser = contacts[i - 1];
        std::string name = newUser.getFirstname();
        std::string surname = newUser.getLastname();
        std::string aka = newUser.getNickname();
        
        if (name.size() > 10)
            name.replace(9, name.size(), 1, '.');

        if (surname.size() > 10)
            surname.replace(9, surname.size(), 1, '.');

        if (aka.size() > 10)
            aka.replace(9, aka.size(), 1, '.');
        std::cout << std::setw(10) << i << "|" << name << "|";
        std::cout << std::setw(10) << surname << "|";
        std::cout << std::setw(10) << aka << "|" << std::endl;
        i++;
    }
    i =1;
    Display_user_info(contacts,ContactSize); 
}



int Contact::getContactSize() const
{
    return (ContactSize);
}

