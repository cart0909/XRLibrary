#ifndef __XR_MATH_STORAGE_DATA_OWNER__
#define __XR_MATH_STORAGE_DATA_OWNER__

namespace XR {
namespace Math {

template<typename Scalar_, int SIZE>
struct DataOwner {
    using Scalar = Scalar_;
    Scalar data[SIZE] = { Scalar(0) };
    static constexpr int size = SIZE;
};


template<typename Scalar_>
struct DataOwner<Scalar_, -1>
{
    using Scalar = Scalar_;
    Scalar* data = nullptr;
    int size = -1;
};


}
}

#endif