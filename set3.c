
 #include <stdio.h>
 
int main()
{
  char ch;
  int n;
 
  printf("Enter a character\n");
  scanf("%c", &ch);
 if(n<0 || n>0)
 {
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
   {
       printf("%c is a vowel.\n", ch);
   }
  else
    printf("%c is a constant \n", ch);
    
} 
else
printf("invalid");
  return 0;
}
