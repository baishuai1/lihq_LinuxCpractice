#include <stdio.h>
#include <stdlib.h>


int main(){
    
#if 0
    int a[4] = {1,5,4,2};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d:%ld\n",size,sizeof(a));
    for(int i=0;i < size; i++) {
        printf("%d\n",a[i]);
    }
    
#endif
    int i = 1;
    int *p = &i;
    int **q = &q;
    printf("%ld\n",sizeof(i));
    printf("%ld\n",sizeof(p));
    

    printf("i=%d\n",i);
    printf("&i=%p\n",&i);
    printf("p=%p\n",p);
    printf("&p=%p\n",&p);
    printf("*p=%d\n",*p);
    printf("q=%p\n",q);
    printf("&q=%p\n",&q);
    printf("*q=%p\n",*q);
    printf("**q=%d",**q);
    exit(0);
}
