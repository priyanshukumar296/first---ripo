#include <stdio.h>
int main()
{
    int l;
    printf("Enter the length ");
    scanf("%d",&l);
    int b;
    printf("Enter the breadth ");
    scanf("%d",&b);
    int a = l*b;
    int p = 2* (l+b);
    if(a>p){
        printf("area is grater then perimeter");
    }
    if(a<p){
        printf("Area is not greater then perimeter");
        
    }
    if(a==p){
        printf("Area equal to perimeter ");
        
    }
    
    
    return 0;
}