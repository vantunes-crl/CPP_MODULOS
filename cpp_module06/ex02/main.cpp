#include "Base.hpp"

int main()
{
    Base *r = generate();

    identify(r);

    identify(*r);

    delete r;
}