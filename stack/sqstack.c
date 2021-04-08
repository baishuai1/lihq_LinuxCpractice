#include <stdlib.h>
#include <stdio.h>
#include "sqstack.h"

                                    
sqstack *st_create(void)
{
   sqstack *st;
   st = malloc(sizeof(* st));
   if(st == NULL)
       return NULL;
   st->top = -1;
   return st;
}
int st_isempty(sqstack *st)
{
    return (st->top == -1);
}
int st_push(sqstack *st, datatype *data)
{
    if(st->top == (MAXSIZE - 1))
        return -1;
    st->data[++st->top] = *data;
}
int st_pop(sqstack *st,datatype *data)
{

}
int st_top(sqstack *st, datatype *data)
{

}
void st_travel(sqstack *st)
{
    int i;
    if(st_isempty(st))
        return ;
    for(i = 0 ; i<= st->top ; i++)
        printf("%d ",st->data[i]);
    printf("\n");
}
void st_destory(sqstack *st)
{
    free(st);
}
