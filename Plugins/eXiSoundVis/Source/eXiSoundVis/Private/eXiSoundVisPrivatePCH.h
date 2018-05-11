#pragma once

#include "Engine.h"
#include "eXiSoundVis.h"

// KISS Headers, that we need for the decompression part
#include "ThirdParty/Kiss_FFT/kiss_fft129/kiss_fft.h"
#include "ThirdParty/Kiss_FFT/kiss_fft129/tools/kiss_fftnd.h"

// Log Category
DECLARE_LOG_CATEGORY_EXTERN(LogeXiSoundVis, Log, All);

// Short Defines to faster debug
#define PrintLog(TextToLog) if(bShowLogDebug) UE_LOG(LogeXiSoundVis, Log, TextToLog)
#define PrintWarning(TextToLog) if(bShowWarningDebug) UE_LOG(LogeXiSoundVis, Warning, TextToLog)
#define PrintError(TextToLog) if(bShowErrorDebug) UE_LOG(LogeXiSoundVis, Error, TextToLog)