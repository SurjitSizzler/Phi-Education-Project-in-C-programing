#ifndef _LINK_DICTIONARY_H
#define _LINK_DICTIONARY_H

struct node{
  char word[20];         // Store the word data of the dictionary
  char meaning[20];      // Store the meaning of the word
  struct node *next;     // stores the address of the next node
};

/* Search a node in the list returns and returns 
 it's position in the list */
int search(struct node *head, char *word);

/* Create a new node for the list */
struct node *newNode(struct node *head, char *word, char *meaning);

/* Adds a new node to the list in sorted order */
void sortedInsert(struct node** headref, struct node* newnode);

/*lookup a node in the list */
void lookup(struct node *head, char *word);

/* Delete a node from the list */
struct node *del(struct node *head, char *word);

/* Print the Whole Dictionary */
void print(struct node *head);

/* Save dictionary data to the file on disk */
void WriteData(struct node *head);

/*Read dictionary data from the file */
void ReadData(struct node **head);

#endif
