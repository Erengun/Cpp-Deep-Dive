/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:00:41 by erengun           #+#    #+#             */
/*   Updated: 2023/03/28 17:01:04 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

int main ( int ac, char **av )
{
    if (ac != 4) {
        std::cerr << "Invalid arguments\nUsage: ./SedV2 <filename> <to_find> <replace>." << std::endl;
        return EXIT_FAILURE;
    } else {
        SedV2   sed2(av[1]);
        sed2.replace(av[2], av[3]);
    }
    return EXIT_SUCCESS;
}