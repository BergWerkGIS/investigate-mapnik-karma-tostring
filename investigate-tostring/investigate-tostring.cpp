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

	for (int i = 5; i >= -5; i--)
	{
		to_string(out, i);
		std::cout << i << " => " << out << "\n";
		out.clear();
	}

	return 0;
}

