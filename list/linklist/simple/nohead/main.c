#include <stdio.h>
#include <stdlib.h>

#include "nohead.h"


int main()
{
    int i;
    struct node_st *list = NULL;
    struct score_st tmp;

    for(i = 0; i < 7 ; i++)
    {
        tmp.id = i;
        snprintf(tmp.name,NAMESIZE,"stu%d",i);
        tmp.math = rand() % 100;
        tmp.chinese = rand() % 100;

        //list =
        int ret;
        ret = list_insert(&list,&tmp);
        if(ret != 0)
            exit(1);
    }

    list_show(list);
    
    //list_delete(&list);
    //printf("\n");

    //list_show(list);
    printf("\n");

    int id =3;
    list_find(list,id);

    list_destory(list);

    exit(0);
}
