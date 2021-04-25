#include <XR/GUI/Window.h>
#include <X11/Xlib.h>
#include <X11/Xos.h>
#include <X11/Xutil.h>

namespace XR
{
namespace GUI
{

struct Window::Impl
{
};

Window::Window()
{
    impl = std::make_unique<Impl>();
}

} // namespace GUI
} // namespace XR