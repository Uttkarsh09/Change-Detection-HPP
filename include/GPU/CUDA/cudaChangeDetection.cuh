#pragma once

#include "../../common/systemMacros.hpp"

#if (PLATFORM == 1)
    #include <windows.h>
    #pragma comment(lib, "cuda.lib")
    #pragma comment(lib, "cudart.lib")
#endif

#include "../../common/helper_timer.h"
#include "../../common/dataTypes.hpp"
#include "../../common/imageFunctions.hpp"

#include <cuda.h>
#include <math.h>

// Function Protoypes
void printCUDADeviceProperties(void);
void runOnGPU(ImageData *oldImage, ImageData *newImage, int threshold, uint8_t *detectedChanges);
void cleanup(void);
