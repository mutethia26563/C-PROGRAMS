//Name:Mutethia wycliffe kathuku
//Reg no: CT101/G/26563/25
//Desription:Data bundle purchase
#include<stdio.h>include 
int main() {
	int choice;
	printf("select data bundle\n");
	printf("1. 100Mb KES 50\n");
	printf("2. 500Mb KES 200\n");
	printf("3. 1Gb KES 350\n");
	printf("4. 2Gb KES 600");
	
	printf("\nEnter your choice(1-4)\t");
	scanf("%d",&choice);
	
	switch(choice) {
		case 1:
printf("\nyou selected 100Mbs. cost = KES 50\n");
break;
case 2:
printf("\nyou selected 500Mbs. cost = KES 200\n");
break;
case 3:
printf("\nyou selected 1Gb. cost = KES 350\n");
break;
case 4:
printf("\nyou selected 2Gb. cost = KES 600");
break;
default:
printf("\nInvalid choice!!");
break;
	}
	return 0;
}				
		
		
		
		
		
		
	
	
	
	
	
	
	