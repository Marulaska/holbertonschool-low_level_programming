#include "main.h"
/**
* jack_bauer - check the code
* h:hours m: minutes
*
*/
void jack_bauer(void)
{
	int hour = 0, minute = 0;

	while (hour < 24)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
		minute++;
		if (minute == 60)
		{
			minute = 0;
			hour++;
		}
	}
}
