/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:34:30 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/29 20:34:31 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void print_info(ClapTrap &robot) {
	std::string temp_name = robot.get_name();
	unsigned int temp_hit_points = robot.get_hit_points();
	unsigned int temp_energy_points = robot.get_energy_points();
	unsigned int temp_attack_damage = robot.get_attack_damage();

	std::cout << "====info===="
			  << std::endl
			  << "name          : "
			  << temp_name
			  << std::endl
			  << "hit points    : "
			  << temp_hit_points
			  << std::endl
			  << "energy points : "
			  << temp_energy_points
			  << std::endl
			  << "attack damge  : "
			  << temp_attack_damage
			  << std::endl
			  << "============"
			  << std::endl;
}

int main(void) {
	ScavTrap scav_trap1("SC4V-TP");
	ScavTrap scav_trap2("S");
	ScavTrap copy_scav1(scav_trap1);
	ScavTrap no_name2;

	print_info(scav_trap1);
	print_info(copy_scav1);
	print_info(no_name2);

	scav_trap1.guardGate();
	print_info(scav_trap1);

	scav_trap2.takeDamage(1);
	scav_trap2.attack("aa");

	return (0);
}
