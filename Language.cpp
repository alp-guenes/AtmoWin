#include "stdafx.h"
#include "Language.h"
#include "shlobj.h" 

char *sTextChannelAssignment[MAX_CHANNELASSIGNMENT_STRINGS] = 
{"Off",                   //0
"Top",                    //1
"Right",                  //2
"Bottom",                 //3
"Left",                   //4
"Combined",               //5
"delete mapping",         //6
"edit mapping",           //7
"add Mapping",            //8
"cancel",                 //9
"Mappings",               //10
"Hardware Channel",       //11
"Zone number",            //12
"Name of mapping"         //13
"Channel assignment",     //14
};

char *sTextSettingDialog[MAX_SETTINGSDIALOG_STRINGS] = 
{"no effect",                    //0
"life",                          //1
"static color",                  //2
"color changer",                 //3
"color changer LR",              //4
"Connected successfully",        //5
"Configure device",              //6
"center zones",                  //7
"Change channel assignments",    //8
"Configure software adjustment", //9
"Configure hardware adjustment", //10
"Select",                        //11
"Select",                        //12
"Use...",                        //13
"Widescreenmodus",               //14
"Cancel",                        //15
"Effect active:",                //16
"Static color",                  //17
"Color change",                  //18
"Color change Left/Right",       //19
"Shutdown color",                //20
"Steps:",                        //21
"Steps:",                        //22
"Device type:",                  //23
"Zones top:",                    //24
"Zones bottom:",                 //25
"Zones Left/Right:",             //26
"Live image parameters",         //27
"No Filter",                     //28
"Combined",                      //29
"Percent",                       //30
"Edge weighting",                //31
"Brightness",                    //32
"Darkness Limit",                //33
"Hue windowing",                 //34
"Sat windowing",                 //35
"Zone overlap",                  //36
"Saturation",                    //37
"Sensitivity",                   //38
"Filter length",                 //39
"Filter threshold",              //40
"Filter smoothness",             //41
"GDI capure framerate",          //42
"Filtermode:",                   //43
"source:",                       //44
"zone/ LED setup",               //45
"White-/ Color Adjustmet",       //46
"Gradienten...",                 //47
"Interlace rows",                //48
"name",                          //49
"save",                          //50
"delete",                        //51
"profiles ",                     //52
"load",                          //53
"default",                       //54
};

char *sTextMenu[MAX_MENU_STRINGS] = 
{"Setting",                //0
"Language",                //1
"Mode",                    //2
"no effect",               //3
"life",                    //4
"static color",            //5
"color changer",           //6
"color changer LR",        //7
"channel assignment",      //8
"Info",                    //9
"Exit",                    //10
};

char *sTextColorPicker[MAX_COLORPICKER_STRINGS] = 
{"Red",                    //0
"Green",                   //1
"Blue",                    //2
"ColorPicker",             //3
"Cancel",                  //4
};

char *sTextAtmoGradients[MAX_GRADIENTSDIALOG_STRINGS] = 
{"Zone",                                                 //0
"Combined zone",                                         //1
"Edge weighting",                                        //2
"File",                                                  //3
"really overwrite?",                                     //4
"Question",                                              //5
"file cannot be overwritten.",                           //6 
"Error",                                                 //7
"Gradient loaded ok.",                                   //8
"Info",                                                  //9
"File not found",                                        //10
"File size / resolution is wrong!",                      //11
"File is probably no BMP file!",                         //12
"File has not the correct color depth (8-bit, 24-bit)?", //13
"Please only BMP drag files onto the surface!",          //14
"Gradient progressions",                                 //15
"Cancel",                                                //16
"Zones",                                                 //17
};

char *sTextWhiteSetup[MAX_WHITESETUP_STRINGS] = 
{"white",                                                 //0
"red",                                                    //1
"green",                                                  //2
"blue",                                                   //3
"yellow",                                                 //4
"magenta",                                                //5
"cyan",                                                   //6
"Cancel",                                                 //7
"color slider ",                                          //8  
"software gamma adjustment ",                             //9
"modus:",                                                 //10
"active",                                                 //11
"reset all",                                              //12
"reset to default value",                                 //13
"View Color",                                             //14
"greyscale adjustment ",                                  //15
"get value from LUT",                                     //16
"use 3D-Lut",                                             //17
"color/ white adjustment ",                               //18
"simple white adjustment",                                //19
"color adjustment",                                       //20
"!!! not yet implemented !!!",                            //21
"SEDU calibration mode",                                  //22
"invert colors",                                          //23
"disabled",                                               //24
"Each color individually",                                //25
};

char *sTextWhiteSetupHW[MAX_WHITESETUPHW_STRINGS] = 
{"Save to controller programming (EEPROM)...",            //0
"Cancel",                                                 //1
"Adjusting brightness...",                                //2
"contrast",                                               //3
"Red",                                                    //4
"Green",                                                  //5
"Blue",                                                   //6
"Gamma correction",                                       //7
"Global contrast",                                        //8
"The hardware white balance is possible only with an active connection to the hardware.", //9
"Error",                                                  //10
};

char *sTextAtmoDlg[MAX_ATMODLG_STRINGS] = 
{"cancel",                                                //0
"Interface:",                                             //1
"Connection...",                                          //2
"number of LED's",                                        //3
"Speed:",                                                 //4
};

char *sTextDmxDlg[MAX_DMXDLG_STRINGS] = 
{"cancel",                                                //0
"Interface:",                                             //1
"Connection...",                                          //2
"DMX start channels (separator "","" or "";"")",          //3
"Number of RGB channels (1..256):",                       //4
"Speed:",                                                 //5
"Configure simple DMX",                                   //6
};

char *sTextMultiAtmoLightDlg[MAX_MULTIATMOLIGHTDLG_STRINGS] = 
{"Configure Atmo light multi",                            //0
"Cancel",                                                 //1
"Interface 0",                                            //2
"Connection...",                                          //3
"Interface 1",                                            //4
"Interface 2",                                            //5
"Interface 3",                                            //6
"Disabled",                                               //7
};

char *sTextMomoDlg[MAX_MOMODLG_STRINGS] = 
{"Configure MoMoLight device",                            //0
"Cancel",                                                 //1
"Serialport:",                                            //2
"Connection...",                                          //3
"Device type:",                                           //4
"3 - Channels",                                           //5
"4 - Channels",                                           //6
};

char *sTextNordLightSetup[MAX_NORDLIGHTSETUP_STRINGS] = 
{"Configure Fnordlight device",                           //0
"Cancel",                                                 //1
"Serialport:",                                            //2
"Connection...",                                          //3
"Num Channels:",                                          //4
"Number of channels out of range 1..255",                 //5
"Error",                                                  //6
};

CString CLanguage::sText[MAX_CHANNELASSIGNMENT_STRINGS];
CString CLanguage::sSettingText[MAX_SETTINGSDIALOG_STRINGS];
CString CLanguage::sMenuText[MAX_MENU_STRINGS];
CString CLanguage::sTextCPicker[MAX_COLORPICKER_STRINGS];
CString CLanguage::sGradientsText[MAX_GRADIENTSDIALOG_STRINGS];
CString CLanguage::sWhiteSetupText[MAX_WHITESETUP_STRINGS];
CString CLanguage::sWhiteSetupHWText[MAX_WHITESETUPHW_STRINGS];
CString CLanguage::sAtmoDlgText[MAX_ATMODLG_STRINGS];
CString CLanguage::sDmxDlgText[MAX_DMXDLG_STRINGS];
CString CLanguage::sMultiAtmoLightDlgText[MAX_MULTIATMOLIGHTDLG_STRINGS];
CString CLanguage::sMomoDlgText[MAX_MOMODLG_STRINGS];
CString CLanguage::sNordLightSetupText[MAX_NORDLIGHTSETUP_STRINGS];

char CLanguage::szCurrentDir[MAX_PATH];
char CLanguage::szFileINI[MAX_PATH];
char CLanguage::szLang[MAX_PATH], CLanguage::szTemp[512], CLanguage::Buffer[1024], CLanguage::szParam[32]; 

CLanguage::CLanguage(void)
{
}

CLanguage::~CLanguage(void)
{
}

bool CLanguage::DirectoryExists(const char* dirName) 
{
	DWORD attribs = ::GetFileAttributesA(dirName);
	if (attribs == INVALID_FILE_ATTRIBUTES) 
	{
		return false;
	}
	return (attribs & FILE_ATTRIBUTE_DIRECTORY);
}


char CLanguage::GetSpecialFolder(int CLSID) 
{
	LPITEMIDLIST  pidl ; 
	LPMALLOC      pShellMalloc; 

	// SHGetSpecialFolderLocation generates a PIDL. The memory for the PIDL 
	// is allocated by the shell, and should be freed using the shell 
	// mallocator COM object. Use SHGetMalloc to retrieve the malloc object 
	if(SUCCEEDED(SHGetMalloc(&pShellMalloc))) 
	{ 
		// if we were able to get the shell malloc object, then 
		// proceed by fetching the pidl for the windows desktop 
		if(SUCCEEDED(SHGetSpecialFolderLocation(NULL, 
			CLSID, &pidl))) 
		{ 
			// return is true if success 
			if(SHGetPathFromIDList(pidl, (char*)szCurrentDir)) 
			{ 
				
				strcat(szCurrentDir, "\\Team MediaPortal\\MediaPortal\\AtmoWin\\Language");
				return *szCurrentDir;
			} 

			pShellMalloc->Free(pidl); 
		} 

		pShellMalloc->Release(); 
	} 
}
