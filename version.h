#ifndef VERSION_H
#define VERSION_H

namespace EditorVersion{
	
	//Date Version Types
	static const char DATE[] = "16";
	static const char MONTH[] = "06";
	static const char YEAR[] = "2013";
	static const char UBUNTU_VERSION_STYLE[] = "13.06";
	
	//Software Status
	static const char STATUS[] = "Alpha";
	static const char STATUS_SHORT[] = "a";
	
	//Standard Version Type
	static const long MAJOR = 0;
	static const long MINOR = 0;
	static const long BUILD = 17;
	static const long REVISION = 86;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 52;
	#define RC_FILEVERSION 0,0,17,86
	#define RC_FILEVERSION_STRING "0, 0, 17, 86\0"
	static const char FULLVERSION_STRING[] = "0.0.17.86";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 3;
	

}
#endif //VERSION_H