#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main(int argc, char **argv)
{
    {
		Weapon club = Weapon("Crude Spiked Club");
		HumanA bob("Bob", club);

		bob.attack();
		club.setType("Some other type of Club");
		bob.attack();
	}
	{
		Weapon club = Weapon("Crude Spiked Club");
		HumanB jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("Some other type of Club");
		jim.attack();
	}
    return (0);
}