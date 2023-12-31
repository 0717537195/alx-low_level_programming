#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_the_all - Returns the sum of allitsparamters.
 * @n:The number of paramters passed to the function.
 * @....:A variable number of paramters to calculate the sum of.
 *
 * Return:if n == 0 = 0,
 * Otherwise  - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i, sum = 0;

	ve_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);

}
