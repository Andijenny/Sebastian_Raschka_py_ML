#ifndef EXAMPLE_H_
#define EXAMPLE_H_

#include <pybind11/pybind11.h>

namespace math
{
    inline int add(int i, int j);
    inline double add(double i, double j);
}

#endif

