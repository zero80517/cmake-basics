#include "cudalibrary.h"

#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <stdio.h>
#include "kernel.cuh"

namespace CudaLibrary {

int Add(int *a, int *b, int *c, int len)
{
  // Add vectors in parallel.
  cudaError_t cudaStatus = addWithCuda(c, a, b, len);
  if (cudaStatus != cudaSuccess) {
    fprintf(stderr, "addWithCuda failed!");
    return 1;
  }

  // cudaDeviceReset must be called before exiting in order for profiling and
  // tracing tools such as Nsight and Visual Profiler to show complete traces.
  cudaStatus = cudaDeviceReset();
  if (cudaStatus != cudaSuccess) {
    fprintf(stderr, "cudaDeviceReset failed!");
    return 1;
  }

  return 0;
}

} // CudaLibrary

