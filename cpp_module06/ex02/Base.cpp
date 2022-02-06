#include "Base.hpp"

Base *generate(void)
{
    int	t;

	srand(time(NULL));
	t = rand() % 3;

	if (t == 0)
		return new A;
	else if (t == 1)
		return new B;
    else
		return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "C\n";
    else
        std::cout << "non know type\n"; 
}

void identify(Base& p)
{
    try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e) {
		try {
			dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
            std::cout << e.what() << std::endl; 
		}
		catch (std::exception& e) {
			try {
				dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
                std::cout << e.what() << std::endl; 
			}
			catch (std::exception& e) {
				std::cout << "non know type" << std::endl;
			}
		}
	}
}