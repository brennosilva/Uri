#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,l;
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    scanf("%d %d %d %d %d", &g,&h,&i,&j,&l);
    if(a==g || b==h || c==i || d==j || e==l){
		printf("N\n");
	}
    else printf("Y\n");
    return 0;
}