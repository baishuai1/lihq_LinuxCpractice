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
    int ret = 23;
    //ret = sqlist_find(list,&ret);
    printf("the data loc is:%d\n",ret);    
    printf("list->last:%d\n",list->last);    
    for(i = 0;i < sizeof(arr)/sizeof(*arr); i++)
    {
        ret = sqlist_delete(list,0);
        printf("the data loc is:%d\n",ret);    
    } 
   // sqlist_delete(list,0);
    sqlist_display(list);
    printf("list->last:%d\n",list->last);    
   // sqlist_distory();
   ret =  sqlist_isempty(list);
   printf("isempty?:%d\n",ret);
    


    exit(0);
}
