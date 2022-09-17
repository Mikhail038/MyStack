#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


#define DOTXT(Message) #Message

#define MCP(Message)                                                                                       \
        do                                                                                                 \
        {                                                                                                  \
            fprintf (stderr, "FAILED CHECK//" DOTXT (Message)                                              \
            "//IN FUNCTION//%s//IN LINE//%d//IN FILE//%s//\n",                                             \
             __PRETTY_FUNCTION__, __LINE__, __FILE__);                                                     \
            if (errno != 0) perror ("Error!");                                                             \
        } while (0)

#define MCA(Condition, ReturnNum)                     \
        do                                            \
        {                                             \
            if (!(Condition))                         \
            {                                         \
                MCP (Condition);                      \
                return ReturnNum;                     \
            }                                         \
        } while (0)


typedef struct StructStack
{
    long long top = 0;
    long long maxsize = 0;
    int size = 0;
    void* data = NULL;
} StructStack;


/*!
    @brief Function that initializes stack

    @param[in] Amount maximum amount of objects in stack
    @param[in] Size size of one object

    @return returns pointer to the stack structure

*/
struct StructStack* stack_constructor (int Amount, int Size);

void push_it (StructStack* stack);

void stack_destructor (StructStack* stack);
