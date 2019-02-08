#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the no");
    scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
   if(a>c)
     { 
    printf("%d",a);
     }

else 
printf("%d",c);
}
else
   printf("%d",b);
   
}
