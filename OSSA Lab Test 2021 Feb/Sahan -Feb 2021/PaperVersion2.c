#include<stdio.h>
  
 main() {


        int ret;
        ret = fork();

        if(ret == 0)
        {

                printf("I am Child\n");
                printf("Child's Parent ID : %d\n", getppid());

        }

        else {

                printf("I am Parent\n");
                while(1);
                sleep(100);

        }




 }