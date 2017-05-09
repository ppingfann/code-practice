#include<linux/module.h>
#include<linux/fs.h>
#include<linux/init.h>
#include<linux/list.h>
#include<linux/spinlock.h>
#include<linux/kdev_t.h>


static int __init my_init(void)
{
  struct super_block *sb;
  struct list_head *pos;
  struct list_head *linode;
  struct inode *pinode;
  unsigned long long count = 0;
  
  printk("\nPrint some fileds of super_blocks:\n");
  spin_lock(&sb_lock);
  list_for_each(pos,&super_blocks) {
    sb = list_entry(pos,struct super_block,s_list);
    printk("dev_t:%d:%d",MAJOR(sb->s_dev),MINOR(sb->s_dev);
    printk("file_type name:%s\n",sb->s_type->name);
    list_for_each
