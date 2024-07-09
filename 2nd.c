#include<stdio.h> 
int main()
{
char s[100];
printf()
//CONDITION-1
 scanf("%s", s);
//CONDITION-2
scanf("%[^a, ^e, ^i, ^o, ^u]s",s);
// CONDITION-3
scanf("%[A, E, I,O,U,a,e,i,o,u]s", s);
printf("%s", s);
//CONDITION -4
scanf("%[A-Z]s",s);
return 0;
}