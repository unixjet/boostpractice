#define BOOST_ALL_NO_LIB
#include <libs/system/src/error_code.cpp>
#include <boost/program_options.hpp>
#include <boost/program_options/errors.hpp>
#include <iostream>


namespace opt = boost::program_options;

int main(int argc , char ** argv)
{
//	opt::options_description desc("All options");

//	desc.add_options()
//	  ("apple,a", opt::value<int>()->default_value(10), "apples that you have");
    std::cout << "Hello, AT" << std::endl;
	return 0;
}
