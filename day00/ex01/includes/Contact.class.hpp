/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:36:49 by msambo            #+#    #+#             */
/*   Updated: 2019/06/05 13:36:53 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT__
#define __CONTACT__

#include <iostream>
#include <string>
#include <iomanip>
#include "Person.class.hpp"

class Contact
{
    public:
    Contact();
    ~Contact();
    void addUser(Person user);
    void Add_new_thing(std::string holder);
    void showUser() const;
    int getContactSize() const;
    void search(void);
    void Display_user_info(Person contacts[], int size);
    void contact_details(Person contact);
    

    private:
    Person matchingContact[8];
    Person contacts[8];
    int ContactSize;

};

#endif
