/**
 * @file	speaker_func.c
 *
 * @brief	���� ����Ŀ ���� ���� �Լ�
 *
 * @date	2015. 6. 13.
 *
 * @author	i04055dt
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define m_air(a)		( 3.33*0.000001*pow(a,3) )	///< ������ ������ ���� ����
#define M_PI			3.14159265358979323846		///< pi ������
#define TWO_PI			6.283185307179586476925286766559	///< 2*pi

/**
 * @brief
 * @param 	wd		W(D) average width of the dipole baffle\n
 * 						dipole baffle�� ���� ��հ�
 * @param 	lamda	wavelength at dipole cutoff frequency\n
 * 					dipole �������ļ������� ����
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
 * @brief	���������� ��� �Լ�
 * @param 	s		�������� ����(stiffness)
 * @param 	m		�������� ����
 * @return	���� ���ļ� ��
 */
double FreqDiaphragm(double s, double m)
{
	double f_s = 0.0;

	f_s = ( (1 / ((double)TWO_PI)) * sqrt(s/m, 2) );


	return f_s;
}

/**
 * @brief	�ְ�������ļ� ��� �Լ�
 * @param 	s_top	������ ������� �������
 * @param 	m_d		�������� ����
 * @param 	m_v		Voice Coil�� ����
 * @return	�ְ�������ļ� ��
 */
double FreqMaxDiaphragm(double s_top, double m_d, double m_v)
{
	double f_h = 0.0;

	f_h = ( (1 / ((double)TWO_PI)) * sqrt((s_top * ((1/m_d) + (1/m_v))), 2) );

	return f_h;
}
