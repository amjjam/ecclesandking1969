/*****************************************************************************
 * This program will create a file which contains double pairs of phim and   *
 * density.                                                                  *
 *****************************************************************************/

#include <stdio.h>
#include <math.h>

#include "../../include/ecclesandking1969.H"

int main(int argc, char *argv[]){

  ECCLESANDKING1969 model;
  
  FILE *fp=fopen("/tmp/test.dat","w");
  

  int n=1001;
  double dphi=180./(n-1);
  double phi;
  double ne;
  
  int i;

  for(i=0;i<n;i++){
    phi=-90+dphi*i;
    ne=model.getDensity(phi);
    
    fwrite(&phi,sizeof(double),1,fp);
    fwrite(&ne,sizeof(double),1,fp);
  }
  
  fclose(fp);
}

