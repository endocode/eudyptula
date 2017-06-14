Matthias' solution
==================
As recommended in *Documentation/process/coding-style.rst* i used
*scripts/Lindent* to indent the file.

Following the rule from chapter 3 *Placing Braces and Spaces* :
*"Do not unnecessarily use braces where a single statement will do."* i removed
the curly braces from the statement

::

	if (y < 10)
		// That was a long sleep, tell userspace about it
		printk("We slept a long time!");
