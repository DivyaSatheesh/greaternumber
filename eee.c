 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int a,b,c;
 clrscr();
 printf("Enter the values a,b,c\n");
 scanf("%d %d %d",&a &b &c);
 if((a>b)&&(a>c))
 printf("a is greater");
 if((b>c)&&(b>a))
 printf("b is greater");
 if((c>a)&&(c>b))
 printf("c is greater");
 getch();
 return 0;
 }
