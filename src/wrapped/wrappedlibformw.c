#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"

const char* libformwName = "libformw.so.5";
#define LIBNAME libformw

#define CUSTOM_INIT \
    SETALT(myw_);   \

#include "wrappedlib_init.h"
