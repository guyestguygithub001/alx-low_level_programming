#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of hash table,
 * @key: The key, string,,
 * Unique Key in HashTable,
 * @value: value corresponding to a key,
 * @next: pointer to next node of the List,
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure,
 * @size: size of array,
 * @array: array of size @size,
 * Every cell in this array is a pointer to first node of linked list,
 * because we want our HashTable to use Chain collision handling,,
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

unsigned long int key_index(const unsigned char *key, unsigned long int size);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
void hash_table_delete(hash_table_t *ht);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_print(const hash_table_t *ht);
char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * struct shash_node_s - Node of a sorted hash table,,
 * @key: key, string,
 * key is unique in the HashTable,
 * @value: value corresponding to a key,
 * @next: pointer to next node of List,
 * @sprev: pointer to previous element of sorted linked list,,
 * @snext: pointer to next element of sorted linked list,
 */
typedef struct shash_node_s
{
	char *value;
	char *key;
	struct shash_node_s *snext;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure,
 * @size: size of the array,
 * @array: array of size @size,
 * Every cell in this array is a pointer to the first node of linked list,
 * because we want the HashTable to use Chain collision handling,
 * @shead: pointer to the first element of sorted linked list,
 * @stail: pointer to the last element of sorted linked list,
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *stail;
	shash_node_t *shead;
} shash_table_t;

int shash_table_set(shash_table_t *ht, const char *key, const char *value);
shash_table_t *shash_table_create(unsigned long int size);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);

#endif /* HASH_TABLES_H */
