/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:13:54 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/30 18:13:55 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
public:
	// Orthodox Canonical Form
	FragTrap();

	FragTrap(const FragTrap &frag_trap);

	FragTrap &operator=(const FragTrap &frag_trap);

	virtual ~FragTrap();

	// Additional Constructor
	FragTrap(const std::string name);

	void attack(const std::string &target);

	// Frag Behavior
	void highFiveGuys(void);
};

#endif
