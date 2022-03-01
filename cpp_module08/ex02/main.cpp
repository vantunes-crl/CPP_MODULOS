#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int>    mstack;

        {
        mstack.push(5);
        mstack.push(17);

        std::cout << "------Test subject------" << std::endl;
        MutantStack<int> stack;
        stack.push(5);
        stack.push(17);
        
        std::cout << "Pop : " << stack.top() << std::endl;

        stack.pop();

        std::cout << "Size : " << stack.size() << std::endl;

        stack.push(3);
        stack.push(5);
        stack.push(737);

        stack.push(0);

        MutantStack<int>::iterator it = stack.begin();
        MutantStack<int>::iterator ite = stack.end();

        ++it;
        --it;

        while (it != ite)
        {
            std::cout << *it << std::endl;++it;
        }

        std::stack<int> s(stack);
}
    std::cout << "------------------------------------------------------test2---------------------------------------\n";
    {
    std::cout << "\n";
		std::cout << "------Test List------"  << std::endl;
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "Back : " << list.back() << std::endl;

		list.pop_back();

		std::cout << "Size : " << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

    }
	return (0);
}