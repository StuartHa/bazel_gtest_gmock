#include <gtest/gtest.h>
#include <gmock/gmock.h>

using std::vector;

TEST(TestCaseName, TestName) {
	vector<int> v {5, 10, 15};
	EXPECT_THAT(v, testing::ElementsAre(5, 10, 15));
}
