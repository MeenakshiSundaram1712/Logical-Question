#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
for(int a=0;a<t;a++)
{
int n;
int c;
int m;
scanf("%d %d %d",&n,&c,&m);
int wrapper;
wrapper=n/c;
int count;
count=wrapper;
while(wrapper>=m)
{
wrapper-=m;
count ++;
wrapper++;
}
printf("%d\n",count);
}
return 0;
}
