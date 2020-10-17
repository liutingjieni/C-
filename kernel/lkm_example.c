/*************************************************************************
	> File Name: hello.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年10月17日 星期六 14时43分36秒
 ************************************************************************/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
static int __init lkm_example_init(void)
{
    printk("helloworld!\n");
    return 0;
}

static void __exit lkm_example_exit(void)
{
    printk("Goodbye!\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);


