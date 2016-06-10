#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/karma.hpp>


bool to_string(std::string & str, int value)
{
	namespace karma = boost::spirit::karma;
	std::back_insert_iterator<std::string> sink(str);
	return karma::generate(sink, value);
}


int main()
{
	std::string out;

	to_string(out, 2);
	std::cout << out << "\n";
	out.clear();

	to_string(out, -2);
	std::cout << out << "\n";
	out.clear();

	return 0;
}

