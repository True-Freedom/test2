#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "Hello, World!" << endl;

	std::string str;
	cin >> str;
	if (str[0] != '#')
		cout << "input string: " << str << endl;
	cout << "done!" << endl;

	cout << "Bye..." << endl;
	return 0;
}
