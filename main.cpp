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
#include <iostream>
#include <cstdlib>
#include <cstring>

#include "parse.h"
#include "gaussian.h"

using namespace std;

int main(int argc, char** argv)
{
    vector<int> parsed = parse(argc, argv);

    /*
    for(int i = 0; i < parsed.size(); i++)
    {
        cout << parsed.at(i) << endl;
    }
    */

    for(int i = 0; i < parsed.at(2); i++)
    {
        cout << gaussian(parsed.at(0),parsed.at(1),parsed.at(3)) << endl;
    }

    return 0;
}
