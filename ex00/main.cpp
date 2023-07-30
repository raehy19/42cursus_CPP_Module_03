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

int main(void) {
	ClapTrap clap_trap1("CL4P-TP");
	ClapTrap clap_trap2("C");

	clap_trap1.attack("C");

	clap_trap1.set_attack_damage(2);
	clap_trap1.attack("C");
	clap_trap2.takeDamage(clap_trap1.get_attack_damage());

	clap_trap1.takeDamage(5);
	clap_trap1.beRepaired(100);
	clap_trap1.takeDamage(UINT_MAX);
	clap_trap1.beRepaired(UINT_MAX);
	clap_trap2.beRepaired(UINT_MAX);

	return (0);
}
