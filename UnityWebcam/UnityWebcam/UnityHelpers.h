

#ifndef __UNITYHELPERS__
#define __UNITYHELPERS__

#include <string>
#include <sstream>
#include "mTypes.h"
#include "IUnityInterface.h"

enum ELogLevel{
	ELL_INFO,
	ELL_SUCCESS,
	ELL_WARNING,
	ELL_ERROR
};

void LogMessage(const std::string& msg, ELogLevel level);
void BlitImage( void* _TextureNativePtr, int _UnityTextureWidth, int _UnityTextureHeight);


typedef void(*FuncPtr)(const char*);
typedef float(*FuncFloatRetPtr)();


class  LogManager
{
	static LogManager* s_instance;;
	FILE* m_logFile;
	std::string fileName;
public:
	LogManager();
	~LogManager();
	void LogMessage(const std::string& msg);

	static LogManager* Instance();
};


#endif
