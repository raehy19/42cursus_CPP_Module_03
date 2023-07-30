/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:34:49 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/29 20:34:50 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Orthodox Canonical Form
ClapTrap::ClapTrap() : _name("NoName"),
					   _hit_points(10),
					   _energy_points(10),
					   _attack_damage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = clap_trap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap_trap) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &clap_trap) {
		this->_name = clap_trap._name;
		this->_hit_points = clap_trap._hit_points;
		this->_energy_points = clap_trap._energy_points;
		this->_attack_damage = clap_trap._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

// Behavior
void ClapTrap::attack(const std::string &target) {
	if (this->_energy_points > 0 && this->_attack_damage > 0) {
		std::cout << "ClapTrap "
				  << this->_name
				  << " attacks "
				  << target
				  << " causing "
				  << this->_attack_damage
				  << " points of damage!"
				  << std::endl;
		--(this->_energy_points);
		return;
	}
	std::cout << "ClapTrap "
			  << this->_name
			  << " can't attack."
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		if (this->_hit_points < amount)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;

		return;
	}
	std::cout << "ClapTrap "
			  << this->_name
			  << "already dead"
			  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		std::cout << "ClapTrap "
				  << this->_name
				  << " is repaired. Recovered "
				  << amount
				  << " hit points, and current hit point : "
				  << this->_hit_points
				  << std::endl;
		--(this->_energy_points);
		return;
	}
	std::cout << "ClapTrap "
			  << this->_name
			  << " can't be repaired."
			  << std::endl;
}