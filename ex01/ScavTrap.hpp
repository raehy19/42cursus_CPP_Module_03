/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:31:54 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/30 14:31:55 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
public:
	// Orthodox Canonical Form
	ScavTrap();

	ScavTrap(const ScavTrap &scav_trap);

	ScavTrap &operator=(const ScavTrap &scav_trap);

	virtual ~ScavTrap();

	// Additional Constructor
	ScavTrap(const std::string name);

	virtual void attack(const std::string &target);

	// Scav Behavior
	void guardGate(void);
};

#endif
