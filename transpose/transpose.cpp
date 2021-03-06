#include "transpose.h"
#include "../common/util.h"
//#include "malloc.h"

void transpose_tiled(double* A, double* B, int N, int tile_size) {
	for(int i = 0; i < N; i+=tile_size){
		for(int j = 0; j < N; j+=tile_size){
			for(int p = 0; p < tile_size; p++){
				for(int q = 0; q < tile_size; q++){
					B[IND(i+p, j+q, N)] = A[IND(j+q, i+p, N)];
				}
			}
		}
	}
}
