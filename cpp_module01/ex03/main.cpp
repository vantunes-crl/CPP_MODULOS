#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main(int argc, char **argv)
{
    {
		Weapon club = Weapon("Crude Spiked Club");
		HumanA bob("Bob", club);

		bob.attack();
		club.SetType("Some other type of Club");
		bob.attack();
	}
	{
		Weapon club = Weapon("Crude Spiked Club");
		HumanB jim("Jim");

		jim.SetWeapon(club);
		jim.attack();
		club.SetType("Some other type of Club");
		jim.attack();
	}
    return (0);
}