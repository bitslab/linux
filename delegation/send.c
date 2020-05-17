#include <linux/kernel.h>

extern int shared_flag;

asmlinkage long sys_delegation_send(const struct pt_regs *pt)
{
    if(shared_flag != 1)
    {
        shared_flag = 1;
    }

    return shared_flag;
}