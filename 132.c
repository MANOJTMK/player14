#include <stdio.h>

int main(void) {
	char a[1000];
    int c=0,c1=0,i,s=0;
    printf("Enter the value");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    s=c*c1;
    printf("%d",s);
	return 0;
}
