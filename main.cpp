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
    srand(time(NULL));//seeding random for gaussian
    vector<int> parsed = parse(argc, argv);//for storing settings
    double temp;

    /*
    for(int i = 0; i < parsed.size(); i++)
    {
        cout << parsed.at(i) << endl;
    }
    */

    if(parsed.at(4))//if -f flag was used for file output
    {
        ofstream outputFile;
        outputFile.open("output.txt");//opening file
        for(int i = 0; i < parsed.at(2); i++)//for every number
        {
            temp = gaussian(parsed.at(0),parsed.at(1));//generate a random gaussian number

            if(parsed.at(3))//if -p flag
            {
                temp = round(temp);//round
            }

            outputFile << temp << endl;//append temp to file, followed by newline
        }
        outputFile.close();
    }
    else
    {
        for(int i = 0; i < parsed.at(2); i++)//same as last time
        {
            temp = gaussian(parsed.at(0),parsed.at(1));

            if(parsed.at(3))
            {
                temp = round(temp);
            }

            cout << temp << endl;//just outputting here instead of to file
        }
    }

    return 0;
}
