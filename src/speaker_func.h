/**
 * @file	speaker_func.h
 *
 * @brief	
 *
 * @date	2015. 6. 23.
 *
 * @author	i04055dt
 */

#ifndef SPEAKER_FUNC_H_
#define SPEAKER_FUNC_H_

int ConnerFreqDipoleEffect(int *wd, int lamda);
double SpkResonanceFreq(double s, double m);
double SpkResonanceFreq(double s, double m);
double SpkResonanceMaxFreq(double s_top, double m_d, double m_v);
double SpkDiaphragmSurfaceArea(double rad_upper, double rad_bottom, double height);



#endif /* SPEAKER_FUNC_H_ */
