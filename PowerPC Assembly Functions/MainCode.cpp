#include "stdafx.h"
#include "ReplayFix.h"
#include "Controls.h"
#include "StopStartAlts.h"
#include "Save States.h"
#include "Miscellaneous Code.h"
#include "StopDPadOnSSS (except Wiimote).h"
#include "DrawDI.h"
#include "Code Menu.h"
#include "IASA Overlay.h"
#include "Control Codes.h"
#include "Last Character Auto Select.h"
#include "Tag Based Costumes.h"
#include "Light Shield.h"
#include "IkeClimbers.h"
#include "AIDisplay.h"
#include "C++Injection.h"
//#include "FPS Display.h"
using namespace std;

// Set asm output path in config.cfg line 2
#if DOLPHIN_BUILD
	static string OutputAsmPath = outputPath + "Net-CodeMenu.asm";
#else
	static string OutputAsmPath = outputPath + "CodeMenu.asm";
#endif

int main()
{
	string TextPath = outputPath + "ASM.txt";
	
	CodeStart(TextPath);

	//place all ASM code here

	//ReplayFix();

	//NameIsFound();

	//MenuControlCodes();

	//StopStartAltFunctions();

	//StopPokemonTrainerSwitch();

	//StopDPadOnSSS();

	//ConvertButtons();

	//ItemSpawnControl();

	//ClearASLData();

	//SetTeamAttackTraining();

	//LXPGreenOverlayFix();

	CodeMenu(); tagBasedCostumes();

	//musicPercentCode();

	//DoubleFighterTest();

	//UCF();

	//CStickSlowFix();

	//FixStickyRAlts();

	//SelectLastCharacter();

	//FixTr4shTeamToggle();

	//cstickTiltTest();

	//FPSDisplay();

	//CStickTiltFix();

	//DBZModeTest();

	//slipperyTechs();

	//lightShield();

	//IkeClimbers();

	//fixStanimaTextBug();

	//AIDisplay();

	//loadCppCodes(); writeInjectionsRepeat();

	CodeEnd();

	MakeASM(TextPath, OutputAsmPath);

	//Set GCT Paths in config.cfg
	//Input path is line 1
	//Output path is line 2
	string InputGCTPath = inputPath + "RSBE01.GCT";
	string OutputGCTPath = outputPath + "RSBE01.GCT";
	MakeGCT(TextPath, InputGCTPath, OutputGCTPath); //remove if you don't want to append code
	return 0;
}