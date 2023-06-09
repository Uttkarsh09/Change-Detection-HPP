#pragma once

#include "../../common/systemMacros.hpp"

#if (PLATFORM == 1)
    #include <windows.h>
    #pragma comment(lib, "cuda.lib")
    #pragma comment(lib, "cudart.lib")
#endif

#include "../../common/dataTypes.hpp"
#include "../../common/imageFunctions.hpp"

#include <cuda.h>
#include <math.h>

// Function Protoypes
void printDeviceProperties(void);
void runOnGPU(ImageData*, ImageData*, int, uint8_t*, string);
void cleanup(void);
