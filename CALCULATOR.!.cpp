#include<stdio.h>
int main(){

    int num1, num2, choice, sum, subtr, multi, div;
    
    
    do {
    	printf("Choose an Operation (1. ADDITION 2. SUBTRACTION 3. MULTIPLICATION 4. DIVISION 5. EXIT) : ");
    	printf("Enter Your choice : ");
    	scanf("%d", &choice);
    	
    	if (choice>=1 && choice<=4)
		{
             printf("Enter Your NUM 1 : ");
    	     scanf("%d", &num1);
    	     printf("Enter Your NUM 2 : ");
    	     scanf("%d", &num2);
		 switch (choice){
		 	
		 	case 1:
		 		sum = num1+num2;
		 		printf("\nThe SUM OF %d and %d is %d\n", num1,num2,sum);break;
		 	
		 	case 2:
		 		subtr = num1-num2;
		 		printf("\nThe SUBTRACTION OF %d and %d is %d\n", num1,num2,subtr);break;
		 	
		 	case 3:
		 		multi = num1*num2;
		 		printf("\nThe MULTIPLICATION OF %d and %d is %d\n", num1,num2,multi);break;
		 	
		 	case 4:
		 	if (num2!=0){
		 		div = num1/num2;
		 		printf("\nThe DIVISION OF %d and %d is %d\n", num1,num2,div);break;
			 }
			 else {
			 	printf("\nDIVIDE BY ZERO IS INFINITY.");
			 }
			 break;
			 case 5:
				printf("\nExit.");break;
	
		 		
		 }  
		}
		
	}while(choice!=5);
	return 0;
}
