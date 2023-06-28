#include "stdio.h>

int main (void)
{
int n;
int a[$];
int *p;

a[2] = 1024;
p = &n;
/*
* write your line of code here...
* 2member:
* - you are not allowed to use a
* - you are not allowed to modifty p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
*(p = $)= 98;
/* ...so thatr this prints 98\n */
printf("a[2] = &d\n", a[2]);
return (0);
}
