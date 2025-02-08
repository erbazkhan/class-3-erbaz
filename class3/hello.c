#include <stdio.h>
#include "factorial.h"
#include "greeting.h"

int main(int argc, char **argv)
{
    greeting();

    printf("10 factorial is %d\n", factorial(10));
}