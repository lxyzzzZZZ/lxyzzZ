#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//获取命令行
//解析命令行
//建立一个子进程（fork)
//替换进程（execvp）
//父进程等待子进程退出

char * argv[8];
int argc = 0;

void do_parse(char *buf)
{
	int i;
	int status = 0;
	for (argc = i = 0; buf[i]; i++)
	{
		if (!isspace(buf[i]) && status == 0)
		{
			argv[argc++] = buf + i;
			status = 1;
		}
		else if (isspace(buf[i]))
		{
			status = 0;
			buf[i] = 0;
		}
	}
	argv[argc] = NULL;
}

void do_execute(void)
{
	pid_t pid = fork();

	switch (pid)
	{
	case -1:
		perror("fork");
		exit(EXIT_FAILURE);
		break;
	case 0:
		execvp(argv[0], argv);
		perror("execvp");
		exit(EXIT_FAILURE);
	default:
	{
		int st;
		while (wait(&st) != pid);
	}
	}
}

int main()
{
	char buf[1024] = {};
	while (1)
	{
		printf("myshell > ");
		scanf("%[^\n]%*c", buf);
		do_parse(buf);
		do_execute();
	}
	return 0;