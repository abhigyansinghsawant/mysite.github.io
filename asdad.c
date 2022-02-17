#include <stdio.h>
int main()
{
int a;
int b;
int c;

scanf("%d",&a);
for (int i=1;i<=a;i++){
char d;
scanf("%d%d%s",&b,&c,&d);
if (b==0||c==0) {
    printf("no\n");

}
else if(b==0 && c==0){
    printf("no");
}
else{
    printf("yes\n");
}

}
return 0;
}

