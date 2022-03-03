#include<stdio.h>
typedef struct _fraction
{
  int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
    return f;
}
int gcd(int a,int b)
{
  int t;
    while(b != 0)
  {
     t = b;
     b = a%b;
     a = t;
  }
    return a;
}
Fraction add(Fraction f1,Fraction f2,Fraction sum)
{
  sum.num=f1.num*f2.den + f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
void output(Fraction f1,Fraction f2,Fraction sum)
{
  printf("the sum of fraction %d/%d and %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}

int main()
{
  Fraction f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add(f1,f2,sum);
  output(f1,f2,sum);
  return 0;
}

