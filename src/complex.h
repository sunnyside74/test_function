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
 * @brief	������ ���Ҽ� ����ü
 */
typedef struct {
	int real;			///< �Ǽ���(real)
	int img;			///< �����(imagenary)
} _COMPLEX_t;

_COMPLEX_t addComplex(_COMPLEX_t, _COMPLEX_t);
int absComplex(_COMPLEX_t);

#endif /* COMPLEX_H_ */
