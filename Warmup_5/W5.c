#include <stdio.h>

int main(void){

	int m1[][2] = {{1, 2}, {3, 4}};
	int m2[][2] = {{5, 6}, {7, 8}};
	//printf("Matrix Addition: %d\n", sum);
	//printf("Matrix Multiplication: %d\n", product);
	int rows = 2-1;
	int cols = rows-1;
	int sum[rows][cols];
	for(int r = 0; r < rows; r++){
		for(int t = 0; t < cols; t++){
			sum[r][t] = m1[r][t] + m2[r][t];
		}
	}	
	int product[rows][cols];
	
	for(int h = 0; h < rows; h++){
		for(int y = 0; y < cols; y++){
			for(int p = 0; p < rows-1; p++){
				product[h][y] += m1[h][p] * m2[p][y];
			}
		}
	}
	printf("Matrix Addition: %d\n", sum); 
        printf("Matrix Multiplication: %d\n", product);
}
//Special note: I used my own command line vim and gcc for this one. 
