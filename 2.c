#include<stdio.h>
#include<conio.h>
struct complexcal
{
    int real;
    int imag;
};
void func(int,int,int,int);
int main()
{
   struct complexcal com1,com2;
   printf("Enter first complex number real and imaginary values.\n");
   scanf("%d%d",&com1.real,&com1.imag);
   printf("Enter second complex number real and imaginary values.\n");
   scanf("%d%d",&com2.real,&com2.imag);
   func(com1.real,com2.real,com1.imag,com2.imag);
    getch();
}
void func(int r1,int r2,int i1,int i2)
{
    printf("Addition of complex numbers = (%d)+i(%d)\n",r1+r2,i1+i2);
    printf("Substraction of complex numbers = (%d)+i(%d)\n",r1-r2,i1-i2);
    printf("Multiplication of complex numbers = (%d)+i(%d)\n",(r1*r2)-(i1*i2),(r1*i2)+(r2*i1));
}

