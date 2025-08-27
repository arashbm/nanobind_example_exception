#include <nanobind/nanobind.h>

namespace nb = nanobind;

using namespace nb::literals;

NB_MODULE(nanobind_example_ext, m) {
  m.def("runtime", []() {
    throw std::runtime_error("Intentional error for demonstration");
    return true;
  });

  m.def("builtin", []() {
    throw nb::index_error(
        "Intentional built-in exception for demonstration");
    return true;
  });
}
