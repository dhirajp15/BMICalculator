#include <stdio.h>
#include <stdlib.h>


float getBMI(int height_inches , int weight_lbs)
{
	return(((float)weight_lbs/(float)(height_inches*height_inches))*703);
}

int main(int argc , char* argv[])
{
	if (argc < 3)
	{
		printf("Provide arguments : Height(inches) Weight(lbs) \n Eg. BMI 70 180 \n");
		return -1;
	}
	int height_inches = atoi(argv[1]);
	int weight_lbs = atoi(argv[2]);
	float bmi = getBMI(height_inches, weight_lbs);
	printf("BMI for %d feet %d inches height , %d lbs weight is %f\n" , (int)height_inches/12, (int)(height_inches%12), weight_lbs, bmi);
	return 0;
}


