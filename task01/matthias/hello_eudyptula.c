/*
 *  hello_eudyptula.c
 *
 *  A simple "hello world" module for task01.
 *
 */

#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */


/* Avoid "module license 'unspecified' taints kernel." message  */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Matthias Schmitz");
MODULE_DESCRIPTION("This modules is for demonstration purpose only. And for fun.");


static int __init init_hello(void)
{
	printk(KERN_DEBUG "Hello World!\n");
	return 0;
}

static void __exit cleanup_hello(void)
{
	printk(KERN_DEBUG "Goodbye World.\n");
}


module_init(init_hello);
module_exit(cleanup_hello);
