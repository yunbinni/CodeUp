#include <stdio.h>
#include <float.h> // INT는 limits.h, FLT, DBL, LDBL은 float.h 
#include <math.h>

int main(){
	double a, b, max = DBL_MIN;
	scanf("%lf %lf", &a, &b);
	
	if(a+b > max) max = a+b;
	if(a-b > max) max = a-b;
	if(b-a > max) max = b-a;
	if(a*b > max) max = a*b;
	if(a/b > max) max = a/b;
	if(b/a > max) max = b/a;
	if(pow(a, b) > max) max = pow(a, b);
	if(pow(b, a) > max) max = pow(b, a);
	
	printf("%.6f", max);
}