#include <stdio.h>
#include "sqlist.h"


sqlist *sqlist_create()
{
    sqlist *me;
    me = malloc(sizeof(*me));
    if(me == NULL)
        return NULL;
    me->last = -1;

    return me;
}
//用二级指针的原因是（因为此处我们想拿在手里进行操作的是一级指针
//所以传它的地址也就是二级指针进取好进行值的回传)
void sqlist_create1(sqlist **ptr)
{
    *ptr = malloc(sizeof(**ptr));
    if(*ptr == NULL)
        return ;
    (*ptr)->last = -1;
    return  ;
}
int sqlist_insert(sqlist *me,int i,datatype *data)
{
    int j;
    if(me->last == DATASIZE-1)
        return -1;
    if(i < 0 || i > me->last+1)
        return -2;
    
    for(j = me->last ; i <= j; j++ )
        me->data[j+1] = me->data[j];    

    me->data[i] = *data;
    me->last++;

    return 0;
}
int sqlist_delete(sqlist *me,int i)
{

}
int sqlist_find(sqlist *me,datatype *data)
{

}
int sqlist_isempty(sqlist *me)
{

}
int sqlist_setempty(sqlist *me)
{

}
int sqlist_getnum(sqlist *me)
{

}
void sqlist_display(sqlist *me)
{
    int i;
    if(me->last == -1)
        return ;
    for(i = 0; i<=me->last ; i++)
        printf("%d ",me->data[i]);
    printf("\n");
    return ;
}
int sqlist_destory(sqlist *me)
{

}
int sqlist_union(sqlist *list1,sqlist *list2)
{

}
