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
#include <ctime>
#include <cmath>
#include <fstream>

#include "parse.h"
#include "gaussian.h"

using namespace std;

int main(int argc, char** argv)
{
    srand(time(NULL));
    vector<int> parsed = parse(argc, argv);
    double temp;

    /*
    for(int i = 0; i < parsed.size(); i++)
    {
        cout << parsed.at(i) << endl;
    }
    */

    if(parsed.at(4))
    {
        ofstream outputFile;
        outputFile.open("output.txt");
        for(int i = 0; i < parsed.at(2); i++)
        {
            temp = gaussian(parsed.at(0),parsed.at(1));

            if(parsed.at(3))
            {
                temp = round(temp);
            }

            outputFile << temp << endl;
        }
        outputFile.close();
    }
    else
    {
        for(int i = 0; i < parsed.at(2); i++)
        {
            temp = gaussian(parsed.at(0),parsed.at(1));

            if(parsed.at(3))
            {
                temp = round(temp);
            }

            cout << temp << endl;
        }
    }

    return 0;
}
