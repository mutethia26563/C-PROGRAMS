/*
Name:Mutethia wycliffe kathuku
Reg No:CT101/G/26563/25
Description:final exam eiigibility
*/
#include <stdio.h>
int main() {
    float attendance, averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    }
	 else {
        printf("Not eligible.\n");
    }

    return 0;
}
	
	
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	