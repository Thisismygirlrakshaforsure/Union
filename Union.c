#include<stdio.h>
#include<conio.h>
union person
{
int id;
char name [50];
}
obj;
void main()
{
  clrscr();
obj.id=15;
print("\n id=%d",obj.id);
obj.name="Raksha Adhikari";
printf("\n Name=%s", obj.name);
getch();
}
