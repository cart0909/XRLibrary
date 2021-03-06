#include <XR/Math/Storage/DataOwner.h>
#include <XR/Math/Vector.h>
#include <gtest/gtest.h>

TEST(TestStorage, test_data_owner)
{
    XR::Math::DataOwner<double, 3> v3;
    EXPECT_EQ((void *)&v3, (void *)v3.data);
    EXPECT_EQ(v3.size, 3);
    EXPECT_EQ(v3.size, std::end(v3.data) - std::begin(v3.data));

    XR::Math::DataOwner<double, -1> v_d;
    EXPECT_NE((void *)&v_d, (void *)&v_d.data[0]);
    EXPECT_EQ(v_d.size, -1);
}

TEST(TestVector, test_vector)
{
    XR::Math::Vector<double, XR::Math::Dynamic> vd(3);
    XR::Math::Vector<double, 2> v2(2.1, -3.0);
    XR::Math::Vector<int, 3> v3(-11, 2, 3);

    EXPECT_EQ(vd.size(), 3);
    EXPECT_EQ(v2.size(), 2);
    EXPECT_EQ(v3.size(), 3);

    EXPECT_DOUBLE_EQ(v2(0), 2.1);
    EXPECT_DOUBLE_EQ(v2(1), -3.0);

    EXPECT_EQ(v3(0), -11);
    EXPECT_EQ(v3(1), 2);
    EXPECT_EQ(v3(2), 3);
}