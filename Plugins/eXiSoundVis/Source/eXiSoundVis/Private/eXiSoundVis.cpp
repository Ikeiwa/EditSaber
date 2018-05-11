#include "eXiSoundVisPrivatePCH.h"
 
// Log Category
DEFINE_LOG_CATEGORY(LogeXiSoundVis);

void FeXiSoundVisModule::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}
 
void FeXiSoundVisModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
 
IMPLEMENT_MODULE(FeXiSoundVisModule, eXiSoundVis)