#include <stdio.h>
#include <stdlib.h>

#include "nohead.h"


//struct node_st * 
int list_insert(struct node_st **list,struct score_st *data)
{
    struct node_st *new;

    new = malloc(sizeof(*new));
    if(new == NULL)
        return -1;//NULL;

    new->data = *data;
    new->next = *list;
    *list = new;

    return 0;//list;
}

void list_show(struct node_st *list)
{
    struct node_st *cur;

    for(cur = list;cur != NULL;cur = cur->next)
    {
        printf("%d %s %d %d\n",cur->data.id,cur->data.name,cur->data.math,cur->data.chinese);
    }
}

int list_delete(struct node_st **list)
{
    struct node_st *cur;

    if(*list == NULL)
        return -1;

    //cur = *list;
    *list = (*list)->next;

    //free(cur);
    return 0;
}
//待做：将返回的int切换为score_st结构体类型
int list_find(struct node_st *list,int id)
{
    struct node_st *cur;
    for(cur = list; cur != NULL; cur = cur->next)
    {
        if(cur->data.id == id)
        {
            printf("%d %s %d %d\n",cur->data.id,cur->data.name,cur->data.math,cur->data.chinese);
            return 0;
        }
    }

    printf("Can not find!\n");
    return -1;
}

void list_destory(struct node_st *list)
{
    struct node_st *cur;
    
    if(list == NULL)
        return;

    for(cur = list;cur != NULL;cur = list)
    {
        list = cur->next;
        free(cur);
    }
}
