# include <stdio.h>
# include <math.h>

int add(int a,int b,int c,int d)
{
  int sum = a+b+c+d;
  return sum;
}
int main()
{
  int a,b,c,d,sum;
  printf("input four numbers for addition: ");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  sum = add(a,b,c,d)
  printf("the sum of four numbers is %d+ %d + %d +%d =%d",a,b,c,d,sum);
  return 0;
}
