#include<stdio.h>
#include<math.h>
int main(){
    int n,s=0,a,i;
    printf("please enter the number:");
    scanf("%d",&n);
    i = n;
// Break loop if d is present as digit
	while(n>0)
	{
        
		a = n%10;
        n = n/10;
        s = s + (a*a*a);
	}
    if(i == s){
        printf("Number is armstrong:\n");
    }
     else{
        printf("not ");
     }
return 0;
}
