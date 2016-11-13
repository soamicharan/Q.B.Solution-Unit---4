#include<stdio.h>
#include<conio.h>
int main()
{
    int n,*vec1,*vec2,*resvec,a,b;
    printf("Enter dimension of vector.\n");
    scanf("%d",&n);
    vec1=malloc(sizeof(int)*n);
    vec2=malloc(sizeof(int)*n);
    resvec=malloc(sizeof(int)*n);
    printf("Enter first Vector.\n");
    for(a=0;a<n;a++)
         scanf("%d",&vec1[a]);
    printf("Enter second Vector.\n");
    for(a=0;a<n;a++)
        scanf("%d",&vec2[a]);
    printf("Resultant vector - \n");
    for(a=0;a<n;a++)
        printf("%d ",vec1[a]+vec2[a]);
 getch();
}
