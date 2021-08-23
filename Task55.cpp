#include <stdio.h>	
struct course{
	float credit_Hours;
	float Student_Score;
};
struct student{
	char courses[][20];
	float GPA;
};
int main(){
	struct course mathematics;
	mathematics.credit_Hours =3;
	float y;
	printf("Enter your mathematics score:\n");
	scanf("%f", y);
	mathematics.Student_Score=y;
	
	struct course programming;
	programming.credit_Hours =4;
	float x;
	printf("Enter your programming score:\n");
	scanf("%f", x);
	programming.Student_Score=x;
	float credit_total=7;
	float total=12+(x*y);
	float GPA=total/credit_total;
	printf("GPA is %f",GPA);
return 0;	
	
}
