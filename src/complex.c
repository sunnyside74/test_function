/**
 * @file	complex.c
 *
 * @date	2015. 6. 8.
 * @author	i04055dt
 */

#include	<stdio.h>
#include	<stdlib.h>
#include	<math.h>
#include	"complex.h"

/**
 * @brief	복소수 덧샘 구하는 함수
 * @param 	real	실수
 * @param 	img		복소수
 * @return	복소수 덧셈 연산 결과 값
 */
_COMPLEX_t addComplex(_COMPLEX_t param_complex_A, _COMPLEX_t param_complex_B)
{
	_COMPLEX_t result_t;

	result_t.real = param_complex_A.real + param_complex_B.real;
	result_t.img = param_complex_A.img + param_complex_B.img;

	return result_t;
}

/**
 * @brief	복소수의 절대값 구하는 함수
 * @param 	param_X	복소수의 구조체
 * @return 	입력한 복소수의 절대값
 */
int absComplex(_COMPLEX_t param_X)
{
 	int y = 0;

 	y = (int)sqrt( pow((double)param_X.real, 2) + pow( (double)param_X.img, 2) );

 	return y;
}

