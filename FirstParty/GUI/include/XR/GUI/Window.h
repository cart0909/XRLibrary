#ifndef __XR_GUI_WINDOW_HEADERFILE__
#define __XR_GUI_WINDOW_HEADERFILE__
#include <memory>

namespace XR
{
namespace GUI
{

class Window
{
public:
    Window();
    ~Window() = default;

private:
    struct Impl;
    std::unique_ptr<Impl> impl;
};

} // namespace GUI
} // namespace XR

#endif