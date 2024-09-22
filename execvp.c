#include<stdio.h>
#include<unistd.h>
void main()
{
 printf("Tanisha Narayan Shanbhag\n1AY23AI130\n");
 char *cmnd="ls";
 char *arg_list[]={"ls","-l",NULL};
 printf("Before execvp()\n");
 int status=execvp(cmnd,arg_list);
 printf("Status:%d\n",status);
}

