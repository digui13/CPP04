#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain
{

	private:

		string _ideas[100];

	public:

		Brain(void);
		Brain(const Brain &obj);
		~Brain(void);
		Brain& operator=(const Brain &obj);
};

#endif