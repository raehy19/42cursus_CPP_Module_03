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
	std::cout << "ClapTrap Default constructor called ("
			  << this->_name << ")"
			  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap) {
	std::cout << "ClapTrap Copy constructor called ("
			  << this->_name << ")"
			  << std::endl;
	*this = clap_trap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap_trap) {
	std::cout << "ClapTrap Copy assignment operator called ("
			  << this->_name << ")"
			  << std::endl;
	if (this != &clap_trap) {
		this->_name = clap_trap._name;
		this->_hit_points = clap_trap._hit_points;
		this->_energy_points = clap_trap._energy_points;
		this->_attack_damage = clap_trap._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called ("
			  << this->_name << ")"
			  << std::endl;
}

// Additional Constructor
ClapTrap::ClapTrap(const std::string name) :
		_name(name),
		_hit_points(10),
		_energy_points(10),
		_attack_damage(0) {
	std::cout << "ClapTrap Set Name constructor called ("
			  << this->_name << ")"
			  << std::endl;
}

// Set
void ClapTrap::set_name(std::string name) {
	this->_name = name;
	std::cout << "ClapTrap Set Name : "
			  << this->_name
			  << std::endl;
};

void ClapTrap::set_hit_points(unsigned int hit_points) {
	this->_hit_points = hit_points;
	std::cout << "ClapTrap Set hit points : "
			  << this->_hit_points
			  << std::endl;
}

void ClapTrap::set_energy_points(unsigned int energy_points) {
	this->_energy_points = energy_points;
	std::cout << "ClapTrap Set energy points : "
			  << this->_energy_points
			  << std::endl;
}

void ClapTrap::set_attack_damage(unsigned int attack_damage) {
	this->_attack_damage = attack_damage;
	std::cout << "ClapTrap Set attack damage : "
			  << this->_attack_damage
			  << std::endl;
}

// Get
std::string ClapTrap::get_name(void) const {
	std::cout << "ClapTrap Get name : "
			  << this->_name
			  << std::endl;
	return (this->_name);
}

unsigned int ClapTrap::get_hit_points(void) const {
	std::cout << "ClapTrap Get hit points : "
			  << this->_hit_points
			  << std::endl;
	return (this->_hit_points);
}

unsigned int ClapTrap::get_energy_points(void) const {
	std::cout << "ClapTrap Get energy points : "
			  << this->_energy_points
			  << std::endl;
	return (this->_energy_points);
}

unsigned int ClapTrap::get_attack_damage(void) const {
	std::cout << "ClapTrap Get attack damage : "
			  << this->_attack_damage
			  << std::endl;
	return (this->_attack_damage);
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
		if (amount == 0) {
			std::cout << "Something attacked "
					  << this->_name
					  << " but missed. Current hit point : "
					  << this->_hit_points
					  << std::endl;
			return;
		}

		if (this->_hit_points < amount)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;

		std::cout << "ClapTrap "
				  << this->_name
				  << " Damaged "
				  << amount
				  << " hit points. Current hit point : "
				  << this->_hit_points
				  << std::endl;
		return;
	}
	std::cout << "ClapTrap "
			  << this->_name
			  << "already dead"
			  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		unsigned long long temp =
				(unsigned long long) this->_hit_points
				+ (unsigned long long) amount;
		if (temp > UINT_MAX)
			this->_hit_points = UINT_MAX;
		else
			this->_hit_points = (unsigned int) temp;
		std::cout << "ClapTrap "
				  << this->_name
				  << " is repaired. Recovered "
				  << amount
				  << " hit points. Current hit point : "
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