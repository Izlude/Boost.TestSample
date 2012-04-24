#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE FizzBuzzTest
#include <boost/test/unit_test.hpp>
#include "FizzBuzz.h"

struct FizzBuzzFixture {
    FizzBuzzFixture() {
	this->fb_ = new FizzBuzz();
    }
    ~FizzBuzzFixture() {
	delete this->fb_;
    }
    FizzBuzz* fb_;
};

BOOST_FIXTURE_TEST_SUITE(FizzBuzz, FizzBuzzFixture)

BOOST_AUTO_TEST_CASE( testFizz )
{
    BOOST_CHECK_EQUAL( "Fizz", fb_->Print(3) );
}

BOOST_AUTO_TEST_CASE( testBuzz )
{
    BOOST_CHECK_EQUAL( "Buzz", fb_->Print(5) );
}

BOOST_AUTO_TEST_CASE( testFizzBuzz )
{
    BOOST_CHECK_EQUAL( "FizzBuzz", fb_->Print(15) );
}

BOOST_AUTO_TEST_CASE( testOther )
{
    BOOST_CHECK_EQUAL( "2", fb_->Print(2) );
}

BOOST_AUTO_TEST_SUITE_END();
