/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:34:39 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/29 20:34:40 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;

public:
	// Orthodox Canonical Form
	ClapTrap();

	ClapTrap(const ClapTrap &clap_trap)

	ClapTrap &operator=(const ClapTrap &clap_trap);

	~ClapTrap();

	// Behavior
	void attack(const std::string &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

};

#endif