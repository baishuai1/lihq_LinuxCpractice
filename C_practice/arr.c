#include <stdio.h>
#include <stdlib.h>

int main(){

#if 0
    int a[3] = {1,2,3};
    int i;
    int *p = a;
    
    p++;

    printf("%p ,%p\n",a,a+1); 
    printf("%p ,%p\n",p,p+1);
    

    for(i = 0 ; i < sizeof(a)/sizeof(*a); i++)
        printf("%p -> %d\n",a+i,a[i]);
        //printf("%p -> %d\n",p+i,*(p+i));
        //printf("%p -> %d\n",&a[i],a[i]);
    printf("\n");
#endif
    /*
    int *p = (int [3]){1,2,3};
    int i;

    for(i = 0 ; i < 3 ; i++)
        printf("%p -> %d\n",&p[i],p[i]);
*/
    int a[] = {5,1,7,2,8,3};
    int y;
    int *p = &a[1];

    //y = (*--p)++;
    y = (*p--)++;
    printf("y = %d\n",y);
    printf("a[1] = %d\n",a[1]);
    printf("a[0] = %d\n",a[0]);


    exit(0);
}
