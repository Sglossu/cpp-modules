#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {
	if (argc != 2) {
		cout << "Wrong arguments!" << endl;
		return 1;
	}

	try {
		char c = static_cast<char>(stoi(argv[1]));
		if (isprint(c))
			cout << "char: " << c <<endl;
		else
			cout << "char: Non displayable" << endl;
	} catch (exception &ex) {
		cout << "char: impossible" << endl;
	}

	try {
		int i = static_cast<int>(stoi(argv[1]));
		cout << "int: " << i << endl;
	} catch (exception &ex) {
		cout << "int: impossible" << endl;
	}

	try {
		float f = static_cast<float>(stof(argv[1]));
		cout.precision(1);
		cout << std::fixed;
		cout << "float: " << f << "f" << endl;
	} catch (std::out_of_range &outOfRange) {
		cout << "float: " << std::numeric_limits<float>::infinity() << "f" << endl;
	} catch (exception &ex) {
		cout << "float: impossible" << endl;
	}

	try {
		double d = static_cast<double>(stod(argv[1]));
		cout.precision(1);
		cout << std::fixed;
		cout << "double: " << d << endl;
	} catch (std::out_of_range &outOfRange) {
		cout << "double: " << std::numeric_limits<double>::infinity() << endl;
	} catch (exception &ex) {
		cout << "double: impossible" << endl;
	}


}
