#include <stdio.h>
#define CAPACITY 50000

unsigned long hash_function(char* str);

int main()
{
        return printf("%lu \n", hash_function("Adel"));
}

unsigned long hash_function(char* str)
{
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}