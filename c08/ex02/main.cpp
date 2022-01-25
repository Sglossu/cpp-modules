#include <iostream>
#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "mstack top:	" << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "mstack size:	" << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(0);
		mstack.push(737);

		MutantStack<int>::iterator it	= mstack.begin();
		MutantStack<int>::iterator ite	= mstack.end();

		++it;
		--it;

		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::cout << "_____________________________________" << std::endl;

		std::stack<int>	s(mstack);
		std::cout << "mstack top mstack:	" << mstack.top() << std::endl;
		std::cout << "mstack top s:		" << s.top() << std::endl;
	}
	std::cout << "_____________________________________" << std::endl;
	{
		MutantStack<int> mstack_r;

		mstack_r.push(11);
		mstack_r.push(22);
		mstack_r.push(33);
		mstack_r.push(44);
		mstack_r.push(55);
		mstack_r.push(66);
		mstack_r.push(88);

		MutantStack<int>::reverse_iterator it_r		= mstack_r.rbegin();
		MutantStack<int>::reverse_iterator ite_r	= mstack_r.rend();
		while (it_r != ite_r)
		{
			std::cout << *it_r << " ";
			++it_r;
		}
		std::cout << std::endl;
	}
	return (0);
}