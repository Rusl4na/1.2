#include <cstdio>;
#include <cmath>;

int main () {
double x, f;
printf("Enter x\n");
scanf("%lf",&x);
f=exp(-fabs(x))*sin(x);
printf("f=%lf\n",f);
return 0;}
