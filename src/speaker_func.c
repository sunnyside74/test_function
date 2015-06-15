/**
 * @file	speaker_func.c
 *
 * @brief	라우드 스피커 설계 관련 함수
 *
 * @date	2015. 6. 13.
 *
 * @author	i04055dt
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define m_air(a)		( 3.33*0.000001*pow(a,3) )	///< 진동판 내부의 공기 질량
#define M_PI			3.14159265358979323846		///< pi 원주율
#define TWO_PI			6.283185307179586476925286766559	///< 2*pi

/**
 * @brief
 * @param 	wd		W(D) average width of the dipole baffle\n
 * 						dipole baffle의 폭의 평균값
 * @param 	lamda	wavelength at dipole cutoff frequency\n
 * 					dipole 차단주파수에서의 파장
 * @return
 */
int ConnerFreqDipoleEffect(int *wd, int lamda)
{
	int value;

	value = 2/lamda;

	*wd = value;

	return 0;

}

/**
 * @brief	공명진동수 계산 함수
 * @param 	s		지지계의 강성(stiffness)
 * @param 	m		진동계의 질량
 * @return	공명 주파수 값
 */
double FreqDiaphragm(double s, double m)
{
	double f_s = 0.0;

	f_s = ( (1 / ((double)TWO_PI)) * sqrt(s/m, 2) );


	return f_s;
}

/**
 * @brief	최고공명주파수 계산 함수
 * @param 	s_top	진동판 정상부의 강성계수
 * @param 	m_d		진동판의 질량
 * @param 	m_v		Voice Coil의 질량
 * @return	최고공명주파수 값
 */
double FreqMaxDiaphragm(double s_top, double m_d, double m_v)
{
	double f_h = 0.0;

	f_h = ( (1 / ((double)TWO_PI)) * sqrt((s_top * ((1/m_d) + (1/m_v))), 2) );

	return f_h;
}
