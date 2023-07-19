/**
  ********************************************************************************
  * @file           : global.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/2/22
  ********************************************************************************
  */
//

#ifndef PROJECTCREATE_GLOBAL_H
#define PROJECTCREATE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(JAYSHENG_LIBRARY)
#define JAYSHENG_LIBRARY_EXPORT Q_DECL_EXPORT
#else
#define JAYSHENG_LIBRARY_EXPORT Q_DECL_IMPORT
#endif

#endif //PROJECTCREATE_GLOBAL_H
