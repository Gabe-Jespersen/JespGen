/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  gaussian random number generator
 *
 *        Version:  1.0
 *        Created:  11/28/2015 12:18:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Jespersen (), gzackwebs@tfwno.gf
 *
 * =====================================================================================
 */

#include <vector>

#include "parse.h"

using namespace std;

int main(int argc, char** argv)
{
    vector<int> parsed = parse(argc, argv);
    return 0;
}
