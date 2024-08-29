#ifndef COMPONENTS_GLOBAL_H
#define COMPONENTS_GLOBAL_H

#include <QtCore/QtGlobal>

#if defined(COMPONENTS_LIBRARY)
#  define COMPONENTS_EXPORT Q_DECL_EXPORT
#else
#  define COMPONENTS_EXPORT Q_DECL_IMPORT
#endif

#endif  // COMPONENTS_GLOBAL_H
