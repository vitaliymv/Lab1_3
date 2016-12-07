#include <iostream>
#include <cmath>
#include "equation.h"
#include <stdlib.h>

using namespace std;

int main()
{
	equation p(-15.246, 4.642*pow(10, -2), 20.001*pow(10, 2));

	p.solve();
	cout << "alpha = " << p.getResult() << endl;
	system("pause");
	return 0;
}
