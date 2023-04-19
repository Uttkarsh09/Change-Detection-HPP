#pragma once

#include "../../common/systemMacros.hpp"
#include "../../common/dataTypes.hpp"

#if (PLATFORM == 1)
    #include <CL/opencl.h>
    #pragma comment(lib, "OpenCL.lib")
#elif (PLATFORM == 2)
    #include <CL/opencl.h>
#else
    #include <OpenCL/opencl.h>
#endif

#include <iostream>
#include <cstdlib>
using namespace std;

// Function Declarations
void getOpenCLPlatforms(void);
void getOpenCLDevices(void);
void printOpenCLDeviceProperties(void);
void createOpenCLContext(void);
void createOpenCLCommandQueue(void);
void runOnCPU(ImageData *oldImage, ImageData *newImage, int threshold, uint8_t *detectedChanges);
void cleanup(void);
