#include <stdio.h>
#include <math.h>
int main()
{
int a;
int b;
int c;

scanf("%d",&a);
for (int i=1;i<=a;i++){
char d;
scanf("%D%d%s",&b,&c,&d);
if (b!=0 && c!=0) {
    printf("yes\n");

}
else{
    printf("no\n");
}

}
return 0;
}
