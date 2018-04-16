// Experiment with incrementation and decrementation.

#include <stdio.h>

int main()
{
int a, b = 0, c = 0;

a = ++b + ++c;
// 2, 1, 1
printf("%d %d %d\n", a, b, c);

a = b++ + c++;
// 2, 2, 2
printf("%d %d %d\n", a, b, c);

a = ++b + c++;
// 5, 3, 3
printf("%d %d %d\n", a, b, c);

a = b-- + --c;
// 5, 2, 2
printf("%d %d %d\n", a, b, c);

}