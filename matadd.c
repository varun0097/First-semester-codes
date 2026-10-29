#include <stdio.h> 

int main() {
	int r, c, i, j;
	printf("Enter rows and columns: ");
	scanf("%d %d", &r, &c);
	int sensor1[r][c], sensor2[r][c], result[r][c];
	
	printf("Enter Co-ords for Sensor1: \n"); 
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			scanf("%d", &sensor1[i][j]);
			
	}
	
	printf("\nSensor1 Co-ords:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf(" %d ", sensor1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Enter Co-ords for Sensor2: \n");  
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++)
				scanf(" %d ", &sensor2[i][j]); 
	} 
	
	printf("\nMatrix2:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf(" %d ", sensor2[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nResultant Co-ordinates:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			result[i][j] = sensor1[i][j] + sensor2[i][j];
			printf(" %d ", result[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
		
			
