#ifndef EXAMPLE_H_
#define EXAMPLE_H_

#include <pybind11/pybind11.h>
#include "example.h"

namespace math
{
    int add(int i, int j)
    {
        return i + j;
    }

    double add(double i, double j)
    {
        return i + j;
    }

    namespace py = pybind11;

    PYBIND11_MODULE(example, m) {
        m.doc() = "pybind11 example plugin"; // optional module docstring
        m.def("add", py::overload_cast<int, int>(&add), "A function which adds two integer numbers");
        m.def("add", py::overload_cast<double, double>(&add), "A function which adds two float numbers");
    }
}

#endif

