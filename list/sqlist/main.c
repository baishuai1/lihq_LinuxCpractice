#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"


int main(){
    int i,err;
    sqlist *list = NULL,*list1 = NULL;
    datatype arr[] = {12,23,34,45,56};
    datatype arr1[] = {78,89,56,23,10};
    list = sqlist_create();
    list1 = sqlist_create();
    //sqlist_create1(&list);
    if(list == NULL)
    {
        fprintf(stderr,"sqlist_create() failed!\n");
        exit(1);
    }
    for(i = 0 ; i < sizeof(arr)/sizeof(*arr) ; i++)
    {
        if(err = sqlist_insert(list,0,&arr[i]) != 0)
        {
            if(err == -1)
                fprintf(stderr,"sqlist_insert() -1 failed\n");
            else if(err == -2)
                fprintf(stderr,"sqlist_insert() -2 failed\n");
            else
                fprintf(stderr,"sqlist_insert()  failed\n");
            exit(1);
        }
    }
    sqlist_display(list);
    //int ret = 23;
    for(i = 0 ; i < sizeof(arr1)/sizeof(*arr1) ; i++)
        sqlist_insert(list1,0,&arr1[i]);

    sqlist_display(list1);
    sqlist_union(list,list1);
    sqlist_display(list);

#if 0
    //ret = sqlist_find(list,&ret);
    sqlist_delete(list,1);
    /*if error*/

    sqlist_display(list);

    sqlist_destory(list);
#endif
#if 0
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
#endif    

    sqlist_destory(list);
    sqlist_destory(list1);

    exit(0);
}
