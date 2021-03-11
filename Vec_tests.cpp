#include "gtest/gtest.h"
#include "Vec.h"

TEST(VecTest, VecDot) {
	double3 a{ 0,1,2 };
	double3 b{ 0,0,1 };
  EXPECT_EQ(dot(a, b), 2);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}