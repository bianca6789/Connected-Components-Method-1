#ifndef MAIN1_H_INCLUDED
#define MAIN1_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#define MAX 100000

struct Node{
    int v;
    struct Node *next;
    int visited;
};
typedef struct Node Node;
void insert_after(Node *m,Node *n);
int find_unvisited(int n);
void dfs(int n);
Node *vertex[MAX];
void dfs(int n);
void insert_after(Node *m,Node *n);


#endif // FUNCTIONS1_H_INCLUDED

