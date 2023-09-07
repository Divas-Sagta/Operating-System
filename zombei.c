#include<stdio.h>
#include <unistd.h>
int main(){
      int x=fork();
      if(x==0){
        sleep(2);
        printf("This is child process\n");  
       }
      else{
       printf("This is parent process\n");
       printf("This is a zombei process");
       }   
  }