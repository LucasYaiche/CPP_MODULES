#include "MutantStack.hpp"

void PrintStack(std::stack<int> s)
{
    // If stack is empty then return
    if (s.empty())
        return;
     
 
    int x = s.top();
 
    // Pop the top element of the stack
    s.pop();
 
    // Recursively call the function PrintStack
    PrintStack(s);
 
    // Print the stack element starting
    // from the bottom
    std::cout << x << " ";
 
    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}

int main()
{
	std::cout << "-----Tests with my stack-----" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << std::endl << std::endl;

	std::cout << "-----Tests with list-----" << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "no results because no function top with list" << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator list_it = list.begin();
	std::list<int>::iterator list_ite = list.end();
	++list_it;
	--list_it;
	while (list_it != list_ite)
	{
	std::cout << *list_it << std::endl;
	++list_it;
	}

	std::cout << std::endl << "-----Copy constructor tests-----" << std::endl;
	
	std::stack<int> s(mstack);
	PrintStack(mstack);
	std::cout << std::endl;
	PrintStack(s);
	std::cout << std::endl;

	s.push(6);
	PrintStack(s);
	std::cout << std::endl;

	mstack.pop();
	PrintStack(mstack);
	std::cout << std::endl;
	return 0;
}