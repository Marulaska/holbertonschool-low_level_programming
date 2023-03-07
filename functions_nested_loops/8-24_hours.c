#include "main.h"
/**
* jack_bauer_day - check the code
* h:hours m: minutes
*
*/
void jack_bauer_day(void)
{
	int hour = 0, minute = 0;

	while (hour < 24)
	{
	putchar((hour / 10) + '0');
	putchar((hour % 10) + '0');
	putchar(':');
	putchar((minute / 10) + '0');
	putchar((minute % 10) + '0');
	putchar('\n');
	minute++;
	if (minute == 60)
		{
		minute = 0;
		hour++;
		}
	}
}
