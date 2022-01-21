#include <iostream>
using namespace std;

typedef struct s_data {
	std::string		str;
	int 			number;
}				Data;

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	Data	old_data;
	Data*	new_data;

	old_data.str = "Hello";
	old_data.number = 5;
	cout << "str: " << old_data.str << "; number: " << old_data.number << endl;
	new_data = deserialize(serialize(&old_data));
	cout << "str: " << new_data->str << "; number: " << new_data->number << endl;

	return 0;
}
