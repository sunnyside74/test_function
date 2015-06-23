/**
 * @file	complex.h
 *
 * @brief	
 *
 * @date	2015. 6. 8.
 *
 * @author	i04055dt
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

/**
 * @brief	정수형 복소수 구조체
 */
typedef struct {
	int real;			///< 실수부(real)
	int img;			///< 허수부(imagenary)
} _COMPLEX_t;

_COMPLEX_t addComplex(_COMPLEX_t, _COMPLEX_t);
int absComplex(_COMPLEX_t);

#endif /* COMPLEX_H_ */
