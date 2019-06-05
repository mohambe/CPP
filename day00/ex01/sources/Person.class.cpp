/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:37:03 by msambo            #+#    #+#             */
/*   Updated: 2019/06/05 13:37:05 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.class.hpp"

Person::Person()
{

}

Person::~Person()
{
    this->firstname = "";
    this->lastname = "";
    this->nickname = "";
    this->login = "";
    this->postalAddress = "";
    this->emailAddress = "";
    this->phoneNumber = "";
    this->birthdate = "";
    this->favouriteMeal = "";
    this->underwearColour = "";
    this->darkestSecret = "";
}

void Person::setFirstname(std::string name)
{
    if (!name.empty())
    {
        firstname = name;
    }
    
}

std::string Person::getFirstname() const
{
    return (firstname);
}

void Person::setLastname(std::string surname)
{
    if (!surname.empty())
    {
        lastname = surname;
    }
}

std::string Person::getLastname() const
{
    return (lastname);
}

void Person::setNickname(std::string name)
{
    if (!name.empty())
    {
        nickname = name;
    }
}

std::string Person::getNickname() const
{
    return (nickname);
}


void Person::setLogin(std::string Login)
{
    if (!login.empty())
    {
        login = Login;
    }
}

std::string Person::getLogin()const
{
    return (login);
}

void Person::setPostalAddress(std::string address)
{
    if (!address.empty())
    {
        postalAddress = address;
    }
}

std::string Person::getPostalAddress()const
{
    return (postalAddress);
}

void Person::setEmail(std::string email)
{
    if (!email.empty())
    {
        emailAddress = email;
    }
}

std::string Person::getEmail()const
{
    return (emailAddress );
}

void Person::setPhoneNumber(std::string phone)
{
    if (!phone.empty())
    {
         phoneNumber = phone;
    }
}

std::string Person::getPhoneNumber()const
{
    return (phoneNumber);
}

void Person::setBirthdate(std::string dob)
{
    if (!dob.empty())
    {
        birthdate = dob;
    }
}

std::string Person::getBirthdate()const
{
    return (birthdate );
}

void Person::setFavouriteMeal(std::string meal)
{
    if (!meal.empty())
    {
        favouriteMeal = meal;
    }
}

std::string Person::getFavouriteMeal()const
{
    return (favouriteMeal);
}

void Person::setUnderwearColour(std::string underwear)
{
    if (!underwear.empty())
    {
        underwearColour = underwear;
    }
}

std::string Person::getUnderwearColour()const
{
    return (underwearColour);
}

void Person::setDarkestSecret(std::string secret)
{
    if (!secret.empty())
    {
        darkestSecret = secret;
    }
}

std::string Person::getDarkestSecret()const
{
    return (darkestSecret);
}
