#include <stdio.h>
int main()
{
	// your code goes here
	
	int s,d,dis,t,p;
	printf("enter the source");
	printf("enter the destination");
	scanf("%d",&s);
    scanf("%d",&d);
    dis=d-s;
if(dis>0)
{
	printf("choose the type\n");
	printf("1.mini\n2.micro\n3.prime\n");
	scanf("%d",&t);
	switch(t)
{
    case 1:
      p=dis*2;
	  printf("the amount is %d",p);
       break;
        
        case 2:
      p=dis*5;
	  printf("the amount is %d",p);
       break;
       
        case 3:
      p=dis*7;
	  printf("the amount is %d",p);
       break;
}
	return 0;
}
}
