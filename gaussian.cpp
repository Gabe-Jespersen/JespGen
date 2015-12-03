/*
 * =====================================================================================
 *
 *       Filename:  gaussian.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/28/2015  9:53:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Jespersen (), gzackwebs@tfwno.gf
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "gaussian.h"

using namespace std;

double gaussian(int base, int standardDeviation)
{
    //uses box-muller transformation or something
    double u1 = (1.0+rand())/(1.0+RAND_MAX);//generating 2 linearly random numbers between 1 & 0
    double u2 = (1.0+rand())/(1.0+RAND_MAX);

    double answer = cos(8.0*atan(1.0)*u2)*sqrt(-2.0*log(u1));//uses the box- 
                                                             //muller transfor-
                                                             //mation
                                                             //
                                                             //using decimals 
                                                             //to force it to
                                                             //be a float
                                                             //
                                                             //you could also
                                                             //use a pi int
    answer *= standardDeviation;//multiplies the value by the standard deviation
    answer += base;//adds the base
    return answer;
}
