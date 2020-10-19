#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main()
{
	double x;
	double R;
	double y;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if ((x <= (-8-R)) || (x = -8+R))
		y = ((-1)*R);
	else
		if ((-8-R) < x && x < (-8+R))
			y = R-(sqrt((R*R)-(x*x)));
		else
			if ((-8+R) < x && x < 2)
				y = ((-1)*R + ((2-((-1)*R)/(10-R))*(x+8+R))) ; 
			else
				if (2 <= x && x <= 6)
					y = 0;
				else
					y = ((x-6)*(x-6));
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}