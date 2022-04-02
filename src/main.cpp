#include <iostream>
#include "fabrica.h"

using namespace std;

int main() {
	Fabrica fabrica;
	unique_ptr<IFruit> apple = fabrica.Produce("apple");
	cout << apple->GetDescription() << endl;

	unique_ptr<IFruit> orange = fabrica.Produce("orange");
		cout << orange->GetDescription() << endl;
	return 0;
}
