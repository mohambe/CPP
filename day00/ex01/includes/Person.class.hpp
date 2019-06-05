/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:37:13 by msambo            #+#    #+#             */
/*   Updated: 2019/06/05 13:37:16 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PERSON__
# define __PERSON__

#include <iostream>
#include <string>

class Person{
    private:
    /* data */
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    std::string phoneNumber;
    std::string birthdate;
    std::string favouriteMeal;
    std::string underwearColour;
    std::string darkestSecret;

    public:
    Person();
    ~Person();

    void setFirstname(std::string name);
    std::string getFirstname() const;

    void setLastname(std::string surname);
    std::string getLastname() const;

    void setNickname(std::string name);
    std::string getNickname() const;

    void setLogin(std::string loginString);
    std::string getLogin() const;

    void setPostalAddress(std::string address);
    std::string getPostalAddress() const;

    void setEmail(std::string mail);
    std::string getEmail() const;

    void setPhoneNumber(std::string phone);
    std::string getPhoneNumber() const;

    void setBirthdate(std::string dob);
    std::string getBirthdate() const;

    void setFavouriteMeal(std::string meal);
    std::string getFavouriteMeal() const;

    void setUnderwearColour(std::string underwear);
    std::string getUnderwearColour() const;

    void setDarkestSecret(std::string secret);
    std::string getDarkestSecret() const;
};
#endif
