#include <linux/kernel.h>

int shared_flag = 0;

asmlinkage long sys_delegation_poll(const struct pt_regs *pt)
{
    if(shared_flag != 0)
    {
        shared_flag = 0;
    }

    return shared_flag;
}