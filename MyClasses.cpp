#include"MyClasses.h"
//using namespace System::Runtime::InteropServices;
//using namespace System;

void StringToChar(String^ s, std::string& os) {
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s).ToPointer());
	os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));
}

String^ CharToString(char* str) {
	IntPtr dptr = Marshal::AllocHGlobal(strlen(str) + 1);
	char* sdes = (char*)dptr.ToPointer();
	for (int i; i < strlen(str); i++) {
		sdes[i] = str[i];
	}
	return Marshal::PtrToStringAnsi((IntPtr)str);
}

char* EncodeText(char* psText) {
	unsigned char sbit = psText[0] & 0x80;

	for (int i = 0; i < strlen(psText) - 1; i++) {
		psText[i] = psText[i] << 1;
		psText[i] = psText[i] | ((psText[i + 1] & 0x80) >> 7);
	}
	psText[strlen(psText) - 1] = psText[strlen(psText) - 1] << 1;
	psText[strlen(psText) - 1] |= sbit >> 7;

	return psText;
}

char* DecodeText(char* psText) {
	unsigned char sbit = (psText[strlen(psText) - 1] & 0x01) << 7;

	for (int i = strlen(psText) - 1; i > 0; i--) {
		psText[i] = (psText[i] >> 1) & 0x7F;
		psText[i] |= (psText[i - 1] & 0x01) << 7;
	}

	psText[0] = (psText[0] >> 1) & 0x7F;
	psText[0] |= sbit;
	return psText;
}