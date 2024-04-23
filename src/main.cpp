#include "lib.h"
#include <iostream>

using namespace unity_build;

int main(int argc, char **argv) {
  if (argc < 2) {
    help(argc);
    return 0;
  }
  return handle_command(argc, argv);
}
