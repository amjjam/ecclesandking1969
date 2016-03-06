/******************************************************************************
 * This is class ECCLESANDKING1969 which implements a Gaussian approximation  *
 * to the observations listed in Eccles and King 1969 IEEE paper. The         *
 * approximation is is in the Xu Ronglan first ChangE-3 EUV image simulation  *
 * paper.                                                                     *
 ******************************************************************************/

#include "../include/ecclesandking1969.H"

/*=============================================================================
  ECCLESANDKING1969() - constructor
  ============================================================================*/
ECCLESANDKING1969::ECCLESANDKING1969(){
  a1=12.55e5;
  b1=8.35;
  c1=7.99;
  a2=12.55e5;
  b2=8.36;
  c2=7.99;
  k=1;
}


/*=============================================================================
  ~ECCLESANDKING1969() - destructor
  ============================================================================*/
ECCLESANDKING1969::~ECCLESANDKING1969(){
  
}


/*=============================================================================
  double getDensity(double phim) - return density in electrons per cm^-3

  double phim - magnetic latitude in degrees
  ============================================================================*/
double ECCLESANDKING1969::getDensity(double phim){
  double dphi1=(phim-b1);
  double dphi2=(phim+b2);
  return a1/k*exp(-dphi1*dphi1/c1/c1)+a2/k*exp(-dphi2*dphi2/c2/c2);
}

