#ifndef GUI_INTERFACE_H
#define GUI_INTERFACE_H
#include "base_interface.h"

namespace core {

    class GuiInterface : public BaseInterface
    {
        Q_OBJECT
        Q_INTERFACES(BaseInterface)

    public:
        virtual ~GuiInterface() = default;
        virtual bool initialize(const QList<QPointer<QObject>> &dependencies);
    };

}
Q_DECLARE_INTERFACE(core::GuiInterface, "com.core.GuiInterface")

#endif // GUI_INTERFACE_H
