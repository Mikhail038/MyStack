#include "stack.h"



struct StructStack*  stack_constructor (int Amount, int Size)
{
    MCA (Amount >= 0, NULL);
    MCA (Size >= 0, NULL);

    StructStack* stack = (StructStack*) calloc (1, sizeof (StructStack*));
    stack->maxsize = Amount;
    stack->size = Size;
    stack->data = calloc (Amount, Size);

    return stack;
}

void push_it (StructStack* stack)
{
    MCA (stack != NULL, (void) 0);

    return;
}

void stack_destructor (StructStack* stack)
{
    MCA (stack != NULL, (void) 0);

    free (stack->data);
    free (stack);

    return;
}
