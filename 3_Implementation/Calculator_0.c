/**
 * @file Calculator_0.c
 * @author Rakesh.S (srakeshscsr@gmail.com)
 * @brief This C File Contains The Main Function
 * Included Both Build-In And User-Defined Header Files 
 * @version 0.1
 * @date 2022-04-01
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "Calculator_Main_0.h"
#include "unity.h"
/**
 * @brief setup Function Belongs To Unity Package
 */
void setUp(void)
{

}
/**
 * @brief teardown Function Belongs To Unity Package
 */
void tearDown(void)
{

}
/**
 * @brief Main Function
 * 
 * @return int 
 */
int main()
{
		UnityBegin(NULL);
		RUN_TEST(addition_Test);
		RUN_TEST(subtraction_Test);
		RUN_TEST(multiplication_Test);
		RUN_TEST(division_Test);
		RUN_TEST(modulo_Test);
		RUN_TEST(power_Test);
		RUN_TEST(factorial_Test);
		RUN_TEST(squareroot_Test);
		RUN_TEST(cuberoot_Test);
		RUN_TEST(lcm_Test);
		RUN_TEST(gcd_Test);
		RUN_TEST(greater_Test);
		RUN_TEST(smaller_Test);
		RUN_TEST(dollar_Test);
		RUN_TEST(combination_Test);
		RUN_TEST(permutation_Test);
		UnityEnd();
	printf("													\n");
	printf("**********POWER ON***********\n");
	printf("***********************************\n");
	printf("*        CALCULATOR MODES         *\n");
	printf("***********************************\n");
	printf("*                                 *\n");
    printf("*  General                 ...  1 *\n");
    printf("*  Consecutive Operations  ...  2 *\n");
    printf("*  Quadratic               ...  3 *\n");
    printf("*  Combination             ...  4 *\n");
    printf("*  Permutation             ...  5 *\n");
	printf("*  PowerOff                ... 6-9*\n");
    printf("***********************************\n");
    printf("													\n");
	printf("**********************************\n");
	printf("*       Available Operators      *\n");
	printf("**********************************\n");
	printf("*  Addition       --->     +     *\n");
    printf("*  Subtraction    --->     -     *\n");
    printf("*  Multiplication --->     *     *\n");
    printf("*  Division       --->     /     *\n");
	printf("*  Modulo         --->     M     *\n");
    printf("*  Exponent       --->     ^     *\n");
    printf("*  Factorial      --->     !     *\n");
    printf("*  SquareRoot     --->     S     *\n");
    printf("*  CubeRoot       --->     C     *\n");
	printf("*  Lcm            --->     L     *\n");
	printf("*  Gcd            --->     G     *\n");
	printf("*  Max            --->     >     *\n");
	printf("*  Min            --->     <     *\n");
    printf("**********************************\n");
	char temp='0'; 
	double *values=malloc(3 * sizeof(*values)); 
	if(values!=NULL)	
	{
		int *intvalues=malloc(2 * sizeof(*intvalues)); 
		if(intvalues!=NULL)
		{
			char *operator=malloc(2 * sizeof(*operator)); 
			if(operator!=NULL)
			{
				int modes=0,flag=0;	
    			printf("Choose The Mode You Want (Enter Number)....\n");
				scanf("%d",&modes);
				printf("******************\n");
				if(modes==1)
				{
					printf("Operator (From The Available List): ");
					scanf("\n%c",operator);
					double result=0;
					printf("Enter The Values....\n");
					while(1)
					{
						switch((*operator))
						{
							case '+': scanf("%lf %lf",(values+0),(values+1));
								   result=addition(values); 
						 		   break;
							case '-': scanf("%lf %lf",(values+0),(values+1));
				  					result=subtraction(values); 
				  					break; 	
							case '*': scanf("%lf %lf",(values+0),(values+1));
				  					result=multiplication(values); 
				  					break;
   							case '/': scanf("%lf %lf",(values+0),(values+1));
									result=division(values); 
				  					break;
 							case 'M': scanf("%d %d",(intvalues+0),(intvalues+1));
				 					result=(double) modulo(intvalues); 
				 					break;
							case '^': scanf("%lf %lf",(values+0),(values+1));
				  					result=power(values); 
				  					break;
							case '!': scanf("%lf",(values+0));
					 			 	result=factorial(values);
			     	 				break;
							case '>': scanf("%lf %lf",(values+0),(values+1));
				  					result=greater(values);
				  					break;
							case '<': scanf("%lf %lf",(values+0),(values+1));
							 		result=smaller(values); 
					 	 			break;
							case 'S': scanf("%lf",(values+0));
				  					result=squareroot(values); 
				  					break;
							case 'C': scanf("%lf",(values+0));
				  					result=cuberoot(values); 
				  					break;
							case '$': scanf("%lf",(values+0));
				  					result=dollar(values); 
				  					break;
							case 'L': scanf("%d %d",(intvalues+0),(intvalues+1));
					  				result=(double) lcm(intvalues); 
					  				break;
							case 'G': scanf("%d %d",(intvalues+0),(intvalues+1));
					  				result=(double) gcd(intvalues); 
					  				break;
							default :
									printf("THIS OPERATOR DOES NOT EXISTS\n"); 
									flag=1;
					  				break;
						}
						if(flag==0)
						{
							printf("**********************\n");
							printf("* Output: %.2lf      *\n",result);
							printf("**********************\n");	
							flag=0;
						}
						printf("Continue:Y \t Exit:N : ");
						scanf("\n%c",&temp);
						if(temp=='N')
						{
							break;
						}
						else if(temp=='Y')
						{
							printf("Operator (From The Available List): ");
							scanf("\n%c",operator);
							printf("Enter The Values....\n");
						}
					}
				}
				else if(modes==2)
				{
					printf("Enter The 1st Value: ");
					scanf("\n%lf",(values+0));
					printf("Enter Operator(+,-,*,/) : ");
					scanf("\n%c",operator); 
					double result=0;
					while((*operator)!='=')
					{
						printf("Enter The 2nd Value: ");
						switch((*operator))
						{
							case '+': scanf("\n%lf",(values+1));
					 			*(values+0)=addition(values);  
					 			break;
							case '-': scanf("\n%lf",(values+1));
					  			*(values+0)=subtraction(values);  
					  			break; 	
							case '*': scanf("\n%lf",(values+1));
					  			*(values+0)=multiplication(values);  
					  			break;
   							case '/': scanf("\n%lf",(values+1));
					  			*(values+0)=division(values);  
					  			break;
							default : printf("THIS OPERATOR DOES NOT EXISTS\n");
								break;
						}
						printf("Enter Operator(+,-,*,/) : ");
						scanf("\n%c",operator);
						result=*(values+0);
					}
					printf("**********************\n");
					printf("* Output: %.2lf      *\n",result);
					printf("**********************\n");
				}
				else if(modes==3)
				{
					printf("Enter The Quadratic Values(Form - ax^2+bx+c=0) : \n");
					scanf("%lf %lf %lf",(values+0),(values+1),(values+2));
				  	quadraticroots(values); 
				}
				else if(modes==4)
				{
					printf("\nEnter The N-value & R-value (Combination):\n");
					scanf("%lf%lf",(values+0),(values+1));
					printf("**********************\n");
					printf("* Output: %.2lf      *\n",combination(values));
					printf("**********************\n");
				}
				else if(modes==5)
				{
					printf("\nEnter The N-value & R-value (Permutation):\n");
					scanf("%lf%lf",(values+0),(values+1));
					printf("**********************\n");
					printf("* Output: %.2lf      *\n",permutation(values));
					printf("**********************\n");
				}
				printf("\n**********POWER OFF***********");
			free(operator);
			}
			else
			{
				printf("MEMORY NOT ALLOCATED");
				exit(EXIT_FAILURE);
			}
		free(intvalues); 
		}	
		else
		{
			printf("MEMORY NOT ALLOCATED");
			exit(EXIT_FAILURE);
		}
	free(values);
	}
	else
	{
		printf("MEMORY NOT ALLOCATED");
		exit(EXIT_FAILURE);
	}
	return 0; 
}