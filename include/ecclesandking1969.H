/******************************************************************************
 * This is class ECCLESANDKING1969 which implements a Gaussian approximation  *
 * to the observations listed in Eccles and King 1969 IEEE paper. The         *
 * approximation is is in the Xu Ronglan first ChangE-3 EUV image simulation  *
 * paper.                                                                     *
 ******************************************************************************/


#ifndef _ECCLESANDKING1969_H_
#define _ECCLESANDKING1969_H_

#include <math.h>

class ECCLESANDKING1969{
public:
  ECCLESANDKING1969();
  ~ECCLESANDKING1969();
  double getDensity(double phim);
private:
  double a1;
  double b1;
  double c1;
  double a2;
  double b2;
  double c2;
  double k;
};

#endif
