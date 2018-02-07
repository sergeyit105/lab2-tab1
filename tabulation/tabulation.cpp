// tabulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define COND1(x) (x) <= -2
#define sqr3(x) (x)*(x)*(x)
#define FUNC1(x) sqr3(x) - 2*(x) + 1

#define COND2(x) (x) > -2 && (x) < 2
#define FUNC2(x) fabs((x)-1)
#define FUNC3(x) 1 - 2*(x)

#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x))

int main()
{
	double a = -3.0, b = 3.0, x, h = 0.1;
	printf("x:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.2f%c", x, PUT_DELIM(x, h, b));
	}
	printf("y:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.3f%c", FUNC(x), PUT_DELIM(x, h, b));
	}

    return 0;
}

