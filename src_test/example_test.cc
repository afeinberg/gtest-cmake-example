#include "example.h"
#include "gtest/gtest.h"

using af::Example;

namespace {

class ExampleTest : public ::testing::Test {
  protected:

    ExampleTest()
            :example_("world") {
        // Class setup
    }

    virtual ~ExampleTest() {
        // Class teardown
    }

    virtual void SetUp() {
        // Setup before method
    }

    virtual void TearDown() {
        // Teardown before method
    }

    Example example_;
};

} // namespace

TEST_F(ExampleTest, Greet) {
    EXPECT_EQ(example_.Greet(), "Hello, world!");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
