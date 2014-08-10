#include<stdio.h>
#include<sys/types.h>
int main()
{
char cmd[20];
pid_t pid;
int ch;
pid=vfork();
if(pid==0)
{
do{
printf("enter command to be executed: ");
gets(cmd);
system(cmd);
printf("enter 1 to continue n 0 to exit: ");
scanf("%d",&ch);
}while(ch!=0);
}
wait();
return 0;
}
