#ifndef UniversalDiskFormat
#define UniversalDiskFormat

#define DISABLE_NOW

#include <string>
#include <imapi2.h>
#include <imapi2error.h>
#include <imapi2fs.h>
#include <imapi2fserror.h>
#include "APIController.h"

///////////
#define UNNAMESPACE namespace Decode{
#define UNNAMESPACEEND }}
//START
NAMESPACEMETRO
UNNAMESPACE

class UniversalDiskFormatDecode{
private:
	//IDiscRecorder2Ex
	IDiscFormat2Data* m_pIDiscFormat2Data;
	std::wstring m_Image;
	std::wstring m_drive;
public:
	enum DiscFormats{
		DiscISO9660=1,
		DiscJoliet=2,
		DiscUDF=3
	};
	UniversalDiskFormatDecode(std::wstring image,std::wstring drive);
	~UniversalDiskFormatDecode();
};


////End
UNNAMESPACEEND
#endif