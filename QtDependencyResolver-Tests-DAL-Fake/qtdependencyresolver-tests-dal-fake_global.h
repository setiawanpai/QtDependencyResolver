#ifndef QTDEPENDENCYRESOLVERTESTSDALFAKE_GLOBAL_H
#define QTDEPENDENCYRESOLVERTESTSDALFAKE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTDEPENDENCYRESOLVERTESTSDALFAKE_LIBRARY)
#  define QTDEPENDENCYRESOLVERTESTSDALFAKESHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTDEPENDENCYRESOLVERTESTSDALFAKESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTDEPENDENCYRESOLVERTESTSDALFAKE_GLOBAL_H