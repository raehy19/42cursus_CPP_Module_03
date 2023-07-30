/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:31:59 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/30 14:32:00 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Orthodox Canonical Form
ScavTrap::ScavTrap() : ClapTrap() {
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);

	std::string temp = this->get_name();
	std::cout << "ScavTrap Default constructor called ("
			  << temp << ")"
			  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap) {
	std::string temp = scav_trap.get_name();
	std::cout << "ScavTrap Copy constructor called ("
			  << temp << ")"
			  << std::endl;

	*this = scav_trap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav_trap) {
	std::string temp = this->get_name();
	std::cout << "ScavTrap Copy assignment operator called ("
			  << temp << ")"
			  << std::endl;

	if (this != &scav_trap) {
		this->set_name(scav_trap.get_name());
		this->set_hit_points(scav_trap.get_hit_points());
		this->set_energy_points(scav_trap.get_energy_points());
		this->set_attack_damage(scav_trap.get_attack_damage());
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::string temp = this->get_name();
	std::cout << "ScavTrap Destructor called ("
			  << temp << ")"
			  << std::endl;
}

// Additional Constructor
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);

	std::string temp = this->get_name();
	std::cout << "ScavTrap Set Name constructor called ("
			  << temp << ")"
			  << std::endl;
}

// Scav Behavior
void ScavTrap::attack(const std::string &target) {
	std::string name = this->get_name();
	unsigned int damage = this->get_attack_damage();

	if (this->get_energy_points() > 0 && this->get_hit_points() > 0) {
		std::cout << "ScavTrap "
				  << name
				  << " attacks "
				  << target
				  << " causing "
				  << damage
				  << " points of damage!"
				  << std::endl;
		set_energy_points((this->get_energy_points()) - 1);
		return;
	}
	std::cout << "ScavTrap "
			  << name
			  << " can't attack."
			  << std::endl;
}

void ScavTrap::guardGate() {
	std::string name = this->get_name();

	if (this->get_energy_points() > 0 && this->get_hit_points() > 0) {
		std::cout << "ScavTrap Gate keeper mode activated ("
				  << name << ")"
				  << std::endl;
		set_energy_points((this->get_energy_points()) - 1);
		return;
	}
	std::cout << "ScavTrap can't activate Gate keeper mode ("
			  << name << ")"
			  << std::endl;
}