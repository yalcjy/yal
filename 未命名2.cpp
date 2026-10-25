#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    (a%400==0||(a%4==0&&a%100!=0))?printf("YES\n"):printf("NO\n");
	(b<=12&&b>=1)?printf("YES\n"):printf("NO\n"); 
    return 0;
}

