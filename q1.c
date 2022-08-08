// find the factorial of any number
#include <stdio.h>
long factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
int a ;
long fact = factorial(a);
printf("Please enter the number:");
scanf("%d",&a);
printf("The value of factorial %d is %ld\n",a,fact);
return 0;
}