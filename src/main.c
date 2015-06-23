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
#include "speaker_func.h"


int main(void)
{
	_COMPLEX_t i, j, l;
	double radious_upper = 0.0;
	double radious_bottom = 0.0;
	double height = 0.0;
	double area = 0.0;


	i.real = 100; i.img = 200;
	j.real = 200; j.img = 100;

	l = addComplex(i, j);			///< 복소수 덧셈 예제

	printf("(%d + i%d) + (%d + i%d) = %d + i%d\n", i.real, i.img, j.real, j.img, l.real, l.img);
	printf("i의 절대값 = %d\n", absComplex(i) );

	scanf("%lf, %lf, %lf", &radious_upper, &radious_bottom, &height);
	area = SpkDiaphragmSurfaceArea(radious_upper, radious_bottom, height);
	printf("표면적 = %lf\n", area);


	return 0;
}
