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

#include "ClapTrap.hpp"

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
	ClapTrap clap_trap1("CL4P-TP");
	ClapTrap clap_trap2("C");
	ClapTrap copy_clap1(clap_trap1);

	print_info(clap_trap1);
	print_info(clap_trap2);
	print_info(copy_clap1);

	clap_trap1.attack("C");

	clap_trap1.set_attack_damage(2);
	clap_trap1.attack("C");
	clap_trap2.takeDamage(clap_trap1.get_attack_damage());

	clap_trap1.takeDamage(5);
	clap_trap1.beRepaired(100);
	clap_trap1.takeDamage(UINT_MAX);
	clap_trap1.beRepaired(UINT_MAX);
	clap_trap2.beRepaired(UINT_MAX);

	clap_trap1.attack("aaa");
	clap_trap1.attack("aaa");
	clap_trap1.attack("aaa");
	clap_trap1.attack("aaa");
	clap_trap1.set_attack_damage(3);
	clap_trap1.attack("aaa");
	clap_trap1.attack("aaa");
	clap_trap1.attack("aaa");
	clap_trap1.attack("aaa");
	clap_trap1.attack("aaa");
	clap_trap1.beRepaired(10);

	return (0);
}
