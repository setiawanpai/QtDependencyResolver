#ifndef QTDEPENDENCYRESOLVERBLLNATIVE_GLOBAL_H
#define QTDEPENDENCYRESOLVERBLLNATIVE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTDEPENDENCYRESOLVERBLLNATIVE_LIBRARY)
#  define QTDEPENDENCYRESOLVERBLLNATIVESHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTDEPENDENCYRESOLVERBLLNATIVESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTDEPENDENCYRESOLVERBLLNATIVE_GLOBAL_H
