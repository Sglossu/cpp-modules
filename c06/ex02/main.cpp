#include <iostream>
using namespace std;

class Base{ public:	virtual ~Base() {} };

class A : public Base { public: virtual ~A() {}; };
class B : public Base { public: virtual ~B() {}; };
class C : public Base { public: virtual ~C() {}; };

Base *generate() {
	Base* base = NULL;
	srand(time(NULL));
	switch (rand() % 3) {
		case 0:
			base = new A();
			break;
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;
	}
	return (base);
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p))
		cout << "A" << endl;
	else if (dynamic_cast<B *>(p))
		cout << "B" << endl;
	else if (dynamic_cast<C *>(p))
		cout << "C" << endl;
	else
		cout << "Not A, B or C class" << endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		cout << "A" << endl;
	}
	catch (bad_cast) {}
	try {
		(void)dynamic_cast<B&>(p);
		cout << "B" << endl;
	}
	catch (bad_cast) {}
	try {
		(void)dynamic_cast<C&>(p);
		cout << "C" << endl;
	}
	catch (bad_cast) {}
}

int main() {
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}
