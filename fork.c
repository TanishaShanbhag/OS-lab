#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
 printf("Tanisha Narayan Shanbhag\n1AY23AI130\n");
 pid_t p=fork();
 if(p==0){
          printf("Child process");
 }    
else{
          printf("Parent process");
          wait(NULL);
          printf("Child has terminated");
       }
 printf("BYE");
}
 
 

