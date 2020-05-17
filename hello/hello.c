#include <linux/kernel.h>

asmlinkage long sys_hello_test(const struct pt_regs *pt)
{
        printk("Hello world\n");
        return 0;
}