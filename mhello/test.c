#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(){

long int test = syscall(548);
printf("Tobi Santoso (14115029)\n");
printf("Jefri \n");
printf("Benyamin Tupang\n");
printf("sys_hello output : %ld\n", test);
return 0;
}
