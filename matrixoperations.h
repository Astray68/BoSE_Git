#ifndef  H_MATRIXOPERATIONS
#define H_MATRIXOPERATIONS
typedef float TMATRIX[4][4];
typedef TMATRIX *PMATRIX;
extern int GAN(char*,PMATRIX);
extern float PLUS(PMATRIX, int);
extern float MIN(PMATRIX, int);
extern float MAX(PMATRIX, int);
#endif