#include <gtest/gtest.h>
#include <XR/Math/Storage.h>

TEST(TestStorage, test_data_owner) {
    // XR::Math::MatrixDataOwner<int, 2, 3> data_owner;
    // std::cout << &data_owner << " " << (void*)data_owner.data << std::endl;
    // std::cout << sizeof(data_owner.data) << std::endl;
    // std::cout << data_owner.rows << std::endl;
    // std::cout << data_owner.cols << std::endl;

    XR::Math::VectorDataOwner<int, -1> vec_owner;
    std::cout << &vec_owner << " " << (void*)vec_owner.data << std::endl;
    std::cout << sizeof(vec_owner.data) << std::endl;
    std::cout << vec_owner.rows << std::endl;
    std::cout << vec_owner.cols << std::endl;
}