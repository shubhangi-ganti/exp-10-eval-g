#include<stdio.h>
#include<math.h>
int main(){
    //finding the roots of a quadratic equation
    int a,b,c,d,r1,r2;
    
    printf("enter the value of a b c in the fashion of ax^2+bx+c=0\n");
    scanf("%d %d %d",&a,&b,&c);
    
    d=(b*b)-(4*a*c);
    
    if(d>=0){
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    
    printf("the first root of the equation %dx^2+%dx+%d is  %d\n",a,b,c,r1);
    printf("the second root of the equation %dx^2+%dx+%d is  %d\n",a,b,c,r2);
    }
    else 
    {
     printf("the roots are imaginary");
    }
    return 0;
}
