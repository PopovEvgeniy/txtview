#if defined _MSC_VER && _MSC_VER>=1400
  #pragma warning(disable : 4996)
#endif

#ifndef _WIN32
#define _FILE_OFFSET_BITS 64
#endif

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define LINES_PER_PAGE 25