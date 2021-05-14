#include "gtest/gtest.h"
#include "hello.h"

TEST(HelloTests, testHello)
{
    ASSERT_STREQ("Hello, Niklas!", generateHelloString("Niklas").c_str());
}