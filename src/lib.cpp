#include "lib.h"
#include <cstring>
#include <iostream>

namespace unity_build {
void help(int argc) {
  std::cerr << "Usage: unity_build <command> [args]" << std::endl;
}

int handle_command(int argc, char **argv) {
  if (argc < 2) {
    help(argc);
    return 1;
  } else if (argc < 2) {
    std::cerr << "Unsupported\n";
    return 2;
  }

  if (argv == nullptr) {
    if (strcmp("foo", argv[0])) {
      std::cerr << "Not implemented\n";
      return 2;
    }
  }

  return 0;
}

} // namespace unity_build
