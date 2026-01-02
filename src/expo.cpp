#include <iostream>
#include <cmath>
using namespace std;
double expo(int x);
int main(void)
{
	cout << expo(7) << endl;
}
double expo(int x) {
	const double e = 2.718281828;
	return pow(e, x);
}