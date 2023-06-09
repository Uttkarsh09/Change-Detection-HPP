#pragma once

#include "../../common/systemMacros.hpp"

#if (PLATFORM == 1)
    #include <windows.h>
    #include <CL/opencl.h>
    #pragma comment(lib, "OpenCL.lib")
#elif (PLATFORM == 2)
    #include <CL/opencl.h>
#else
    #include <OpenCL/opencl.h>
#endif

#include "../../common/dataTypes.hpp"
#include "../../common/imageFunctions.hpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
using namespace std;


// Function Declarations
void getOpenCLPlatforms(void);
void getOpenCLDevices(void);
void printDeviceProperties(void);
void createOpenCLContext(void);
void createOpenCLCommandQueue(void);
void createOpenCLProgram(const char*);
void createOpenCLImageStructure(ImageData*, ImageData*);
void createOpenCLKernel(int);
void scheduleOpenCLKernel(ImageData*, ImageData*);
void getOpenCLResults(ImageData*, string);
void runOnGPU(ImageData*, ImageData*, int, uint8_t*, string);
void cleanup(void);

// Utility Functions
string getErrorString(cl_int);
