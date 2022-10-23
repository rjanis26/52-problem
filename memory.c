/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{   
//    char str[100] = "BIT computer education";
//    int len= strlen(str);

//    char *c; 
//    c = (char *)malloc((len+1)*sizeof(char));
//    strcpy(c,str);
//    printf("%s\n", c);

//     free(c);
//     printf("free successfully.");

//     int *arr, i;
//     arr = (int *)malloc(5*sizeof(int));

//     for(int i=0; i<5; i++) {
//         scanf("%d", arr+i);
//     }

//    for(int i=0; i<5; i++) {
//         printf("%d ", *(arr+i));
//    }

//     printf("\n");
//     free(arr);
//     printf("free successfully");

    int i;
    printf("Enter the size: ");
    int n; scanf("%d", &n);

    int *ptr=(int *)malloc(n*sizeof(int));

    if(!ptr) {
        printf("Memory not allocated.");
    }
    else {
        for(int i=0; i<n; i++) {
            scanf("%d", ptr+i);
        }

        printf("Values are: ");
        int sum=0;
        for(int i=0; i<n; i++) {
       printf("%d ", *(ptr+i));
       sum += *(ptr+i);
     }
        printf("\nSum: %d", sum);
        printf("\n");

        int x =n;
        printf("Enter the new size: ");
        scanf("%d", &n);

        realloc(ptr,n*sizeof(int));

        if(!ptr) {
            printf("Not re-allocated.");
            exit(1);
        }

        for(int i=x; i<n; i++) {
            scanf("%d", (ptr+i));
        }

        printf("Values are: ");
        sum=0;
        for(int i=0; i<n; i++) {
            printf("%d ", *(ptr+i));
            sum += *(ptr+i);
        }
        printf("\nsum: %d",sum);


    }
    
    printf("\n");
    free(ptr);
    printf("Free successfully.");
   

    
    return 0;
}
 
 */

  
/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int *a = (int *)malloc(2*sizeof(int));
    int i;
    *a=10, *(a+1)=20;

    for(int i=0;i<2; ++i) {
        printf("%d ", *(a+i));
    }
    
    printf("\n");
     
    realloc(a,sizeof(int)*4);
    *(a+2)=5, *(a+3)=1;

    for(int i=0; i<4; i++) {
        printf("%d ",*(a+i));
    }

    printf("\n");

    realloc(a, sizeof(int)*6);
    *(a+4) = 100, *(a+5)=-10;

    for(int i=0; i<6; i++){
        printf("%d ", *(a+i));
    }   

    printf("\n");
    free(a);
    printf("free successfully.");

    return 0;
} */