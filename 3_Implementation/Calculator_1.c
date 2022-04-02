/**
 * @file Calculator_1.c
 * @author Rakesh.S (srakeshscsr@gmail.com)
 * @brief  This File Contains The Function Definition For The Function Declaration in Header File
 *  Included Both Build-In And User-Defined Header Files 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<math.h>
#include "Calculator_Main_0.h"
/**
 * @brief performs addition operation 10+20=30
 * 
 * @param val pointer parameter
 * @return double 
 */
 
double addition(double *val)
{
	return (*(val+0))+(*(val+1));
}
/**
 * @brief performs subtraction operation 20-10=10
 * 
 * @param val pointer parameter
 * @return double 
 */

double subtraction(double *val) 
{
	return (*(val+0))-(*(val+1));
}
/**
 * @brief performs multiplication operation 10*20=200
 * 
 * @param val pointer parameter
 * @return double 
 */

double multiplication(double *val)
{
	return (*(val+0))*(*(val+1));
}
/**
 * @brief performs division operation 20/10=2
 * 
 * @param val pointer parameter
 * @return double 
 */

double division(double *val)
{
	double rvalue=0; 
	if((*(val+1))==0)
	{
		rvalue=0.0;
	}
	else
	{
		rvalue=(*(val+0))/(*(val+1));
	}
	return rvalue;
}
/**
 * @brief performs modulo operation 20%10=0
 * 
 * @param intval pointer parameter
 * @return int 
 */
int modulo(int *intval)
{
	int rvalue=0; 
	if((*(intval+1))==0)
	{
		rvalue=0;
	}
	else
	{
		rvalue=(*(intval+0))%(*(intval+1));
	}
	return rvalue;
}
/**
 * @brief performs exponent operation 10^2=100
 * 
 * @param val pointer parameter
 * @return double 
 */
double power(double *val)
{
	double rvalue=1;
	for(int i=0;i<(*(val+1));i++)
	{
		rvalue=rvalue*(*(val+0));
	}
	return rvalue;
}
/**
 * @brief performs factorial operation 5!=5*4*3*2*1=120
 * 
 * @param val pointer parameter
 * @return double 
 */

double factorial(double *val)
{
	double fact=1;
	for(int i=1;i<=(*(val+0));i++)
	{
		fact=fact*i;
	}
	return fact;
}
/**
 * @brief performs greater operation 10,20=20
 * 
 * @param val pointer parameter
 * @return double 
 */

double greater(double *val)
{
	double rvalue=0.00;
	if((*(val+0))>(*(val+1)))
	{
		rvalue=(*(val+0));
	}
	else if((*(val+1))>(*(val+0)))
	{
		rvalue=(*(val+1));
	}
	else 
	{
		rvalue=(*(val+0));
	}

	return rvalue;
}
/**
 * @brief performs smaller operation 10,20=10
 * 
 * @param val pointer parameter
 * @return double 
 */

double smaller(double *val)
{
	double rvalue=0.00;
	if((*(val+0))<(*(val+1)))
	{
		rvalue=(*(val+0));
	}
	else if((*(val+1))<(*(val+0)))
	{
		rvalue=(*(val+1));
	}
	else 
	{
		rvalue=(*(val+0));
	}

	return rvalue;
}
/**
 * @brief performs dollar operation  75*3=225
 * 
 * @param val pointer parameter
 * @return double 
 */

double dollar(double *val)
{
	return (75*(*(val+0)));
}
/**
 * @brief performs squareroot operation  squareroot(4)=2*2=2
 * 
 * @param val pointer parameter
 * @return double 
 */

double squareroot(double *val)
{
	if((*(val+0))>=0)
		return sqrt((*(val+0)));
	return -(sqrt(-(*(val+0))));
}
/**
 * @brief performs cuberoot operation  cuberoot(27)=3*3*3=3
 * 
 * @param val pointer parameter
 * @return double 
 */

double cuberoot(double *val)
{
	if((*(val+0))>=0)
		return cbrt((*(val+0)));
	return -(cbrt(-(*(val+0))));
}
/**
 * @brief performs quadratic operation Gives Real Roots or Complex Roots
 * 
 * @param val pointer parameter
 * @return None 
 */

void quadraticroots(double *val)
{
	double a=(*(val+0));
	double b=(*(val+1));
	double c=(*(val+2));
	double discrim=((b*b)-(4*a*c));
	double root1=0,root2=0; 
	if(discrim>0)
	{
		root1=(-b+sqrt(discrim))/(2*a);
		root2=(-b-sqrt(discrim))/(2*a);
		printf("************************\n");
		printf("* x1= %.2lf\tx2= %.2lf *\n",root1,root2);
		printf("************************\n");
	}
	else if(discrim<0)
	{	
		root1=root2=(-b/(2*a));
		double img=(sqrt(-discrim))/(2*a);
		printf("**************************************\n");
		printf("* x1= %.2lf+%.2lfi  x2= %.2lf-%.2lfi *\n",root1,img,root2,img);
		printf("**************************************\n");
	}
	else
	{
		root1=root2=-b/(2*a);
		printf("************************\n");
		printf("*  x1=x2= %.2lf        *\n",root1);
		printf("************************\n");
	}
}
/**
 * @brief performs LCM operation  5,10=10
 * 
 * @param intval pointer parameter
 * @return int
 */

int lcm(int *intval)
{
    int max=0;
    if((*(intval+0))>(*(intval+1)))
    {
        max=(*(intval+0));
    }
    else
    {
        max=(*(intval+1));
    }
    int t=max;
    int lcm=0;
    while(1)
    {
        if(t%(*(intval+0))==0 && t%(*(intval+1))==0)
        {
            lcm=t;
            break;
        }
        t=t+max;
    }

    return lcm;
}
/**
 * @brief performs GCD operation 5,10=5
 * 
 * @param intval pointer parameter
 * @return int 
 */
int gcd(int *intval)
{
    int gcd=0;
    for(int i=1;i<=(*(intval+0)) && i<=(*(intval+1));i++)
    {
        if((*(intval+0))%i==0 && (*(intval+1))%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
/**
 * @brief performs combination operation n=2 r=1 combination=2
 * 
 * @param val pointer parameter
 * @return double 
 */
double combination(double *val)
{
	double n=*(val+0);
	double r=*(val+1);
	double sub=n-r;
	double temp=1;
	for(int i=1;i<=n;i++)
	{
		temp=temp*i;
	}
	n=temp;
	temp=1;
	for(int i=1;i<=r;i++)
	{
		temp=temp*i;
	}
	r=temp;
	temp=1;
	for(int i=1;i<=sub;i++)
	{
		temp=temp*i;
	}
	sub=temp;
	return (n/(r*sub));
}
/**
 * @brief performs permutation operation n=2 r=1 permutation=2
 * 
 * @param val pointer parameter
 * @return double 
 */

double permutation(double *val)
{
	double n=*(val+0);
	double r=*(val+1);
	double sub=n-r;
	double temp=1;
	for(int i=1;i<=n;i++)
	{
		temp=temp*i;
	}
	n=temp;
	temp=1;
	for(int i=1;i<=sub;i++)
	{
		temp=temp*i;
	}
	sub=temp;
	return (n/(sub));
}