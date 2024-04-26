#include <unp.h>
#include <cstdarg>

/**
 * @brief 内部函数，处理错误消息的实际打印
 *
 * 该函数将错误消息格式化后输出到标准错误流。如果 errnoflag 为真，
 * 则将错误码的描述字符串追加到错误消息中。
 *
 * @param errnoflag 错误标志，为真表示追加错误码描述
 * @param error 错误码
 * @param fmt 格式化字符串
 * @param ap 可变参数列表
 */
static void err_doit(int errnoflag, int error, const char* fmt, va_list ap)
{
	char buf[MAXLINE];
	vsnprintf(buf, MAXLINE - 1, fmt, ap); // 根据 fmt 格式化字符串

	if (errnoflag)
	{
		snprintf(buf + strlen(buf), MAXLINE - 1 - strlen(buf), ": %s", strerror(error));
	}
	strcat(buf, "\n"); // 将换行字符 (\n) 追加到 buf 的末尾
	fflush(stdout);
	fputs(buf, stderr);
	fflush(nullptr);
}

/**
 * @brief 打印错误消息并终止程序执行
 *
 * 打印错误消息并终止程序的执行。该函数接受一个格式化字符串和可变参数列表，
 * 将错误消息格式化后输出到标准错误流，并调用 exit(1) 终止程序的执行。
 *
 * @param fmt 格式化字符串
 * @param ... 可变参数列表
 */
void err_quit(const char* fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	err_doit(1, errno, fmt, ap);
	va_end(ap);
	exit(1); // 终止程序的执行
}

/**
 * @brief 打印错误消息
 *
 * 打印错误消息但不终止程序的执行。该函数接受一个格式化字符串和可变参数列表，
 * 将错误消息格式化后输出到标准错误流。
 *
 * @param fmt 格式化字符串
 * @param ... 可变参数列表
 */
void err_msg(const char* fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	err_doit(1, errno, fmt, ap);
	va_end(ap);
}
