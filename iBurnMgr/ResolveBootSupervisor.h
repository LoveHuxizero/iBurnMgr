#ifndef RESOLVEBOOTSUPERVISOR
#define RESOLVEBOOTSUPERVISOR
#ifndef _STRING_
#include <string>
#endif

namespace ResolveSupervisor{
	typedef struct _ResolveData{
		std::wstring latter;
		HWND m_hWnd;
	}ResolveData;
	DWORD WINAPI ResolveSupervisorThread(LPVOID lParam);
	enum DriveTarget{
		OSNT6=1,
		OSNT5=2
	};
	class ResolveSupervisor{
	public:
		static bool FixUSBDeviceBoot(LPCWSTR DeviceLetter);
		ResolveSupervisor();
	};
}

#endif