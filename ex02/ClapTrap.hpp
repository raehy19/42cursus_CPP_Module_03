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

	ClapTrap(const ClapTrap &clap_trap);

	ClapTrap &operator=(const ClapTrap &clap_trap);

	virtual ~ClapTrap();

	// Additional Constructor
	ClapTrap(const std::string name);

	// Set
	void set_name(std::string name);

	void set_hit_points(unsigned int hit_points);

	void set_energy_points(unsigned int energy_points);

	void set_attack_damage(unsigned int attack_damage);

	// Get
	std::string get_name(void) const;

	unsigned int get_hit_points(void) const;

	unsigned int get_energy_points(void) const;

	unsigned int get_attack_damage(void) const;

	// Behavior
	virtual void attack(const std::string &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

};

#endif