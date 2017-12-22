#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <mmsystem.h>
#include <string.h>
#include <vcclr.h>
#include <fstream>
#include <stdio.h>
#include "Windows.h"
#include <tchar.h>
#include <iostream>

using namespace System::Runtime::InteropServices;
using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace System::Runtime::InteropServices;


struct MySound {
	int s;
	int d;
	MySound* n;
	MySound* l;
};

struct track {
	char* name;
	MySound* t;
	track* l;
	track* n;
};

delegate void waveOutProcDelegate(HWAVEOUT  hwo, UINT uMsg,
	DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2);


ref class MyMus      
{
	char* buffer;
	const int paus = 4800;

public:
	MyMus();

	const int K = 30000;

delegate void waveOutProcDelegate(HWAVEOUT  hwo, UINT uMsg,DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2);

public:  waveOutProcDelegate^ wtfisthis;

		 /// SaveToFile - метод, сохраняющий мелодию в файл
		 /// @MySound* first – параметр, хранящий первую ноту мелодии
		 /// @String ^n - параметр, хранящий название мелодии

public: void SaveToFile(MySound* first, String ^n) {
	MySound* so = first;

	FILE *fp;
	char* f;
	f = new char[100];
	strcpy(f,"C:\\Users\\mssi\\desktop\\music_app\\");
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(n);
	const char* s = static_cast<char*>(ptrToNativeString.ToPointer());      //Convert from string to char*
	Marshal::FreeHGlobal(ptrToNativeString);
	strcat(f, s);
	strcat(f, ".unm");
	fp = fopen(f, "w");
	while (so != NULL){
		fwrite(so, sizeof(MySound), 1, fp);
		so = so->n;
	}
	fclose(fp);
}
//!

/// int scan_dir(LPVOID dir_name) - метод, загружающий мелодии из папки
/// @LPVOID dir_name – параметр, хранящий первую ноту мелодии
/// @return количество найденых мелодий

public: int scan_dir(LPVOID dir_name) {     //!
	TCHAR* direct = (TCHAR*)dir_name;
	WIN32_FIND_DATA f;
	HANDLE hFile;
	TCHAR oDir[MAX_PATH];
	_tcscpy(oDir, direct);
	_tcscat(oDir, _T("*.unm"));
	int i = 0;		
	hFile = FindFirstFile(oDir, &f);
	if ((!(f.dwFileAttributes&FILE_ATTRIBUTE_DEVICE)) && !(f.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)) {
		i++;
	}
	while (FindNextFile(hFile, &f)) {
		if ((!(f.dwFileAttributes&FILE_ATTRIBUTE_DEVICE)) && !(f.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)) {
			i++;
		}
	}
	return i;
}		
//!

/// MySound* ReadFromFile(String ^file_name, int co, int len, MySound* ns) - метод, загружающий мелодии из файла
/// @String ^file_name – параметр, хранящий название мелодии
/// @int co – параметр, хранящий количество нот
/// @int len – параметр, хранящий длительность
/// @MySound* ns - параметр, хранящий первую ноту
/// @return первую ноту

public: MySound* ReadFromFile(String ^file_name, int co, int len, MySound* ns){
	MySound *first = NULL, *now = NULL, *last = NULL;
	int count = 0, length = 0;
	//now = new MySound();
	FILE* fp;
	char* n;
	{
		///////////////////////////////////////////////////////////////////////////////////////
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(file_name);
		n = static_cast<char*>(ptrToNativeString.ToPointer());      //Convert from string to char*
//		Marshal::FreeHGlobal(ptrToNativeString);
		///////////////////////////////////////////////////////////////////////////////////////
		fp = fopen(n, "r");
	}
	String ^sLine; ArrayList ^arrText = gcnew ArrayList();
	//sLine = objReader->ReadLine();
	char* name;
	///////////////////////////////////////////////////////////////////////////////////////
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(sLine);
	name = static_cast<char*>(ptrToNativeString.ToPointer());      //Convert from string to char*
	Marshal::FreeHGlobal(ptrToNativeString);
	///////////////////////////////////////////////////////////////////////////////////////
	//sLine = objReader->ReadLine();
	size_t res;
	now = new MySound();
	res = fread(now, sizeof(MySound), 1, fp);
	while (res>0)
	{
		int snd, dur, i = 0;				
		count++;
		length = length + dur;
		if (first == NULL) {
			first = now;
			first->l = NULL;	
			last = first;
		}
		else {
			last->n = now;
			now->l = last;
			last = last->n;
			ns = now;
		}
		
		//sLine = objReader->ReadLine();
		now = new MySound();
		res = fread(now, sizeof(MySound), 1, fp) > 0;
	}
	//objReader->Close();
	fclose(fp);
	if (ns != NULL) {
		ns->n = NULL;
	}
	else {
		now->n = NULL;
	}
	return first;
	co = count;
 	len = length;
}

public: void waveOutProc(HWAVEOUT  hwo, UINT uMsg,DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
{
	if (uMsg == WOM_DONE) {
		waveOutUnprepareHeader((HWAVEOUT)dwParam1, (LPWAVEHDR)dwParam2, sizeof(WAVEHDR));
		delete buffer;
		buffer = NULL;
		waveOutClose((HWAVEOUT)dwParam1);
		delete (void *)dwParam2;

		// b->Enabled = 1;
		// delete (void *)dwParam1;

	}
}

public: void waveOutProc1(HWAVEOUT  hwo, UINT uMsg,DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
{
	if (uMsg == WOM_DONE) {
		waveOutUnprepareHeader((HWAVEOUT)dwParam1, (LPWAVEHDR)dwParam2, sizeof(WAVEHDR));
		delete buffer;
		buffer = NULL;
		waveOutClose((HWAVEOUT)dwParam1);
		delete (void *)dwParam2;
	}
}


		/// buttonM(int SO,int dur) - метод, хранящий действия при нажатии на кнопку виртуального пианино
		/// @int SO – параметр, хранящий частоту ноты
		/// @int dur – параметр, хранящий длительность ноты



void buttonM(int SO,int dur) {			
			if (buffer == NULL) {
				StreamWriter^ sw = gcnew StreamWriter("C:\\Users\\mssi\\desktop\\IN.txt");
				HWAVEOUT hWaveOut = 0;
				int Sound = SO;
				if (Sound != 0) {
					Sound = K / Sound;
				}
				WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 48000, 48000, 1, 8, 0 };
				waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, (DWORD_PTR)(Marshal::GetFunctionPointerForDelegate(wtfisthis = gcnew waveOutProcDelegate(this, &MyMus::waveOutProc))).ToPointer(), 0, CALLBACK_FUNCTION);
				buffer = new char[(int)dur];
				
				for (int t = 0; t < (int)dur; ++t)
					buffer[t] = (t % Sound == 0) ? 255 : 0;
				sw->WriteLine(SO.ToString());
				WAVEHDR * header = new WAVEHDR;
				*header = { buffer, (DWORD)dur, 0, 0, 0, 0, 0, 0 };
				waveOutPrepareHeader(hWaveOut, header, sizeof(WAVEHDR));
				waveOutWrite(hWaveOut, header, sizeof(WAVEHDR));

				sw->Close();
			}
		}

/// Play_Trac(MySound* fs, MySound* ms, int size, int count) - метод, воспроизводящий мелодию
/// @MySound* fs – параметр, хранящий первую ноту
/// @MySound* ms – параметр, хранящий воспо=роизводимую ноту
/// @int size – параметр, хранящий длительность мелодии
/// @int count - параметр, хранящий количество нот

public: void Play_Trac(MySound* fs, MySound* ms, int size, int count) {
		StreamWriter^ sw = gcnew StreamWriter("C:\\Users\\mssi\\desktop\\OUT.txt");
		MySound* m;
		if (ms != NULL) {
			if (buffer == NULL) {
				HWAVEOUT hWaveOut = 0;

				m = fs;
				WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 48000, 48000, 1, 8, 0 };
				System::IntPtr intPtr;
				intPtr = Marshal::GetFunctionPointerForDelegate(wtfisthis = gcnew waveOutProcDelegate(this, &MyMus::waveOutProc));

				waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx,//(DWORD_PTR)(this->Handle).ToPointer()
					(DWORD_PTR)(intPtr.ToPointer())
					, 0, CALLBACK_FUNCTION);

				buffer = new char[size + count*paus];
				int i = 0;
				while ((m != NULL)) {
					int Sound = m->s;
					if (Sound != 0) {
						Sound = K / Sound;
					}
					for (int t = 0; t < m->d; ++t) {
						if (Sound != 0) {
							buffer[i] = (t % Sound == 0) ? 255 : 0;
						}
						else {
							buffer[i] = Sound;
						}
						i++;
					}
					for (int t = 0; t < paus; ++t) {
						buffer[i] = 0;
						i++;
					}
					sw->WriteLine(m->s.ToString());
					m = m->n;

				}
				WAVEHDR * header = new WAVEHDR;
				*header = { buffer, (DWORD)size, 0, 0, 0, 0, 0, 0 };
				waveOutPrepareHeader(hWaveOut, header, sizeof(WAVEHDR));
				waveOutWrite(hWaveOut, header, sizeof(WAVEHDR));

			}
		}
		sw->Close();
}
};

