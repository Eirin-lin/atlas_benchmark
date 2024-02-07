#include "benchmark/cppbenchmark.h"

#include <math.h>

BENCHMARK("sin")
{
    sin(123.456);
}

BENCHMARK_MAIN()