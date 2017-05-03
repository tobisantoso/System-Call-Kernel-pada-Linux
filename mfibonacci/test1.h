#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int fibonacci(int n){
	return syscall(549,n);
}
