#include <iostream>
#include <float.h> // INT는 limits.h, FLT, DBL, LDBL은 float.h 
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	double a, b, max = DBL_MIN;
	cin >> a >> b;
	
	if(a+b > max) max = a+b;
	if(a-b > max) max = a-b;
	if(b-a > max) max = b-a;
	if(a*b > max) max = a*b;
	if(a/b > max) max = a/b;
	if(b/a > max) max = b/a;
	if(pow(a, b) > max) max = pow(a, b);
	if(pow(b, a) > max) max = pow(b, a);
	
	cout << fixed << setprecision(6) << max;
}