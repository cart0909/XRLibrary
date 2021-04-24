#ifndef __XR_MATH_STORAGE_DATA_OWNER_HEADERFILE__
#define __XR_MATH_STORAGE_DATA_OWNER_HEADERFILE__
#include <memory>

namespace XR
{
namespace Math
{

template <typename Scalar, int SIZE>
struct DataOwner
{
    Scalar data[SIZE] = {Scalar(0)};
    static constexpr int size = SIZE;
    static constexpr bool resizeable()
    {
        return false;
    }
};

template <typename Scalar>
struct DataOwner<Scalar, -1>
{
    std::unique_ptr<Scalar[]> data;
    int size = -1;
    static constexpr bool resizeable()
    {
        return true;
    }
    void resize(int size_)
    {
        data = std::make_unique<Scalar[]>(size_);
        size = size_;
    }
};

} // namespace Math
} // namespace XR

#endif