#ifndef __XR_MATH_STORAGE_HEADERFILE__
#define __XR_MATH_STORAGE_HEADERFILE__

namespace XR {
namespace Math {

template<typename Scalar_, int ROWS, int COLS>
struct MatrixDataOwner {
    using Scalar = Scalar_;
    Scalar data[ROWS * COLS];
    static constexpr int rows = ROWS;
    static constexpr int cols = COLS;
    static constexpr int size = ROWS * COLS;
};

template<typename Scalar_, int COLS>
struct MatrixDataOwner<Scalar_, -1, COLS>
{
    using Scalar = Scalar_;
    Scalar* data;
    int rows = -1;
    static constexpr int cols = COLS;
    int size = -1;
};

template<typename Scalar_, int ROWS>
struct MatrixDataOwner<Scalar_, ROWS, -1>
{
    using Scalar = Scalar_;
    Scalar* data;
    static constexpr int rows = ROWS;
    int cols = -1;
    int size = -1;
};

template<typename Scalar_>
struct MatrixDataOwner<Scalar_, -1, -1>
{
    using Scalar = Scalar_;
    Scalar* data;
    int rows = -1;
    int cols = -1;
    int size = -1;
};

template<typename Scalar_, int ROWS, int COLS>
struct MatrixDataRef {
    using Scalar = Scalar_;
    Scalar* data;
    static constexpr int rows = ROWS;
    static constexpr int cols = COLS;
    static constexpr int size = ROWS * COLS;
};

template<typename Scalar_, int COLS>
struct MatrixDataRef<Scalar_, -1, COLS> {
    using Scalar = Scalar_;
    Scalar* data;
    int rows = -1;
    static constexpr int cols = COLS;
    int size = -1;
};

template<typename Scalar_, int ROWS>
struct MatrixDataRef<Scalar_, ROWS, -1> {
    using Scalar = Scalar_;
    Scalar* data;
    static constexpr int rows = ROWS;
    int cols = -1;
    int size = -1;
};

template<typename Scalar_>
struct MatrixDataRef<Scalar_, -1, -1> {
    using Scalar = Scalar_;
    Scalar* data;
    int rows = -1;
    int cols = -1;
    int size = -1;
};

template<typename Scalar, int SIZE>
using VectorDataOwner = MatrixDataOwner<Scalar, SIZE, 1>;

template<typename Scalar, int SIZE>
using VectorDataRef = MatrixDataRef<Scalar, SIZE, 1>;

}
}

#endif