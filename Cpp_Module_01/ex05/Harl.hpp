/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erengun <erengun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:24:08 by erengun           #+#    #+#             */
/*   Updated: 2023/03/28 17:24:10 by erengun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );


public:
    Harl();
    ~Harl();

    void        complain( std:: string level );

};

typedef void (Harl::*t_func) ( void );
