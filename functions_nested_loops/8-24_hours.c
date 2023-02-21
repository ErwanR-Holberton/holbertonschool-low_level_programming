#include "main.h"

/**
 * jack_bauer - Entry point
 *
 *
 */
void jack_bauer(void)
{
	int  HOURS, hours, MINS, mins;

	for (HOURS = 0; HOURS <= 2; HOURS++)
	{
		for (hours = 0; hours <= 9 ; hours++)
		{
			if ((HOURS != 2) || (hours < 4))
			{
				for (MINS = 0; MINS <= 5 ; MINS++)
				{
					for (mins = 0; mins <= 9 ; mins++)
					{
						_putchar(HOURS + 48);
						_putchar(hours + 48);
						_putchar(':');
						_putchar(MINS + 48);
						_putchar(mins + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
