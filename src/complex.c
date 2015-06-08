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
 * @brief	���Ҽ� ���� ���ϴ� �Լ�
 * @param 	real	�Ǽ�
 * @param 	img		���Ҽ�
 * @return	���Ҽ� ���� ���� ��� ��
 */
_COMPLEX_t addComplex(_COMPLEX_t param_complex_A, _COMPLEX_t param_complex_B)
{
	_COMPLEX_t result_t;

	result_t.real = param_complex_A.real + param_complex_B.real;
	result_t.img = param_complex_A.img + param_complex_B.img;

	return result_t;
}

/**
 * @brief	���Ҽ��� ���밪 ���ϴ� �Լ�
 * @param 	param_X	���Ҽ��� ����ü
 * @return 	�Է��� ���Ҽ��� ���밪
 */
int absComplex(_COMPLEX_t param_X)
{
 	int y = 0;

 	y = (int)sqrt( pow((double)param_X.real, 2) + pow( (double)param_X.img, 2) );

 	return y;
}

