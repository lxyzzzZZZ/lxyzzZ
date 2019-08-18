//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <sys/wait.h>
//
//int main()
//{
//	pid_t pid;
//	if ((pid = fork()) == -1)
//	{
//		perror("fork"), exit(1);
//	}
//
//	if (pid == 0)
//	{
//		sleep(25);
//		exit(10);
//	}
//	else
//	{
//		int st;
//		int ret = wait(&st);
//		if (ret > 0 && (st & 0x7F) == 0)
//		{
//			printf("child exit code : %d\n", (st >> 8) & 0xFF);
//		}
//		else if (ret > 0)
//		{
//			printf("sig code: %d\n", st & 0x7F);
//		}
//	}
//	return 0;
//}
//
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
//		return 1;
//	}
//	else if (pid == 0)
//	{
//		printf("child is run ,pid = %d\n", getpid());
//		sleep(5);
//		exit(1);
//	}
//	else
//	{
//		int status = 0;
//		pid_t ret = 0;
//		do
//		{
//			ret = waitpid(-1, &status, WNOHANG);
//			if (ret == 0)
//			{
//				printf("child is running\n");
//			}
//			sleep(1);
//		} while (ret == 0);
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