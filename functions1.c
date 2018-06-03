#include "functions1.h"

void dfs(int n){
    Node *temp;
    vertex[n]->visited=1;
    for(temp=vertex[n]->next; temp; temp=temp->next){
        if(vertex[temp->v]->visited!=1){
            dfs(temp->v);

        }
    }
}
void insert_after(Node *m,Node *n){
    Node *temp;
    temp=m->next;
    m->next=n;
    n->next=temp;
    }

