#include<stdio.h>

int square(int);

int square(int x){
 int y;
 y = x*x;
 return y;
}


void main(){

int a = 3;
int b = 6;
int c = a+b;

int d;
d = square(c);
printf("value of c %d", c);
printf("\nsquare of c is %d",d);
}
