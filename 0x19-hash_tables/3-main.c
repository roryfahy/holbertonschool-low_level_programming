#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "1");
    hash_table_set(ht, "hetairas", "2");
    hash_table_set(ht, "mentioner", "3");
    hash_table_set(ht, "heliotropes", "4");
    hash_table_set(ht, "neurospora", "5");
    hash_table_set(ht, "depravement", "6");
    hash_table_set(ht, "serafins", "7");
    hash_table_set(ht, "stylist", "8");
    hash_table_set(ht, "subgenera", "9");
    hash_table_set(ht, "joyful", "10");
    hash_table_set(ht, "synaphea", "11");
    hash_table_set(ht, "redescribed", "12");
    hash_table_set(ht, "urites", "13");
    hash_table_set(ht, "dram", "14");
    hash_table_set(ht, "vivency", "15");
    hash_table_set(ht, "vivency", "16");
    hash_table_set(ht, "depravement", "17");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
