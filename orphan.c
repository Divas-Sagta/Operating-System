#include<stdio.h>
#include <unistd.h>
int main(){
      int x=fork();
      if(x==0){
        printf("This is child process\n");
        printf("This is a orphan process\n");
       }
      else{
         sleep(2);
         printf("This is parent process\n");
      }   
 }