#ifndef  SQSTACK_H_
#define SQLSTACK_H_

#define MAXSIZE 5

typedef int datatype;
typedef struct node_st
{
    datatype data[MAXSIZE];
    int top;
}sqstack;


sqstack *st_create();


int st_isempty(sqstack *st);

int st_push(sqstack *st, datatype *data);

int st_pop(sqstack *st,datatype *data);

int st_top(sqstack *st, datatype *data);

void st_travel(sqstack *st);

void st_destory(sqstack *st);







#endif

