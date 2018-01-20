//g++ test.cpp -lm -o  test -D_GLIBCXX_USE_CXX11_ABI=0 -lboost_unit_test_framework

#define BOOST_TEST_MODULE test_version

#define BOOST_TEST_MAIN

#ifndef BOOST_TEST_DYN_LINK
#define BOOST_TEST_DYN_LINK
#endif

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    BOOST_CHECK(version() > 0);
}

}