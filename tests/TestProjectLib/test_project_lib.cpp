#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "lib.h"

TEST(library_tests, check_sum_is_correct)
{
   EXPECT_EQ(ProjectLib::sum(1.0, 2.0), 3.0);
}