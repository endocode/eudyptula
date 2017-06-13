/* 
 *  hello.c - The most useful kernel module ever. It's true.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

static int __init hello_init(void)
{
	printk(KERN_DEBUG " _________\n|         |\n|  Hello  |\n|  World! |\n|_________|\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_DEBUG " _________\n|        /|\n| Goodbye |\n|  World! |\n|/________|\n");
}

module_init(hello_init);
module_exit(hello_exit);
