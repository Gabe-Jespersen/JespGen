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
    double u1 = (1.0+rand())/(1.0+RAND_MAX);
    double u2 = (1.0+rand())/(1.0+RAND_MAX);

    double answer = cos(8.*atan(1.)*u2)*sqrt(-2.*log(u1));
    answer *= standardDeviation;
    answer += base;
    return answer;
}
