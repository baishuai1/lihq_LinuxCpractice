#ifndef SQLIST_H_
#define SQLIST_H_

#define DATASIZE 1024
typedef int datatype;

typedef struct node_st
{
    datatype data[DATASIZE];
    int last;
}sqlist;

sqlist *sqlist_create();

//用二级指针的原因是（因为此处我们想拿在手里进行操作的是一级指针
//所以传它的地址也就是二级指针进取好进行值的回传)
void sqlist_create1(sqlist **ptr);

int sqlist_insert(sqlist *me,int i,datatype *data);

int sqlist_delete(sqlist *me,int i);

int sqlist_find(sqlist *me,datatype *data);

int sqlist_isempty(sqlist *me);

int sqlist_setempty(sqlist *me);

int sqlist_getnum(sqlist *me);

void sqlist_display(sqlist *me);

int sqlist_destory(sqlist *me);

int sqlist_union(sqlist *list1,sqlist *list2);

#endif
