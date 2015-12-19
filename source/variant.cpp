#define BOOST_ALL_NO_LIB
#include <boost/variant.hpp>
#include <vector>
#include <string>
#include <iostream>

int main(int argc , char** argv)
{
	typedef boost::variant<int, const char*, std::string> my_var_t;

	std::vector<my_var_t> some_values;

	some_values.push_back(0);
	some_values.push_back("hello there");
	some_values.push_back(std::string("WoW"));

	std::string& s = boost::get<std::string>(some_values.back());

	s += " That is great!\n";
	std::cout << s;

	return 0;
}
