#ifndef NOHEAD_H__
#define NOHEAD_H__

#define NAMESIZE 32

struct score_st
{
        int id;
        char name[NAMESIZE];
        int math;
        int chinese;
};

struct node_st
{
    struct score_st data;
    struct node_st *next;
};

//struct node_st * 
int list_insert(struct node_st **list,struct score_st *data);

void list_show(struct node_st *list);

int list_delete(struct node_st **list);

int list_find(struct node_st *list,int id);

void list_destory(struct node_st *list);





#endif
