#include "global.h"
#include "test_runner.h"

#ifdef __MINGW32__
// weak symbols don't work across translation units on Windows PE/COFF
const bool8 gTestRunnerEnabled = FALSE;
#else
__attribute__((weak))
const bool8 gTestRunnerEnabled = FALSE;
#endif

// The Makefile patches gTestRunnerHeadless as part of make test.
// This allows us to open the ROM in an mgba with a UI and see the
// animations and messages play, which helps when debugging a test.
#if TESTING
const bool8 gTestRunnerHeadless = FALSE;
#endif
const bool8 gTestRunnerSkipIsFail = FALSE;
