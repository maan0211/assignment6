#include <stdio.h>

int main(){
int n,s=0,a;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0){
    a =n%10;
    s = s+a;
    n=n/10;
}
printf("%d\n",s);
return 0;
}