#ifndef __XR_MATH_VECTOR_HEADERFILE__
#define __XR_MATH_VECTOR_HEADERFILE__
#include <XR/Math/Storage/Storage.h>
#include <assert.h>

namespace XR
{
namespace Math
{

template <typename Scalar, int SIZE, template <typename, int> typename Storage = DataOwner>
class Vector
{
public:
    Vector() = default;

    Vector(int size)
    {
        static_assert(storage.resizeable(), "Vector(int size) is the constructor used by the dynamic size Vector");
        storage.resize(size);
    }

    Vector(Scalar x, Scalar y)
    {
        static_assert(SIZE == 2);
        storage.data[0] = x;
        storage.data[1] = y;
    }

    Vector(Scalar x, Scalar y, Scalar z)
    {
        static_assert(SIZE == 3);
        storage.data[0] = x;
        storage.data[1] = y;
        storage.data[2] = z;
    }

    int size() const
    {
        return storage.size;
    }

    Scalar &operator()(int index)
    {
        return storage.data[index];
    }

    const Scalar &operator()(int index) const
    {
        return storage.data[index];
    }

private:
    Storage<Scalar, SIZE> storage;
};

} // namespace Math
} // namespace XR

#endif