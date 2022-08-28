#ifndef CUDALIBRARY_H
#define CUDALIBRARY_H

#include "cudalibrary_global.h"

namespace CudaLibrary
{

#ifdef __cplusplus
extern "C++" {  // only need to export C++ interface
#endif

int CUDALIBRARY_EXPORT Add(int *a, int *b, int *c, int len);

#ifdef __cplusplus
}
#endif

} // CUDALIBRARY_EXPORT

#endif // CUDALIBRARY_H
