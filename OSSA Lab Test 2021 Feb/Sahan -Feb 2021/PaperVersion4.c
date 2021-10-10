#include<stdio.h>
 main()

{

        int ret;

        if(ret = fork()== 0) {

                printf("I am Child\n");
                printf("Child's Parent ID : %d\n", getppid());
                sleep(10);
        }

        else {

                printf("I am Parent\n");
        }

		return 0;
}
