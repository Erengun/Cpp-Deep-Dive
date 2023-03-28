/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:59:17 by erengun           #+#    #+#             */
/*   Updated: 2023/03/28 16:59:18 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

class SedV2 {
public:
    SedV2(std::string filename);
    ~SedV2();

    void replace(std::string toFind, std::string replace);

private:
    std::string _inFile;
    std::string _outFile;

    std::string readFile(std::string filename);
    void writeFile(std::string filename, std::string content);
};

#endif // SEDV2_HPP
