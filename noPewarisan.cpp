#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo Function dari base class";
	}
};

class derivedClass : public baseClass {
public:
	// void perkenalan() {
    // cout << "Hallo saya Function dari deived Class";
    // }
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}