#include <pybind11/pybind11.h>
namespace py = pybind11;

double sum(double a, double b) {
    return a + b;
}

PYBIND11_MODULE(SumFunction, var) {
    var.doc() = "pybind11 example module";
    var.def("sum", &sum, "This function adds two input numbers");
}