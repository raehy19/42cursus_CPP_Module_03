/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:14:01 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/30 18:14:01 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Orthodox Canonical Form
FragTrap::FragTrap() : ClapTrap() {
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);

	std::string temp = this->get_name();
	std::cout << "FragTrap Default constructor called ("
			  << temp << ")"
			  << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag_trap) {
	std::string temp = frag_trap.get_name();
	std::cout << "FragTrap Copy constructor called ("
			  << temp << ")"
			  << std::endl;

	*this = frag_trap;
}

FragTrap &FragTrap::operator=(const FragTrap &frag_trap) {
	std::string temp = this->get_name();
	std::cout << "FragTrap Copy assignment operator called ("
			  << temp << ")"
			  << std::endl;

	if (this != &frag_trap) {
		this->set_name(frag_trap.get_name());
		this->set_hit_points(frag_trap.get_hit_points());
		this->set_energy_points(frag_trap.get_energy_points());
		this->set_attack_damage(frag_trap.get_attack_damage());
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::string temp = this->get_name();
	std::cout << "FragTrap Destructor called ("
			  << temp << ")"
			  << std::endl;
}

// Additional Constructor
FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);

	std::string temp = this->get_name();
	std::cout << "FragTrap Set Name constructor called ("
			  << temp << ")"
			  << std::endl;
}

// Frag Behavior
void FragTrap::highFiveGuys() {
	std::string name = this->get_name();

	if (this->get_energy_points() > 0 && this->get_hit_points() > 0) {
		std::cout << "Positive vibes all around! Let's seal it with a High Five! ("
				  << name << ")"
				  << std::endl;
		set_energy_points((this->get_energy_points()) - 1);
		return;
	}
	std::cout << "FragTrap can't request High Five ("
			  << name << ")"
			  << std::endl;
}

