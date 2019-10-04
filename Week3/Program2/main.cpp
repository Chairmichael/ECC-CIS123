// Practice 3.2
// Jefferson V. Henry
// 9/25/2019


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /* 1 */
	double time = 0;
	if (time > 15.0)
		time++;

	/* 2 */
	double poly = 4.0;
	if (sqrt(poly) < 0.5)
		cout << poly << endl;

	/* 3 */
	double volt_1 = 9, volt_2 = 4;
	if (volt_1 - volt_2 > 10.0)
		cout << volt_1 << " " << volt_2 << endl;

	/* 4 */
	double den = 1, num = 5, result;
	if (den < 0.05) {
	    result = 0;
	}
	else {
		result = num / den;
	}

	/* 5 */
	double count = 1, x = 7;
	time = 1; 
	if (log(x) >= 3) {
	    time = 0;
	    --count;
	}

	/* 6 */
	double dist = 50; 
	time = 0;
	if (dist < 50 && time > 10) {
	    time += 2;
	}
	else {
		time += 2.5;
	}

	/* 7 */
	dist = 50;
	if (dist >= 100) {
	    time += 2;
	}
	else if (dist >= 50) {
		time += 1;
	}
	else {
		time += 0.5;
	}
}