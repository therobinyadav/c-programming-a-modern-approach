#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	int input_hh, input_mm, minutes, dt1 = 480, dt2 = 583, dt3 = 679, dt4 = 767, dt5 = 840, dt6 = 945, dt7 = 1140, dt8 = 1305, diff1, diff2, diff3, diff4, diff5, diff6, diff7, diff8, cdt;
	char time_period_indicator;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &input_hh, &input_mm, &time_period_indicator);

	if (input_hh == 12) input_hh = 0;

	if (tolower(time_period_indicator) == 'p') {
                minutes = (12 + input_hh) * 60 + input_mm;

        } else if (tolower(time_period_indicator) == 'a') {
                minutes = input_hh * 60 + input_mm;

        } else {
                printf("Invalid time period indicator!");
                return 0;
        }

	diff1 = abs(dt1 - minutes);
	diff2 = abs(dt2 - minutes);
	diff3 = abs(dt3 - minutes);
	diff4 = abs(dt4 - minutes);
	diff5 = abs(dt5 - minutes);
	diff6 = abs(dt6 - minutes);
	diff7 = abs(dt7 - minutes);
	diff8 = abs(dt8 - minutes);
	diff8 = minutes > dt8 ? minutes - dt8 : dt8 - minutes;

	cdt = dt1;
	if (diff2 < diff1 && diff2 < diff3 && diff2 < diff4 && diff2 < diff5 && diff2 < diff6 && diff2 < diff7 && diff2 < diff8) {
		cdt = dt2;
	} else if (diff3 < diff1 && diff3 < diff2 && diff3 < diff4 && diff3 < diff5 && diff3 < diff6 && diff3 < diff7 && diff3 < diff8) {
		cdt = dt3;
	} else if (diff4 < diff1 && diff4 < diff2 && diff4 < diff3 && diff4 < diff5 && diff4 < diff6 && diff4 < diff7 && diff4 < diff8) {
                cdt = dt4;
        } else if (diff5 < diff1 && diff5 < diff2 && diff5 < diff3 && diff5 < diff4 && diff5 < diff6 && diff5 < diff7 && diff5 < diff8) {
                cdt = dt5;
        } else if (diff6 < diff1 && diff6 < diff2 && diff6 < diff3 && diff6 < diff4 && diff6 < diff5 && diff6 < diff7 && diff6 < diff8) {
                cdt = dt6;
        } else if (diff7 < diff1 && diff7 < diff2 && diff7 < diff3 && diff7 < diff4 && diff7 < diff5 && diff7 < diff6 && diff7 < diff8) {
                cdt = dt7;
        } else if (diff8 < diff1 && diff8 < diff2 && diff8 < diff3 && diff8 < diff4 && diff8 < diff5 && diff8 < diff6 && diff8 < diff7) {
                cdt = dt8;
        }

	printf("Closest departure time is ");
	switch (cdt) {
		case 480: printf("8:00 a.m., arriving at 10:16 a.m."); break;
		case 583: printf("9:43 a.m., arriving at 11:52 a.m."); break;
		case 679: printf("11:19 a.m., arriving at 1:31 p.m."); break;
		case 767: printf("12:47 p.m., arriving at 3:00 p.m."); break;
		case 840: printf("2:00 p.m., arriving at 4:08 p.m."); break;
		case 945: printf("3:45 p.m., arriving at 5:55 p.m."); break;
		case 1140: printf("7:00 p.m., arriving at 9:20 p.m."); break;
		case 1305: printf("9:45 p.m., arriving at 11:58 p.m."); break;
	}

	return 0;
}
