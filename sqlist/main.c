#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"


int main(){
    int i,err;
    sqlist *list;
    datatype arr[] = {12,23,34,45,56};
    //list = sqlist_create();
    sqlist_create1(&list);
    if(list == NULL)
    {
        fprintf(stderr,"sqlist_create() failed!\n");
        exit(1);
    }
    for(i = 0 ; i < sizeof(arr)/sizeof(*arr) ; i++)
        if(err = sqlist_insert(list,i,&arr[i]) != 0)
        {
            if(err = -1)
                fprintf(stderr,"sqlist_insert() -1 failed\n");
            else if(err =-2)
                fprintf(stderr,"sqlist_insert() -2 failed\n");
            else
                fprintf(stderr,"sqlist_insert()  failed\n");
            exit(0);
        }

    sqlist_display(list);

   // sqlist_distory();
    


    exit(0);
}
