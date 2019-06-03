#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "c";
    printf("the key [%s] is at index %lu\n", s, key_index((unsigned char *)s, hash_table_array_size));
    s = "python";
    printf("the key [%s] is at index %lu\n", s, key_index((unsigned char *)s, hash_table_array_size));
    s = "Jennie";
    printf("the key [%s] is at index %lu\n", s, key_index((unsigned char *)s, hash_table_array_size));
    s = "N";
    printf("the key [%s] is at index %lu\n", s, key_index((unsigned char *)s, hash_table_array_size));
    s = "Asterix";
    printf("the key [%s] is at index %lu\n", s, key_index((unsigned char *)s, hash_table_array_size));
    s = "Betty";
    printf("the key [%s] is at index %lu\n", s, key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("the key [%s] is at index %lu\n", s, key_index((unsigned char *)s, hash_table_array_size));

    return (EXIT_SUCCESS);
}
