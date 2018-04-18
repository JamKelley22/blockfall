#include <stdio.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

#include "io.h"

int main(int argc, char *argv[])
{
  io_init_terminal();
  io_resize_terminal();
  io_handle_input();
}
