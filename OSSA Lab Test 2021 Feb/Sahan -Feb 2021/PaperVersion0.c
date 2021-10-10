#include<stdio.h>
  
main() {

        int ret;

        ret = fork();
        if(ret == 0) {

                printf("I am Child \n");
                printf("Child ID :%d\n",getpid());
                printf("Child's Parent ID : %d\n", getppid());
        }

        else{

                printf("I am Parent\n");
                printf("Parent ID : %d\n",getppid());
                printf("Parent's Child ID : %d\n",getpid());
                while(1);
                wait(100);
        }
	
	return 0;
}