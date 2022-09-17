#include "stack.h"

int main ()
{
    long long AmountElement = 0;
    int SizeElemet = 0;

    scanf ("%lld%d", &AmountElement, &SizeElemet);

    StructStack* stack = stack_constructor (AmountElement, SizeElemet);
    MCA (stack != NULL, 1);

    stack = NULL;
    stack_destructor (stack);

    return 0;
}
