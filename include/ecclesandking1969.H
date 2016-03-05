/******************************************************************************
 * This is class ECCLESANDKING1969 which implements a Gaussian approximation  *
 * to the observations listed in Eccles and King 1969 IEEE paper. The         *
 * approximation is is in the Xu Ronglan first ChangE-3 EUV image simulation  *
 * paper.                                                                     *
 ******************************************************************************/


#ifndef _ECCLESANDKING1969_H_
#define _ECCLESANDKING1969_H_

class ECCLESANDKING1969{
public:
  ECCLESANDKING1969();
  ~ECCLESANDKING1969();
private:
  double getDensity(double phim);
};

#endif
