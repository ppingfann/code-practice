#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/sched.h>

static int __init lkp_init(void)
{
  printk("<1>Hello,World!from the kernel space...\n");
  struct task_struct *task,*p;
  struct list_head *pos;
  int count = 0;
  task = &init_task;
  list_for_each(pos,&task->tasks)
            {
            p = list_entry(pos,struct task_struct,tasks);
            count++;
            printk("%d--->%s\n",p->pid,p->comm);
            }
  printk("the number of process is:%d\n",count);
  return 0;
}

static void __exit lkp_cleanup(void)
{
  printk("<1>Goodbye,World!leaving kernel space...\n");
}
 
module_init(lkp_init);
module_exit(lkp_cleanup);
MODULE_LICENSE("GPL");

