/*
 *  hello_eudyptula.c
 *
 *  A simple "hello world" module for task01.
 *
 *  See http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html#HELLO2
 *
 */

#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */
#include <linux/usb.h>		/* Needed for all the usb stuff */
#include <linux/hid.h>		/* Needed for USB_INTERFACE_... */

/* Avoid "module license 'unspecified' taints kernel." message  */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Matthias Schmitz");
MODULE_DESCRIPTION
    ("This modules is for demonstration purpose only. And for fun.");

/* Table of devices that work with this driver.
 *  Documentation/output/driver-api/usb/writing_usb_driver.html
 */
static struct usb_device_id hello_table [ ] = {
	{ USB_INTERFACE_INFO(USB_INTERFACE_CLASS_HID,
		USB_INTERFACE_SUBCLASS_BOOT,
		USB_INTERFACE_PROTOCOL_KEYBOARD) },
	{ } /* Terminating entry */
};
MODULE_DEVICE_TABLE (usb, hello_table);


/* function to call when a device is plugged into the system */
int hello_probe(struct usb_interface *intf,const struct usb_device_id *id)
{
	printk(KERN_DEBUG "keyboard plugged in\n");
	return 0;
}

/* function to call when a device is removed from the system */
static void hello_disconnect(struct usb_interface *intf)
{
	printk(KERN_DEBUG "keyboard removed\n");
}


/*     identifies USB interface driver to usbcore
 *
 */
static struct usb_driver hello_driver = {
	.name = "hello_eudyptula",
	.id_table = hello_table,
	.probe = hello_probe,
	.disconnect = hello_disconnect,
};

static int __init init_hello(void)
{
	int result;

	printk(KERN_DEBUG "Hello World!\n");

	/* register this driver with the USB subsystem */
	result = usb_register(&hello_driver);
	if (result)
		printk("usb_register failed. Error number %d", result);
	return result;
}

static void __exit cleanup_hello(void)
{
	printk(KERN_DEBUG "Goodbye World.\n");
	/* deregister this driver with the USB subsystem */
	usb_deregister(&hello_driver);
}

module_init(init_hello);
module_exit(cleanup_hello);
