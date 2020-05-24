// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "MemoryMgr.h"

extern "C"
{
	__declspec(dllexport) void InitializeASI()
	{
		Memory::VP::Patch<char>(0x7EC9C4, 0);
		Memory::VP::Patch<char>(0x7EC9C5, 0);
	}
}
