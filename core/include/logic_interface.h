#ifndef LOGIC_INTERFACE_H
#define LOGIC_INTERFACE_H

#include "base_interface.h"

namespace Core {
    /*!
     * \brief Класс, реализующий плагин бизнес-логики(то есть в дальнейшем здесь будут описаны все
     * методы, классы, которые понадобяться для реализации задачи отображения графических элементов,
     * а сам LogicInterface будет собран в библиотеку)
     */
    class LogicInterface : public BaseInterface
    {
        Q_OBJECT
        Q_INTERFACES(Core::BaseInterface)

    public:
        /*!
         * \brief Виртуальный деструктор с определением в заголовочном файле
         */
        explicit LogicInterface(QObject *parent = nullptr);
    };
}
Q_DECLARE_INTERFACE(Core::LogicInterface, "com.Core.LogicInterface")
#endif // LOGIC_INTERFACE_H
