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
#include "FragTrap.hpp"

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
	FragTrap frag_trap1("F_R_A_G");
	FragTrap frag_trap2("F");
	FragTrap copy_frag1(frag_trap1);
	FragTrap no_name3;

	print_info(frag_trap1);
	print_info(copy_frag1);
	print_info(no_name3);

	frag_trap1.highFiveGuys();
	print_info(frag_trap1);

	frag_trap1.attack("XXXXXX");
	frag_trap2.attack("XXXXXX");

	return (0);
}
