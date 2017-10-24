#include<stdio.h>
main()
{
int a,b,c;

printf("enter the first word");
scanf("%d",&a);
printf("enter the second word");
scanf("%d",&b);
printf("enter the third word");
scanf("%d",&c);

if(a>b&&a>c)
{printf("the greatest word is=%d",a);
}

else
{
if(b>a&&b>c)
{
printf("the greatest word is=%d",b);
}
else
{
printf("the greatest word is=%d",c);
}
}

}
