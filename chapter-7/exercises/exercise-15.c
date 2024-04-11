#include <stdio.h>
#include <stdint.h>

int main(void)
{
	typedef int8_t Int8;
	typedef int16_t Int16;
	typedef int32_t Int32;

	Int8 var_int8;
	Int16 var_int16;
	Int32 var_int32;

	printf("Size of var_int8: %zu bits\n", sizeof(var_int8) * 8);
	printf("Size of var_int16: %zu bits\n", sizeof(var_int16) * 8);
	printf("Size of var_int32: %zu bits\n", sizeof(var_int32) * 8);

	return 0;
}
