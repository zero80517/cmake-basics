#include <omp.h>
#include <cstdio>

int main() {
  // This code is executed by 1 thread
  const int nt = 8;
  omp_set_num_threads(nt);
  printf("OpenMP with %d threads\n", nt);

  #pragma omp parallel
  { // This code is executed in parallel
    // by multiple threads
    printf("Hello World from thread %d with %d num threads\n",
           omp_get_thread_num(), omp_get_max_threads());
  }
}
