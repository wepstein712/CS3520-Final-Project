/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>
#include "Four_Right_Turns.h"
#include <cstdlib>
#include <cxxtest/Root.cpp>
#include <time.h>
using namespace std;

int main(int argc, char *argv[])
{
    int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main<CxxTest::ErrorPrinter>(tmp, argc, argv);

    srand(time(NULL));
    FourRightTurns game;
    game.play();

    return status;
}

const char *CxxTest::RealWorldDescription::_worldName = "cxxtest";
