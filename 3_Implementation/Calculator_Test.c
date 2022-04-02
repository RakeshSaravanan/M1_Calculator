/**
 * @file Calculator_Test.c
 * @author Rakesh.S (srakeshscsr@gmail.com)
 * @brief This File Contains The Function Definition For The Test Functions Declared In The Header File
 * Included Both Build-In And User-Defined Header Files 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "Calculator_Main_0.h"
#include "unity.h"

void addition_Test()
{ 
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;*(testvalue+1)=0.00;
    TEST_ASSERT_EQUAL(0.00,addition(testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=20.00;
    TEST_ASSERT_EQUAL(30.00,addition(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=-20.00;
    TEST_ASSERT_EQUAL(-30.00,addition(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=+20.00;
    TEST_ASSERT_EQUAL(10.00,addition(testvalue));
    *(testvalue+0)=30.265;*(testvalue+1)=20.642;
    TEST_ASSERT_EQUAL(50.907,addition(testvalue));
    free(testvalue);
}
void subtraction_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;*(testvalue+1)=0.00;
    TEST_ASSERT_EQUAL(0.00,subtraction(testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=20.00;
    TEST_ASSERT_EQUAL(-10.00,subtraction(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=-20.00;
    TEST_ASSERT_EQUAL(10.00,subtraction(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=+20.00;
    TEST_ASSERT_EQUAL(-30.00,subtraction(testvalue));
    *(testvalue+0)=30.265;*(testvalue+1)=20.642;
    TEST_ASSERT_EQUAL(9.623,subtraction(testvalue));
    free(testvalue);
}
void multiplication_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;*(testvalue+1)=0.00;
    TEST_ASSERT_EQUAL(0.00,multiplication(testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=20.00;
    TEST_ASSERT_EQUAL(200.00,multiplication(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=-20.00;
    TEST_ASSERT_EQUAL(200.00,multiplication(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=+20.00;
    TEST_ASSERT_EQUAL(-200.00,multiplication(testvalue));
    *(testvalue+0)=30.265;*(testvalue+1)=20.642;
    TEST_ASSERT_EQUAL(624.73013,multiplication(testvalue));
    free(testvalue);
}
void division_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;*(testvalue+1)=0.00;
    TEST_ASSERT_EQUAL(0.00,division(testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=20.00;
    TEST_ASSERT_EQUAL(0.50,division(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=-20.00;
    TEST_ASSERT_EQUAL(0.50,division(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=+20.00;
    TEST_ASSERT_EQUAL(-0.50,division(testvalue));
    *(testvalue+0)=30.265;*(testvalue+1)=20.642;
    TEST_ASSERT_EQUAL(1.466185447,division(testvalue));
    free(testvalue);
}
void modulo_Test()
{
    int *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0;*(testvalue+1)=0;
    TEST_ASSERT_EQUAL(0,modulo(testvalue));
    *(testvalue+0)=10;*(testvalue+1)=5;
    TEST_ASSERT_EQUAL(0,modulo(testvalue));
    *(testvalue+0)=-10;*(testvalue+1)=-5; 
    TEST_ASSERT_EQUAL(0,modulo(testvalue));
    *(testvalue+0)=-11;*(testvalue+1)=5;
    TEST_ASSERT_EQUAL(-1,modulo(testvalue));
    *(testvalue+0)=202;*(testvalue+1)=10;
    TEST_ASSERT_EQUAL(2,modulo(testvalue));
    free(testvalue);
}
void power_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;*(testvalue+1)=0.00;
    TEST_ASSERT_EQUAL(1.00,power(testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=3.00;
    TEST_ASSERT_EQUAL(1000.00,power(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=-3.00;
    TEST_ASSERT_EQUAL(1,power(testvalue));
    *(testvalue+0)=-2.00;*(testvalue+1)=+4.00;
    TEST_ASSERT_EQUAL(16.00,power(testvalue));
    *(testvalue+0)=30.265;*(testvalue+1)=2;
    TEST_ASSERT_EQUAL(915.970225,power(testvalue));
    free(testvalue);
}
void greater_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;*(testvalue+1)=0.00;
    TEST_ASSERT_EQUAL(0.00,greater(testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=3.00;
    TEST_ASSERT_EQUAL(10.00,greater(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=-3.00;
    TEST_ASSERT_EQUAL(-3.00,greater(testvalue));
    *(testvalue+0)=-2.00;*(testvalue+1)=+4.00;
    TEST_ASSERT_EQUAL(4.00,greater(testvalue));
    *(testvalue+0)=30.265;*(testvalue+1)=2;
    TEST_ASSERT_EQUAL(30.265,greater(testvalue));
    free(testvalue);
}
void smaller_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;*(testvalue+1)=0.00;
    TEST_ASSERT_EQUAL(0.00,smaller(testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=3.00;
    TEST_ASSERT_EQUAL(3.00,smaller(testvalue));
    *(testvalue+0)=-10.00;*(testvalue+1)=-3.00;
    TEST_ASSERT_EQUAL(-10.00,smaller(testvalue));
    *(testvalue+0)=-2.00;*(testvalue+1)=+4.00;
    TEST_ASSERT_EQUAL(-2.00,smaller(testvalue));
    *(testvalue+0)=30.265;*(testvalue+1)=2;
    TEST_ASSERT_EQUAL(2,smaller(testvalue));
    free(testvalue);
}
void squareroot_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;
    TEST_ASSERT_EQUAL(0.00,squareroot(testvalue));
    *(testvalue+0)=10.00;
    TEST_ASSERT_EQUAL(3.16227766,squareroot(testvalue));
    *(testvalue+0)=-10.00;                                      
    TEST_ASSERT_EQUAL(-3.16227766,squareroot(testvalue));
    *(testvalue+0)=4.00;
    TEST_ASSERT_EQUAL(2.00,squareroot(testvalue));
    *(testvalue+0)=30.265;
    TEST_ASSERT_EQUAL(5.501363467,squareroot(testvalue));
    free(testvalue);
}
void cuberoot_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=0.00;
    TEST_ASSERT_EQUAL(0.00,cuberoot(testvalue));
    *(testvalue+0)=10.00;
    TEST_ASSERT_EQUAL(2.15443469,cuberoot(testvalue));
    *(testvalue+0)=-10.00;
    TEST_ASSERT_EQUAL(-2.15443469,cuberoot(testvalue));
    *(testvalue+0)=27.00;
    TEST_ASSERT_EQUAL(3.00,cuberoot(testvalue));
    *(testvalue+0)=30.265;
    TEST_ASSERT_EQUAL(3.11635477,cuberoot(testvalue));
    free(testvalue);
}
void dollar_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=52.34;
    TEST_ASSERT_EQUAL(3925.5,dollar(testvalue));
    free(testvalue);
}
void factorial_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=5.00;
    TEST_ASSERT_EQUAL(120.00,factorial(testvalue));
    *(testvalue+0)=0.00;
    TEST_ASSERT_EQUAL(1.00,factorial(testvalue));
    free(testvalue);
}
void lcm_Test()
{
    int *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=5;*(testvalue+1)=10;
    TEST_ASSERT_EQUAL(10,lcm(testvalue));
    *(testvalue+0)=10;*(testvalue+1)=50;
    TEST_ASSERT_EQUAL(50,lcm(testvalue));
    free(testvalue);
}
void gcd_Test()
{
    int *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=5;*(testvalue+1)=10;
    TEST_ASSERT_EQUAL(5,gcd(testvalue));
    *(testvalue+0)=10;*(testvalue+1)=50;
    TEST_ASSERT_EQUAL(10,gcd(testvalue));
    free(testvalue);
}
void combination_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=3.00;
    TEST_ASSERT_EQUAL(120.00,combination(testvalue));
    *(testvalue+0)=12.00;*(testvalue+1)=2.00;
    TEST_ASSERT_EQUAL(66.00,combination(testvalue));
    free(testvalue);
}
void permutation_Test()
{
    double *testvalue=malloc(2 * sizeof(*testvalue));
    *(testvalue+0)=10.00;*(testvalue+1)=3.00;
    TEST_ASSERT_EQUAL(720.00,permutation(testvalue));
    *(testvalue+0)=12.00;*(testvalue+1)=2.00;
    TEST_ASSERT_EQUAL(132.00,permutation(testvalue));
    free(testvalue);
}