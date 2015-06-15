/**
 * @file	main.c
 *
 * @date	2015. 3. 9.
 * @author	i04055dt
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "main.h"
#include "complex.h"


int main(void)
{
	_COMPLEX_t i, j, l;

	i.real = 100; i.img = 200;
	j.real = 200; j.img = 100;

	l = addComplex(i, j);			///< ���Ҽ� ���� ����

	printf("(%d + i%d) + (%d + i%d) = %d + i%d\n", i.real, i.img, j.real, j.img, l.real, l.img);
	printf("i�� ���밪 = %d\n", absComplex(i) );

	return 0;
}
