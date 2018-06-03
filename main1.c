#include "functions1.h"

int main(){
    int test,v_n,e_n,source,dest,index,count=0,i;
    Node *source_n,*dest_n;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&v_n);
        for(i=0; i<v_n; ++i){
            vertex[i]=(Node *)malloc(sizeof(Node));
            vertex[i]->v=i;
            vertex[i]->next=NULL;
            vertex[i]->visited=0;
        }
        scanf("%d",&e_n);
        for(i=0; i<e_n; ++i){
            scanf("%d %d",&source,&dest);
            source_n=(Node *)malloc(sizeof(Node));
            source_n->v=source;
            dest_n=(Node *)malloc(sizeof(Node));
            dest_n->v=dest;
            insert_after(vertex[source],dest_n);
            insert_after(vertex[dest],source_n);

        }
        count=0;
        for(i=0; i<v_n; ++i){
            if(vertex[i]->visited==0)
            {
                ++count;
                dfs(i);
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
