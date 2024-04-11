#include <stdio.h>

int main(void)
{
	int hours, minutes, dt1 = 480, dt2 = 583, dt3 = 679, dt4 = 767, dt5 = 840, dt6 = 945, dt7 = 1140, dt8 = 1305, diff1, diff2, diff3, diff4, diff5, diff6, diff7, diff8, cdt;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);

	minutes = hours * 60 + minutes;
	
	diff1 = minutes > dt1 ? minutes - dt1 : dt1 - minutes;
	diff2 = minutes > dt2 ? minutes - dt2 : dt2 - minutes;
	diff3 = minutes > dt3 ? minutes - dt3 : dt3 - minutes;
	diff4 = minutes > dt4 ? minutes - dt4 : dt4 - minutes;
	diff5 = minutes > dt5 ? minutes - dt5 : dt5 - minutes;
	diff6 = minutes > dt6 ? minutes - dt6 : dt6 - minutes;
	diff7 = minutes > dt7 ? minutes - dt7 : dt7 - minutes;
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
