#include<stdio.h>
int main(){
    int u=7;
    int v=8;
    int w=9;
    int perimeter;
    printf("Enter three sides of triangle:");
    scanf("%d %d %d",&u,&v,&w);
    perimeter = u+v+w;
    printf("perimeter of triangle = %d",perimeter);
    return 0;
}