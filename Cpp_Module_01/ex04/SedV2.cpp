/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:57:29 by erengun           #+#    #+#             */
/*   Updated: 2023/03/28 17:08:59 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

std::string SedV2::readFile(std::string filename) {
    std::ifstream ifs(filename);
    std::string content;
    if (ifs.is_open()) {
        if (std::getline(ifs, content, '\0')) {
            ifs.close();
            return content;
        }
        else {
            ifs.close();
            std::cerr << "Empty file found." << std::endl;
            exit(EXIT_FAILURE);
        }
    }
    else {
        std::cerr << "Unable to open the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}

void SedV2::writeFile(std::string filename, std::string content) {
    std::ofstream ofs(filename);
    if (ofs.is_open()) {
        ofs << content;
        ofs.close();
    }
    else {
        std::cerr << "Unable to open the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}


void SedV2::replace(std::string toFind, std::string replace) {
    std::string content = readFile(this->_inFile);
    size_t pos = content.find(toFind);
    while (pos != std::string::npos) {
        content.erase(pos, toFind.length());
        content.insert(pos, replace);
        pos = content.find(toFind, pos + replace.length());
    }
    writeFile(this->_outFile, content);
}

SedV2::SedV2(std::string filename) : _inFile(filename){
    this->_outFile = this->_inFile + ".replace";
}

SedV2::~SedV2 ( void ) {

}