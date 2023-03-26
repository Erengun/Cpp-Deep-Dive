/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:22:03 by egun              #+#    #+#             */
/*   Updated: 2023/03/26 21:22:04 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << ": " << str << std::endl;
    std::cout << stringPTR << ": " << *stringPTR << std::endl;
    std::cout << &stringREF << ": " << stringREF << std::endl;

    return 0;
}