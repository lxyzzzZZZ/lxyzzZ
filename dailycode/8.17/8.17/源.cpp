//#include <unistd.h>
//#include <stdio.h>
//int main()
//{
//	pid_t pid;
//	printf("before: pid = %d \n", getpid());
//	if ((pid = fork()) == -1)
//	{
//		printf("errno\n");
//	}
//	printf("after: pid = %d,fork return %d\n", getpid(), pid);
//	sleep(1);
//	return 0;
//}
//
//
//#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int glob = 100;
//
//int main(void)
//{
//	pid_t pid;
//
//	printf("%d\n", glob);
//	if ((pid = vfork()) == -1)
//	{
//		exit(0);
//	}
//	if (pid == 0)
//	{
//		sleep(5);
//		glob = 200;
//		printf("child glob = %d \n", glob);
//		exit(0);
//	}
//	else
//	{
//		printf("parent glob %d\n", glob);
//	}
//
//	return 0;
//}
//i
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <sys/wait.h>
//#include <sys/wait.h>
//int main()
//{
//	pid_t pid;
//	pid = fork();
//	if (pid < 0)
//	{
//		printf("fork error\n");
//	}
//	else if (pid == 0)
//	{
//		printf("child is run ,pid = %d\n", getpid());
//	}
//	else
//	{
//		int status = 0;
//		pid_t ret = waitpid(-1, &status, 0);
//		printf(" wait \n");
//		if (WIFEXITED(status) && ret == pid)
//		{
//			printf("wait child 5s success, child return code is %d\n"
//				, WEXITSTATUS(status));
//		}
//		else
//		{
//			printf("wait child failed, return \n");
//			return 1;
//		}
//	}
//	return 0;
////}