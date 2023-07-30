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
	ClapTrap clap_trap1("CL4P-TP");
	ClapTrap clap_trap2("C");
	ClapTrap copy_clap1(clap_trap1);
	ClapTrap no_name1;

	print_info(clap_trap1);
	print_info(copy_clap1);
	print_info(no_name1);

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

//	ScavTrap scav_trap1("SC4V-TP");
//	ScavTrap scav_trap2("S");
//	ScavTrap copy_scav1(scav_trap1);
//	ScavTrap no_name2;
//
//	print_info(scav_trap1);
//	print_info(copy_scav1);
//	print_info(no_name2);
//
//	scav_trap1.guardGate();
//	print_info(scav_trap1);

	FragTrap frag_trap1("SC4V-TP");
	FragTrap frag_trap2("S");
	FragTrap copy_frag1(frag_trap1);
	FragTrap no_name3;

	print_info(frag_trap1);
	print_info(copy_frag1);
	print_info(no_name3);

	frag_trap1.highFiveGuys();
	print_info(frag_trap1);

	return (0);
}
