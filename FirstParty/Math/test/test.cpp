#include <gtest/gtest.h>
#include <XR/Math/Storage/DataOwner.h>

TEST(TestStorage, test_data_owner) {
    XR::Math::DataOwner<double, 3> v3;
    EXPECT_EQ((void*)&v3, (void*)v3.data);
    EXPECT_EQ(v3.size, 3);
    EXPECT_EQ(v3.size, std::end(v3.data) - std::begin(v3.data));

    XR::Math::DataOwner<double, -1> v_d;
    EXPECT_NE((void*)&v_d, (void*)v_d.data);
    EXPECT_EQ(v_d.size, -1);
}