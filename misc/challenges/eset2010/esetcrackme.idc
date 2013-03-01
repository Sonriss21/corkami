//
// �������������������������������������������������������������������������ͻ
// �     This file is generated by The Interactive Disassembler (IDA)        �
// �     Copyright (c) 2006 by DataRescue sa/nv, <ida@datarescue.com>        �
// �                      Licensed to: Freeware version                      �
// �������������������������������������������������������������������������ͼ
//
//
//      This file should be used in the following way:
//         - reload executable into IDA with using switch -c
//         - press F2 and enter the name of this file.
//
//      NOTE: This file doesn't contain all information from the database.
//

#define UNLOADED_FILE   1
#include <idc.idc>

static main(void) {
        GenInfo();              // various settings
        Segments();             // segmentation
        Enums();                // enumerations
        Structures();           // structure types
        Bytes();                // individual bytes (code,data)
        Functions();            // function definitions
        SegRegs();              // segment register values
}

//------------------------------------------------------------------------
// General information

static GenInfo(void) {

        DeleteAll();    // purge database
	SetPrcsr("metapc");
	StringStp(0xA);
	Tabs(1);
	Comments(0);
	Voids(0);
	XrefShow(2);
	AutoShow(1);
	Indent(16);
	CmtIndent(40);
	TailDepth(0x10);
}

//------------------------------------------------------------------------
// Information about segmentation

static Segments(void) {
	SetSelector(0X1,0X0);
	SetSelector(0X2,0X0);
	SetSelector(0X3,0X0);
	;
	SegCreate(0X401000,0X402000,0X1,1,3,2);
	SegRename(0X401000,"UPX0");
	SegClass (0X401000,"CODE");
	SegDefReg(0x401000,"es",0x0);
	SegDefReg(0x401000,"ss",0x0);
	SegDefReg(0x401000,"ds",0x1);
	SetSegmentType(0X401000,2);
	SegCreate(0X402000,0X402050,0X1,1,3,2);
	SegRename(0X402000,".idata");
	SegClass (0X402000,"XTRN");
	SegDefReg(0x402000,"es",0x0);
	SegDefReg(0x402000,"ss",0x0);
	SegDefReg(0x402000,"ds",0x1);
	SetSegmentType(0X402000,1);
	SegCreate(0X402050,0X465000,0X1,1,3,2);
	SegRename(0X402050,"UPX0");
	SegClass (0X402050,"CODE");
	SegDefReg(0x402050,"es",0x0);
	SegDefReg(0x402050,"ss",0x0);
	SegDefReg(0x402050,"ds",0x1);
	SetSegmentType(0X402050,2);
	SegCreate(0X465000,0X467000,0X2,1,3,2);
	SegRename(0X465000,"UPX1");
	SegClass (0X465000,"CODE");
	SegDefReg(0x465000,"es",0x0);
	SegDefReg(0x465000,"ss",0x0);
	SegDefReg(0x465000,"ds",0x1);
	SetSegmentType(0X465000,2);
	SegCreate(0X469000,0X46A000,0X3,1,3,2);
	SegRename(0X469000,".idata2");
	SegClass (0X469000,"DATA");
	SegDefReg(0x469000,"es",0x0);
	SegDefReg(0x469000,"ss",0x0);
	SegDefReg(0x469000,"ds",0x1);
	SetSegmentType(0X469000,3);
	LowVoids(0x401000);
	HighVoids(0x46A000);
}

static Enums_0(id) {

	id = AddEnum(-1,"ctrls",0x1100000);
	AddConstEx(id,"ID_name",	0X7D0,	-1);
	AddConstEx(id,"ID_serial",	0X7D1,	-1);
	AddConstEx(id,"ID_ender",	0X7D2,	-1);
	AddConstEx(id,"ID_statusbar",	0X7D3,	-1);
	AddConstEx(id,"ALG_MD2",	0X8001,	-1);
	return id;
}

//------------------------------------------------------------------------
// Information about enum types

static Enums(void) {
        auto id;
	id = Enums_0(id);
}

//------------------------------------------------------------------------
// Information about structure types

static Structures(void) {
        auto id;
}

//------------------------------------------------------------------------
// Information about bytes

static Bytes_0(void) {
        auto x;
#define id x

	ExtLinA		(0X401000,	0,	"; File Name   : D:\\esetcrackme\\idafree49\\{app}\\esetdump-.exe");
	ExtLinA		(0X401000,	1,	"; Format      : Portable executable for 80386 (PE)");
	ExtLinA		(0X401000,	2,	"; Imagebase   : 400000");
	ExtLinA		(0X401000,	3,	"; Section 1. (virtual address 00001000)");
	ExtLinA		(0X401000,	4,	"; Virtual size                  : 00064000 ( 409600.)");
	ExtLinA		(0X401000,	5,	"; Section size in file          : 00064000 ( 409600.)");
	ExtLinA		(0X401000,	6,	"; Offset to raw data for section: 00001000");
	ExtLinA		(0X401000,	7,	"; Flags E0000080: Bss Executable Readable Writable");
	ExtLinA		(0X401000,	8,	"; Alignment     : default");
	MakeCode	(0X401000);
	MakeCode	(x=0X401005);
	OpHex		(x,	1);
	MakeCode	(x=0X40100F);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeCode	(x=0X401029);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeArray	(0X401043,	0XD);
	MakeDword	(0X401050);
	MakeArray	(0X401050,	0X4);
	MakeDword	(0X401060);
	MakeArray	(0X401060,	0X4);
	MakeCode	(0X401070);
	MakeCode	(x=0X401082);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X4010C8);
	OpHex		(x,	1);
	MakeCode	(x=0X4010EE);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X4010FF);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X40110D);
	OpHex		(x,	1);
	MakeCode	(x=0X401113);
	OpHex		(x,	1);
	MakeCode	(0X40111E);
	MakeCode	(x=0X40112C);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeCode	(0X40113F);
	MakeCode	(x=0X401142);
	OpStkvar	(x,	1);
	MakeComm	(0X401163,	"uExitCode");
	MakeCode	(0X401163);
	MakeComm	(0X40116E,	"lpModuleName");
	MakeCode	(0X40116E);
	MakeComm	(0X401175,	"lpIconName");
	MakeComm	(0X40117A,	"hInstance");
	MakeComm	(0X401180,	"lParam");
	MakeComm	(0X401181,	"wParam");
	MakeComm	(0X401183,	"Msg");
	MakeComm	(0X401188,	"hWnd");
	MakeCode	(x=0X401188);
	OpStkvar	(x,	0);
	MakeCode	(x=0X401194);
	OpStkvar	(x,	1);
	MakeStr		(0X40119A,	0X40120C);
	MakeName	(0X40119A,	"a0hiResreverIMH");
	MakeCode	(0X40120C);
	MakeCode	(0X401210);
	MakeName	(0X401210,	"start");
	MakeComm	(0X401215,	"lpModuleName");
	MakeComm	(0X40121C,	"dwInitParam");
	MakeComm	(0X40121E,	"lpDialogFunc");
	MakeCode	(x=0X40121E);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeComm	(0X401223,	"hWndParent");
	MakeComm	(0X401225,	"lpTemplateName");
	MakeComm	(0X40122A,	"hInstance");
	MakeComm	(0X401230,	"uExitCode");
	MakeStr		(0X401238,	0X40124A);
	MakeName	(0X401238,	"a0123456789abcd");
	MakeArray	(0X40124A,	0X2);
	MakeDword	(0X40124C);
	MakeArray	(0X40124C,	0X17);
	MakeCode	(0X4012A8);
	MakeCode	(0X4012AA);
	MakeName	(0X4012AA,	"DialogFunc");
	MakeCode	(x=0X4012AD);
	OpStkvar	(x,	1);
	MakeComm	(0X4012CE,	"nResult");
	MakeCode	(0X4012CE);
	MakeComm	(0X4012D0,	"hDlg");
	MakeCode	(x=0X4012D0);
	OpStkvar	(x,	0);
	MakeCode	(x=0X4012DC);
	OpStkvar	(x,	1);
	MakeCode	(x=0X4012E0);
	OpEnumEx		(x,	1,	GetEnum("ctrls"),0);
	MakeComm	(0X4012F0,	"lParam");
	MakeCode	(0X4012F0);
	MakeComm	(0X4012F2,	"wParam");
	MakeComm	(0X4012F4,	"Msg");
	MakeComm	(0X4012F9,	"nIDDlgItem");
	MakeComm	(0X4012FE,	"hDlg");
	MakeCode	(x=0X4012FE);
	OpStkvar	(x,	0);
	MakeComm	(0X401306,	"lParam");
	MakeComm	(0X401308,	"wParam");
	MakeComm	(0X40130A,	"Msg");
	MakeComm	(0X40130F,	"nIDDlgItem");
	MakeComm	(0X401314,	"hDlg");
	MakeCode	(x=0X401314);
	OpStkvar	(x,	0);
	MakeComm	(0X40131C,	"lpModuleName");
	MakeComm	(0X401323,	"lpIconName");
	MakeComm	(0X401328,	"hInstance");
	MakeComm	(0X40132E,	"lParam");
	MakeComm	(0X40132F,	"wParam");
	MakeComm	(0X401331,	"Msg");
	MakeComm	(0X401336,	"hWnd");
	MakeCode	(x=0X401336);
	OpStkvar	(x,	0);
	MakeCode	(0X401342);
	MakeCode	(x=0X401348);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X401352);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X401357);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeComm	(0X40135C,	"lParam");
	MakeComm	(0X40135D,	"wParam");
	MakeComm	(0X40135F,	"Msg");
	MakeComm	(0X401361,	"nIDDlgItem");
	MakeCode	(x=0X401361);
	OpEnumEx		(x,	0,	GetEnum("ctrls"),0);
	MakeComm	(0X401366,	"hDlg");
	MakeCode	(x=0X401366);
	OpStkvar	(x,	0);
	MakeName	(0X40136E,	"seriallengthcheck");
	MakeComm	(0X401377,	"cchLength");
	MakeComm	(0X401378,	"lpsz");
	MakeCode	(x=0X40137E);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeComm	(0X401383,	"lParam");
	MakeComm	(0X401384,	"wParam");
	MakeComm	(0X401386,	"Msg");
	MakeComm	(0X401388,	"nIDDlgItem");
	MakeCode	(x=0X401388);
	OpEnumEx		(x,	0,	GetEnum("ctrls"),0);
	MakeComm	(0X40138D,	"hDlg");
	MakeCode	(x=0X40138D);
	OpStkvar	(x,	0);
	MakeName	(0X401395,	"namelengthcheck");
	MakeComm	(0X40139E,	"dwDataLen");
	MakeComm	(0X40139F,	"pbData");
	MakeComm	(0X4013A0,	"Algid");
	MakeCode	(x=0X4013A0);
	OpEnumEx		(x,	0,	GetEnum("ctrls"),0);
	MakeComm	(0X4013A5,	"int");
	MakeComm	(0X4013A7,	"int");
	MakeCode	(x=0X4013A7);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeCode	(x=0X4013B6);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeCode	(x=0X4013C4);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X4013C9);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X4013CE);
	OpChr		(x,	1);
	MakeCode	(x=0X4013D5);
	OpHex		(x,	1);
	MakeCode	(x=0X4013DA);
	OpChr		(x,	1);
	MakeCode	(x=0X4013E2);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X4013EF);
	OpHex		(x,	1);
	MakeCode	(x=0X4013F4);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X401400);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X401405);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X401415);
	OpHex		(x,	1);
	MakeCode	(x=0X40141A);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeComm	(0X40141F,	"lParam");
	MakeComm	(0X401420,	"wParam");
	MakeComm	(0X401422,	"Msg");
	MakeComm	(0X401424,	"nIDDlgItem");
	MakeCode	(x=0X401424);
	OpEnumEx		(x,	0,	GetEnum("ctrls"),0);
	MakeComm	(0X401429,	"hDlg");
	MakeCode	(x=0X401429);
	OpStkvar	(x,	0);
	MakeCode	(0X401436);
	MakeCode	(x=0X40143A);
	OpHex		(x,	1);
	MakeCode	(x=0X40143D);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X40144B);
	OpHex		(x,	1);
	MakeCode	(x=0X401459);
	OpHex		(x,	1);
	MakeCode	(x=0X401467);
	OpHex		(x,	1);
	MakeComm	(0X401474,	"LINUX - sys_exit");
	MakeCode	(x=0X401474);
	OpHex		(x,	0);
	MakeCode	(x=0X401478);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X401482);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X401487);
	OpHex		(x,	1);
	MakeCode	(x=0X40148C);
	OpHex		(x,	1);
	MakeComm	(0X40149A,	"fd");
	MakeComm	(0X40149F,	"addr");
	MakeCode	(x=0X40149F);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeComm	(0X4014A4,	"len");
	MakeComm	(0X4014A9,	"LINUX - sys_write");
	MakeCode	(x=0X4014A9);
	OpHex		(x,	0);
	MakeCode	(0X4014AC);
	MakeCode	(x=0X4014B3);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X4014BD);
	OpHex		(x,	1);
	MakeCode	(x=0X4014C1);
	OpHex		(x,	1);
	MakeComm	(0X4014D6,	"fd");
	MakeComm	(0X4014DB,	"addr");
	MakeCode	(x=0X4014DB);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeComm	(0X4014E0,	"len");
	MakeComm	(0X4014E5,	"LINUX - sys_write");
	MakeCode	(x=0X4014E5);
	OpHex		(x,	0);
	MakeCode	(0X4014E8);
	MakeCode	(x=0X4014EA);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeComm	(0X40154E,	"fd");
	MakeComm	(0X401553,	"addr");
	MakeCode	(x=0X401553);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeComm	(0X401558,	"len");
	MakeComm	(0X40155D,	"LINUX - sys_write");
	MakeCode	(x=0X40155D);
	OpHex		(x,	0);
	MakeStr		(0X401560,	0X4015C4);
	MakeName	(0X401560,	"a1234567811111111000");
	MakeCode	(0X4015C4);
	MakeName	(0X4015C4,	"vm");
	MakeCode	(x=0X4015CD);
	OpHex		(x,	1);
	MakeCode	(x=0X4015D0);
	OpBinary	(x,	1);
	MakeDword	(x=0X4015DC);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X4015DC,	"handlers");
	MakeDword	(x=0X4015E0);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X4015E4);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X4015E8);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X4015EC);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X4015F0);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X4015F4);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X4015F8);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeCode	(x=0X4015FC);
	OpHex		(x,	1);
	MakeName	(0X4015FC,	"ret");
	MakeCode	(0X401600);
	MakeName	(0X401600,	"jxx");
	MakeCode	(0X401611);
	MakeCode	(0X401617);
	MakeName	(0X401617,	"btc");
	MakeCode	(0X40161F);
	MakeName	(0X40161F,	"bts");
	MakeCode	(0X401627);
	MakeName	(0X401627,	"andcopy");
	MakeCode	(x=0X40162C);
	OpHex		(x,	1);
	MakeDword	(x=0X401636);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X40163A);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeCode	(0X40163E);
	MakeName	(0X40163E,	"copyflag");
	MakeCode	(0X401650);
	MakeCode	(0X401658);
	MakeName	(0X401658,	"andflag");
	MakeRptCmt	(0X40165F,	"cl = flag(ecx)? 1:0");
	MakeRptCmt	(0X401669,	"ecx += flag(eax)");
	MakeCode	(x=0X40166C);
	OpHex		(x,	1);
	MakeCode	(x=0X40166E);
	OpHex		(x,	1);
	MakeCode	(0X40167B);
	MakeCode	(0X401683);
	MakeName	(0X401683,	"flagserial");
	MakeCode	(x=0X40168B);
	OpHex		(x,	1);
	MakeRptCmt	(0X401693,	"hexserial");
	MakeCode	(x=0X40169A);
	OpHex		(x,	1);
	MakeCode	(x=0X40169D);
	OpOff		(x,	0,	0X4016A4);
	OpOff		(x,	128,	0X4016A4);
	MakeDword	(x=0X4016A4);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeDword	(x=0X4016A8);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeCode	(0X4016AC);
	MakeCode	(0X4016BA);
	MakeCode	(0X4016C2);
	MakeCode	(0X4016D0);
	MakeCode	(0X4016D4);
	MakeName	(0X4016D4,	"MD2");
	MakeCode	(x=0X4016D7);
	OpHex		(x,	1);
	MakeCode	(x=0X4016DD);
	OpStkvar	(x,	1);
	MakeComm	(0X4016E0,	"dwFlags");
	MakeComm	(0X4016E5,	"dwProvType");
	MakeComm	(0X4016E7,	"pszProvider");
	MakeComm	(0X4016E9,	"pszContainer");
	MakeComm	(0X4016EB,	"phProv");
	MakeCode	(x=0X4016F5);
	OpStkvar	(x,	1);
	MakeComm	(0X4016F8,	"phHash");
	MakeComm	(0X4016F9,	"dwFlags");
	MakeComm	(0X4016FB,	"hKey");
	MakeComm	(0X4016FD,	"Algid");
	MakeCode	(x=0X4016FD);
	OpStkvar	(x,	0);
	MakeComm	(0X401700,	"hProv");
	MakeCode	(x=0X401700);
	OpStkvar	(x,	0);
	MakeComm	(0X40170C,	"dwFlags");
	MakeComm	(0X40170E,	"dwDataLen");
	MakeCode	(x=0X40170E);
	OpStkvar	(x,	0);
	MakeComm	(0X401711,	"pbData");
	MakeCode	(x=0X401711);
	OpStkvar	(x,	0);
	MakeComm	(0X401714,	"hHash");
	MakeCode	(x=0X401714);
	OpStkvar	(x,	0);
	MakeCode	(x=0X401720);
	OpStkvar	(x,	1);
	MakeCode	(x=0X401723);
	OpStkvar	(x,	1);
	MakeComm	(0X401726,	"dwFlags");
	MakeComm	(0X401728,	"pdwDataLen");
	MakeComm	(0X401729,	"pbData");
	MakeComm	(0X40172A,	"dwParam");
	MakeComm	(0X40172C,	"hHash");
	MakeCode	(x=0X40172C);
	OpStkvar	(x,	0);
	MakeCode	(x=0X401738);
	OpStkvar	(x,	1);
	MakeCode	(x=0X40173B);
	OpStkvar	(x,	1);
	MakeCode	(x=0X401740);
	OpStkvar	(x,	1);
	MakeComm	(0X401743,	"dwFlags");
	MakeComm	(0X401745,	"pdwDataLen");
	MakeComm	(0X401746,	"pbData");
	MakeCode	(x=0X401746);
	OpStkvar	(x,	0);
	MakeComm	(0X401749,	"dwParam");
	MakeComm	(0X40174B,	"hHash");
	MakeCode	(x=0X40174B);
	OpStkvar	(x,	0);
	MakeComm	(0X401758,	"hHash");
	MakeCode	(x=0X401758);
	OpStkvar	(x,	0);
	MakeComm	(0X401760,	"dwFlags");
	MakeComm	(0X401762,	"hProv");
	MakeCode	(x=0X401762);
	OpStkvar	(x,	0);
	MakeCode	(0X401771);
	MakeName	(0X401771,	"serialtohex");
	MakeCode	(x=0X401778);
	OpStkvar	(x,	1);
	MakeCode	(x=0X40177B);
	OpStkvar	(x,	1);
	MakeCode	(x=0X40179C);
	OpHex		(x,	1);
	MakeCode	(x=0X4017BD);
	OpHex		(x,	1);
	MakeWord	(0X4017C6);
	MakeDword	(0X4017C8);
	MakeArray	(0X4017C8,	0X57);
	MakeCode	(0X401924);
	MakeName	(0X401926,	"InitCommonControls");
	MakeCode	(0X40192C);
	MakeName	(0X40192C,	"CharUpperBuffA");
	MakeCode	(0X401932);
	MakeName	(0X401932,	"DialogBoxParamA");
	MakeCode	(0X401938);
	MakeName	(0X401938,	"EndDialog");
	MakeCode	(0X40193E);
	MakeName	(0X40193E,	"LoadIconA");
	MakeCode	(0X401944);
	MakeName	(0X401944,	"MessageBoxA");
	MakeCode	(0X40194A);
	MakeName	(0X40194A,	"SendDlgItemMessageA");
	MakeCode	(0X401950);
	MakeName	(0X401950,	"SendMessageA");
	MakeCode	(0X401956);
	MakeName	(0X401956,	"ExitProcess");
	MakeCode	(0X40195C);
	MakeName	(0X40195C,	"GetModuleHandleA");
	MakeCode	(0X401962);
	MakeName	(0X401962,	"CryptAcquireContextA");
	MakeCode	(0X401968);
	MakeName	(0X401968,	"CryptCreateHash");
	MakeCode	(0X40196E);
	MakeName	(0X40196E,	"CryptDestroyHash");
	MakeCode	(0X401974);
	MakeName	(0X401974,	"CryptGetHashParam");
	MakeCode	(0X40197A);
	MakeName	(0X40197A,	"CryptHashData");
	MakeCode	(0X401980);
	MakeName	(0X401980,	"CryptReleaseContext");
	MakeArray	(0X401986,	0X67A);
	MakeRptCmt	(0X402000,	"Acquire a handle to a particular\nkey container within a particular CSP");
	ExtLinA		(0X402000,	0,	"; ");
	ExtLinA		(0X402000,	1,	"; Imports from advapi32.dll");
	ExtLinA		(0X402000,	2,	"; ");
	MakeDword	(x=0X402000);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402000,	"__imp_CryptAcquireContextA");
	MakeRptCmt	(0X402004,	"Initiate the hashing of a stream of data");
	MakeDword	(x=0X402004);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402004,	"__imp_CryptCreateHash");
	MakeDword	(x=0X402008);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402008,	"__imp_CryptDestroyHash");
	MakeDword	(x=0X40200C);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X40200C,	"__imp_CryptGetHashParam");
	MakeRptCmt	(0X402010,	"Compute the cryptographic hash on a stream of data");
	MakeDword	(x=0X402010);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402010,	"__imp_CryptHashData");
	MakeRptCmt	(0X402014,	"Release a handle to a CSP and a key container");
	MakeDword	(x=0X402014);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402014,	"__imp_CryptReleaseContext");
	MakeDword	(0X402018);
	ExtLinA		(0X40201C,	0,	"; ");
	ExtLinA		(0X40201C,	1,	"; Imports from comctl32.dll");
	ExtLinA		(0X40201C,	2,	"; ");
	MakeDword	(x=0X40201C);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X40201C,	"__imp_InitCommonControls");
	MakeDword	(0X402020);
	ExtLinA		(0X402024,	0,	"; ");
	ExtLinA		(0X402024,	1,	"; Imports from kernel32.dll");
	ExtLinA		(0X402024,	2,	"; ");
	MakeDword	(x=0X402024);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402024,	"__imp_ExitProcess");
	MakeDword	(x=0X402028);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402028,	"__imp_GetModuleHandleA");
	MakeDword	(0X40202C);
	ExtLinA		(0X402030,	0,	"; ");
	ExtLinA		(0X402030,	1,	"; Imports from USER32.dll");
	ExtLinA		(0X402030,	2,	"; ");
	MakeDword	(x=0X402030);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402030,	"__imp_CharUpperBuffA");
	MakeRptCmt	(0X402034,	"Create a modal dialog box from a\ndialog box template resource");
	MakeDword	(x=0X402034);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402034,	"__imp_DialogBoxParamA");
	MakeDword	(x=0X402038);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402038,	"__imp_EndDialog");
	MakeDword	(x=0X40203C);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X40203C,	"__imp_LoadIconA");
	MakeDword	(x=0X402040);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402040,	"__imp_MessageBoxA");
	MakeDword	(x=0X402044);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402044,	"__imp_SendDlgItemMessageA");
	MakeDword	(x=0X402048);
	OpOff		(x,	0,	0X0);
	OpOff		(x,	128,	0X0);
	MakeName	(0X402048,	"__imp_SendMessageA");
	MakeDword	(0X40204C);
	MakeDword	(0X402050);
	MakeArray	(0X402050,	0X3EC);
	MakeStr		(0X403000,	0X40301D);
	MakeName	(0X403000,	"aCongratulation");
	MakeStr		(0X40301D,	0X40302C);
	MakeName	(0X40301D,	"aInvalidData");
	MakeStr		(0X40302C,	0X40305C);
	MakeName	(0X40302C,	"aHelloCpuidSugg");
	MakeWord	(0X40305C);
	MakeArray	(0X40305C,	0X400);
	MakeName	(0X40305C,	"vmcode");
	MakeDword	(0X40385C);
	MakeArray	(0X40385C,	0X200);
	MakeDword	(0X40405C);
	MakeArray	(0X40405C,	0X200);
	MakeDword	(0X40485C);
	MakeArray	(0X40485C,	0X200);
	MakeDword	(0X40505C);
	MakeArray	(0X40505C,	0X200);
	MakeDword	(0X40585C);
	MakeArray	(0X40585C,	0X200);
	MakeDword	(0X40605C);
	MakeArray	(0X40605C,	0X200);
	MakeDword	(0X40685C);
	MakeArray	(0X40685C,	0X200);
	MakeDword	(0X40705C);
	MakeArray	(0X40705C,	0X200);
	MakeDword	(0X40785C);
	MakeArray	(0X40785C,	0X200);
	MakeDword	(0X40805C);
	MakeArray	(0X40805C,	0X200);
	MakeDword	(0X40885C);
	MakeArray	(0X40885C,	0X200);
	MakeDword	(0X40905C);
	MakeArray	(0X40905C,	0X200);
	MakeDword	(0X40985C);
	MakeArray	(0X40985C,	0X200);
	MakeDword	(0X40A05C);
	MakeArray	(0X40A05C,	0X200);
	MakeDword	(0X40A85C);
	MakeArray	(0X40A85C,	0X200);
	MakeDword	(0X40B05C);
	MakeArray	(0X40B05C,	0X200);
	MakeDword	(0X40B85C);
	MakeArray	(0X40B85C,	0X200);
	MakeDword	(0X40C05C);
	MakeArray	(0X40C05C,	0X200);
	MakeDword	(0X40C85C);
	MakeArray	(0X40C85C,	0X200);
	MakeDword	(0X40D05C);
	MakeArray	(0X40D05C,	0X200);
	MakeDword	(0X40D85C);
	MakeArray	(0X40D85C,	0X200);
	MakeDword	(0X40E05C);
	MakeArray	(0X40E05C,	0X200);
	MakeDword	(0X40E85C);
	MakeArray	(0X40E85C,	0X200);
	MakeDword	(0X40F05C);
	MakeArray	(0X40F05C,	0X200);
	MakeDword	(0X40F85C);
	MakeArray	(0X40F85C,	0X200);
	MakeDword	(0X41005C);
	MakeArray	(0X41005C,	0X200);
	MakeDword	(0X41085C);
	MakeArray	(0X41085C,	0X200);
	MakeDword	(0X41105C);
	MakeArray	(0X41105C,	0X200);
	MakeDword	(0X41185C);
	MakeArray	(0X41185C,	0X200);
	MakeDword	(0X41205C);
	MakeArray	(0X41205C,	0X200);
	MakeDword	(0X41285C);
	MakeArray	(0X41285C,	0X200);
	MakeDword	(0X41305C);
	MakeArray	(0X41305C,	0X200);
	MakeDword	(0X41385C);
	MakeArray	(0X41385C,	0X200);
	MakeDword	(0X41405C);
	MakeArray	(0X41405C,	0X200);
	MakeDword	(0X41485C);
	MakeArray	(0X41485C,	0X200);
	MakeDword	(0X41505C);
	MakeArray	(0X41505C,	0X200);
	MakeDword	(0X41585C);
	MakeArray	(0X41585C,	0X200);
	MakeDword	(0X41605C);
	MakeArray	(0X41605C,	0X200);
	MakeDword	(0X41685C);
	MakeArray	(0X41685C,	0X200);
	MakeDword	(0X41705C);
	MakeArray	(0X41705C,	0X200);
	MakeDword	(0X41785C);
	MakeArray	(0X41785C,	0X200);
	MakeDword	(0X41805C);
	MakeArray	(0X41805C,	0X200);
	MakeDword	(0X41885C);
	MakeArray	(0X41885C,	0X200);
	MakeDword	(0X41905C);
	MakeArray	(0X41905C,	0X200);
	MakeDword	(0X41985C);
	MakeArray	(0X41985C,	0X200);
	MakeDword	(0X41A05C);
	MakeArray	(0X41A05C,	0X200);
	MakeDword	(0X41A85C);
	MakeArray	(0X41A85C,	0X200);
	MakeDword	(0X41B05C);
	MakeArray	(0X41B05C,	0X200);
	MakeDword	(0X41B85C);
	MakeArray	(0X41B85C,	0X200);
	MakeDword	(0X41C05C);
	MakeArray	(0X41C05C,	0X200);
	MakeDword	(0X41C85C);
	MakeArray	(0X41C85C,	0X200);
	MakeDword	(0X41D05C);
	MakeArray	(0X41D05C,	0X200);
	MakeDword	(0X41D85C);
	MakeArray	(0X41D85C,	0X200);
	MakeDword	(0X41E05C);
	MakeArray	(0X41E05C,	0X200);
	MakeDword	(0X41E85C);
	MakeArray	(0X41E85C,	0X200);
	MakeDword	(0X41F05C);
	MakeArray	(0X41F05C,	0X200);
	MakeDword	(0X41F85C);
	MakeArray	(0X41F85C,	0X200);
	MakeDword	(0X42005C);
	MakeArray	(0X42005C,	0X200);
	MakeDword	(0X42085C);
	MakeArray	(0X42085C,	0X200);
	MakeDword	(0X42105C);
	MakeArray	(0X42105C,	0X200);
	MakeDword	(0X42185C);
	MakeArray	(0X42185C,	0X200);
	MakeDword	(0X42205C);
	MakeArray	(0X42205C,	0X200);
	MakeDword	(0X42285C);
	MakeArray	(0X42285C,	0X200);
	MakeDword	(0X42305C);
	MakeArray	(0X42305C,	0X200);
	MakeDword	(0X42385C);
	MakeArray	(0X42385C,	0X200);
	MakeDword	(0X42405C);
	MakeArray	(0X42405C,	0X200);
	MakeDword	(0X42485C);
	MakeArray	(0X42485C,	0X200);
	MakeDword	(0X42505C);
	MakeArray	(0X42505C,	0X200);
	MakeDword	(0X42585C);
	MakeArray	(0X42585C,	0X200);
	MakeDword	(0X42605C);
	MakeArray	(0X42605C,	0X200);
	MakeDword	(0X42685C);
	MakeArray	(0X42685C,	0X200);
	MakeDword	(0X42705C);
	MakeArray	(0X42705C,	0X200);
	MakeDword	(0X42785C);
	MakeArray	(0X42785C,	0X200);
	MakeDword	(0X42805C);
	MakeArray	(0X42805C,	0X200);
	MakeDword	(0X42885C);
	MakeArray	(0X42885C,	0X200);
	MakeDword	(0X42905C);
	MakeArray	(0X42905C,	0X200);
	MakeDword	(0X42985C);
	MakeArray	(0X42985C,	0X200);
	MakeDword	(0X42A05C);
	MakeArray	(0X42A05C,	0X200);
	MakeDword	(0X42A85C);
	MakeArray	(0X42A85C,	0X200);
	MakeDword	(0X42B05C);
	MakeArray	(0X42B05C,	0X200);
	MakeDword	(0X42B85C);
	MakeArray	(0X42B85C,	0X200);
	MakeDword	(0X42C05C);
	MakeArray	(0X42C05C,	0X200);
	MakeDword	(0X42C85C);
	MakeArray	(0X42C85C,	0X200);
	MakeDword	(0X42D05C);
	MakeArray	(0X42D05C,	0X200);
	MakeDword	(0X42D85C);
	MakeArray	(0X42D85C,	0X200);
	MakeDword	(0X42E05C);
	MakeArray	(0X42E05C,	0X200);
	MakeDword	(0X42E85C);
	MakeArray	(0X42E85C,	0X200);
	MakeDword	(0X42F05C);
	MakeArray	(0X42F05C,	0X200);
	MakeDword	(0X42F85C);
	MakeArray	(0X42F85C,	0X200);
	MakeDword	(0X43005C);
	MakeArray	(0X43005C,	0X200);
	MakeDword	(0X43085C);
	MakeArray	(0X43085C,	0X200);
	MakeDword	(0X43105C);
	MakeArray	(0X43105C,	0X200);
	MakeDword	(0X43185C);
	MakeArray	(0X43185C,	0X200);
	MakeDword	(0X43205C);
	MakeArray	(0X43205C,	0X200);
	MakeDword	(0X43285C);
	MakeArray	(0X43285C,	0X200);
	MakeDword	(0X43305C);
	MakeArray	(0X43305C,	0X200);
	MakeDword	(0X43385C);
	MakeArray	(0X43385C,	0X200);
	MakeDword	(0X43405C);
	MakeArray	(0X43405C,	0X200);
	MakeDword	(0X43485C);
	MakeArray	(0X43485C,	0X200);
	MakeDword	(0X43505C);
	MakeArray	(0X43505C,	0X200);
	MakeDword	(0X43585C);
	MakeArray	(0X43585C,	0X200);
	MakeDword	(0X43605C);
	MakeArray	(0X43605C,	0X200);
	MakeDword	(0X43685C);
	MakeArray	(0X43685C,	0X200);
	MakeDword	(0X43705C);
	MakeArray	(0X43705C,	0X200);
	MakeDword	(0X43785C);
	MakeArray	(0X43785C,	0X200);
	MakeDword	(0X43805C);
	MakeArray	(0X43805C,	0X200);
	MakeDword	(0X43885C);
	MakeArray	(0X43885C,	0X200);
	MakeDword	(0X43905C);
	MakeArray	(0X43905C,	0X200);
	MakeDword	(0X43985C);
	MakeArray	(0X43985C,	0X200);
	MakeDword	(0X43A05C);
	MakeArray	(0X43A05C,	0X200);
	MakeDword	(0X43A85C);
	MakeArray	(0X43A85C,	0X200);
	MakeDword	(0X43B05C);
	MakeArray	(0X43B05C,	0X200);
	MakeDword	(0X43B85C);
	MakeArray	(0X43B85C,	0X200);
	MakeDword	(0X43C05C);
	MakeArray	(0X43C05C,	0X200);
	MakeDword	(0X43C85C);
	MakeArray	(0X43C85C,	0X200);
	MakeDword	(0X43D05C);
	MakeArray	(0X43D05C,	0X200);
	MakeDword	(0X43D85C);
	MakeArray	(0X43D85C,	0X200);
	MakeDword	(0X43E05C);
	MakeArray	(0X43E05C,	0X200);
	MakeDword	(0X43E85C);
	MakeArray	(0X43E85C,	0X200);
	MakeDword	(0X43F05C);
	MakeArray	(0X43F05C,	0X200);
	MakeDword	(0X43F85C);
	MakeArray	(0X43F85C,	0X200);
	MakeDword	(0X44005C);
	MakeArray	(0X44005C,	0X200);
	MakeDword	(0X44085C);
	MakeArray	(0X44085C,	0X200);
	MakeDword	(0X44105C);
	MakeArray	(0X44105C,	0X200);
	MakeDword	(0X44185C);
	MakeArray	(0X44185C,	0X200);
	MakeDword	(0X44205C);
	MakeArray	(0X44205C,	0X200);
	MakeDword	(0X44285C);
	MakeArray	(0X44285C,	0X200);
	MakeDword	(0X44305C);
	MakeArray	(0X44305C,	0X200);
	MakeDword	(0X44385C);
	MakeArray	(0X44385C,	0X200);
	MakeDword	(0X44405C);
	MakeArray	(0X44405C,	0X200);
	MakeDword	(0X44485C);
	MakeArray	(0X44485C,	0X200);
	MakeDword	(0X44505C);
	MakeArray	(0X44505C,	0X200);
	MakeDword	(0X44585C);
	MakeArray	(0X44585C,	0X200);
	MakeDword	(0X44605C);
	MakeArray	(0X44605C,	0X200);
	MakeDword	(0X44685C);
	MakeArray	(0X44685C,	0X200);
	MakeDword	(0X44705C);
	MakeArray	(0X44705C,	0X200);
	MakeDword	(0X44785C);
	MakeArray	(0X44785C,	0X200);
	MakeDword	(0X44805C);
	MakeArray	(0X44805C,	0X200);
	MakeDword	(0X44885C);
	MakeArray	(0X44885C,	0X200);
	MakeDword	(0X44905C);
	MakeArray	(0X44905C,	0X200);
	MakeDword	(0X44985C);
	MakeArray	(0X44985C,	0X200);
	MakeDword	(0X44A05C);
	MakeArray	(0X44A05C,	0X200);
	MakeDword	(0X44A85C);
	MakeArray	(0X44A85C,	0X200);
	MakeDword	(0X44B05C);
	MakeArray	(0X44B05C,	0X200);
	MakeDword	(0X44B85C);
	MakeArray	(0X44B85C,	0X200);
	MakeDword	(0X44C05C);
	MakeArray	(0X44C05C,	0X200);
	MakeDword	(0X44C85C);
	MakeArray	(0X44C85C,	0X200);
	MakeDword	(0X44D05C);
	MakeArray	(0X44D05C,	0X200);
	MakeDword	(0X44D85C);
	MakeArray	(0X44D85C,	0X200);
	MakeDword	(0X44E05C);
	MakeArray	(0X44E05C,	0X200);
	MakeDword	(0X44E85C);
	MakeArray	(0X44E85C,	0X200);
	MakeDword	(0X44F05C);
	MakeArray	(0X44F05C,	0X200);
	MakeDword	(0X44F85C);
	MakeArray	(0X44F85C,	0X200);
	MakeDword	(0X45005C);
	MakeArray	(0X45005C,	0X200);
	MakeDword	(0X45085C);
	MakeArray	(0X45085C,	0X200);
	MakeDword	(0X45105C);
	MakeArray	(0X45105C,	0X200);
	MakeDword	(0X45185C);
	MakeArray	(0X45185C,	0X200);
	MakeDword	(0X45205C);
	MakeArray	(0X45205C,	0X200);
	MakeDword	(0X45285C);
	MakeArray	(0X45285C,	0X200);
	MakeDword	(0X45305C);
	MakeArray	(0X45305C,	0X200);
	MakeDword	(0X45385C);
	MakeArray	(0X45385C,	0X200);
	MakeDword	(0X45405C);
	MakeArray	(0X45405C,	0X200);
	MakeDword	(0X45485C);
	MakeArray	(0X45485C,	0X200);
	MakeDword	(0X45505C);
	MakeArray	(0X45505C,	0XBD);
	MakeByte	(0X455350);
	MakeArray	(0X455350,	0X3);
	MakeDword	(0X455353);
	MakeArray	(0X455353,	0X200);
	MakeName	(0X455353,	"bigtable");
	MakeDword	(0X455B54);
	MakeArray	(0X455B54,	0X200);
	MakeDword	(0X456354);
	MakeArray	(0X456354,	0X200);
	MakeDword	(0X456B54);
	MakeArray	(0X456B54,	0X200);
	MakeDword	(0X457354);
	MakeArray	(0X457354,	0X200);
	MakeDword	(0X457B54);
	MakeArray	(0X457B54,	0X200);
	MakeDword	(0X458354);
	MakeArray	(0X458354,	0X200);
	MakeDword	(0X458B54);
	MakeArray	(0X458B54,	0X200);
	MakeDword	(0X459354);
	MakeArray	(0X459354,	0X200);
	MakeDword	(0X459B54);
	MakeArray	(0X459B54,	0X200);
	MakeDword	(0X45A354);
	MakeArray	(0X45A354,	0X200);
	MakeDword	(0X45AB54);
	MakeArray	(0X45AB54,	0X200);
	MakeDword	(0X45B354);
	MakeArray	(0X45B354,	0X200);
	MakeDword	(0X45BB54);
	MakeArray	(0X45BB54,	0X200);
	MakeDword	(0X45C354);
	MakeArray	(0X45C354,	0X200);
	MakeDword	(0X45CB54);
	MakeArray	(0X45CB54,	0X200);
	MakeDword	(0X45D354);
	MakeArray	(0X45D354,	0X200);
	MakeDword	(0X45DB54);
	MakeArray	(0X45DB54,	0X200);
	MakeDword	(0X45E354);
	MakeArray	(0X45E354,	0X200);
	MakeDword	(0X45EB54);
	MakeArray	(0X45EB54,	0X200);
	MakeDword	(0X45F354);
	MakeArray	(0X45F354,	0X200);
	MakeDword	(0X45FB54);
	MakeArray	(0X45FB54,	0X200);
	MakeDword	(0X460354);
	MakeArray	(0X460354,	0X200);
	MakeDword	(0X460B54);
	MakeArray	(0X460B54,	0X200);
	MakeDword	(0X461354);
	MakeArray	(0X461354,	0X200);
	MakeDword	(0X461B54);
	MakeArray	(0X461B54,	0X200);
	MakeDword	(0X462354);
	MakeArray	(0X462354,	0X12F);
	MakeDword	(0X462810);
	MakeArray	(0X462810,	0X10);
	MakeName	(0X462810,	"name");
	MakeDword	(0X462850);
	MakeArray	(0X462850,	0XC);
	MakeName	(0X462850,	"serial");
	MakeDword	(0X462880);
	MakeName	(0X462880,	"flags");
	MakeDword	(0X462884);
	MakeArray	(0X462884,	0X4);
	MakeName	(0X462884,	"hexserial");
	MakeDword	(0X462894);
	MakeArray	(0X462894,	0X4);
	MakeName	(0X462894,	"serialMD2");
	MakeDword	(0X4628A4);
	MakeArray	(0X4628A4,	0X4);
	MakeDword	(0X4628B4);
	MakeArray	(0X4628B4,	0X86F);
	MakeDword	(0X464A70);
	MakeArray	(0X464A70,	0X3);
	MakeDword	(0X464A7C);
	MakeArray	(0X464A7C,	0X1F);
	MakeDword	(0X464AF8);
	MakeArray	(0X464AF8,	0XA);
	MakeDword	(0X464B20);
	MakeArray	(0X464B20,	0X9);
	MakeDword	(0X464B44);
	MakeArray	(0X464B44,	0X11);
	MakeDword	(0X464B88);
	MakeArray	(0X464B88,	0X8);
	MakeDword	(0X464BA8);
	MakeArray	(0X464BA8,	0XC);
	MakeDword	(0X464BD8);
	MakeArray	(0X464BD8,	0X10A);
	ExtLinA		(0X465000,	0,	"; Section 2. (virtual address 00065000)");
	ExtLinA		(0X465000,	1,	"; Virtual size                  : 00002000 (   8192.)");
	ExtLinA		(0X465000,	2,	"; Section size in file          : 00002000 (   8192.)");
	ExtLinA		(0X465000,	3,	"; Offset to raw data for section: 00065000");
	ExtLinA		(0X465000,	4,	"; Flags E0000040: Data Executable Readable Writable");
	ExtLinA		(0X465000,	5,	"; Alignment     : default");
	MakeDword	(0X465000);
	MakeArray	(0X465000,	0X4C);
	MakeDword	(0X465130);
	MakeArray	(0X465130,	0X5);
	MakeDword	(0X465144);
	MakeArray	(0X465144,	0X9);
	MakeDword	(0X465168);
	MakeArray	(0X465168,	0X4);
	MakeDword	(0X465178);
	MakeArray	(0X465178,	0X2);
	MakeDword	(0X465180);
	MakeArray	(0X465180,	0X3);
	MakeDword	(0X46518C);
	MakeArray	(0X46518C,	0X2);
	MakeDword	(0X465194);
	MakeArray	(0X465194,	0X2);
	MakeDword	(0X46519C);
	MakeArray	(0X46519C,	0X2);
	MakeDword	(0X4651A4);
	MakeArray	(0X4651A4,	0X3);
	MakeDword	(0X4651B0);
	MakeArray	(0X4651B0,	0X16);
	MakeDword	(0X465208);
	MakeArray	(0X465208,	0X8);
	MakeDword	(0X465228);
	MakeArray	(0X465228,	0X9);
	MakeDword	(0X46524C);
	MakeArray	(0X46524C,	0XA);
	MakeDword	(0X465274);
	MakeArray	(0X465274,	0XA);
	MakeDword	(0X46529C);
	MakeArray	(0X46529C,	0XA);
	MakeDword	(0X4652C4);
	MakeArray	(0X4652C4,	0X4);
	MakeDword	(0X4652D4);
	MakeArray	(0X4652D4,	0X200);
	MakeDword	(0X465AD4);
	MakeArray	(0X465AD4,	0X200);
	MakeDword	(0X4662D4);
	MakeArray	(0X4662D4,	0X1EB);
	MakeCode	(0X466A80);
	MakeCode	(x=0X466A81);
	OpOff		(x,	1,	0X0);
	OpOff		(x,	129,	0X0);
	MakeCode	(x=0X466A8D);
	OpHex		(x,	1);
	MakeArray	(0X466A92,	0X6);
	MakeCode	(0X466A98);
	MakeCode	(0X466ADC);
	MakeCode	(0X466AEB);
	MakeCode	(x=0X466AF2);
	OpHex		(x,	1);
	MakeCode	(x=0X466AF8);
	OpHex		(x,	1);
	MakeCode	(x=0X466AFD);
	OpHex		(x,	1);
	MakeCode	(0X466B03);
	MakeCode	(0X466B5C);
	MakeCode	(0X466B72);
	MakeCode	(x=0X466B8D);
	OpHex		(x,	1);
	MakeCode	(x=0X466B91);
	OpHex		(x,	1);
	MakeCode	(0X466BE8);
	MakeCode	(x=0X466C0D);
	OpHex		(x,	1);
	MakeCode	(x=0X466C10);
	OpHex		(x,	1);
	MakeCode	(x=0X466C28);
	OpHex		(x,	1);
	MakeArray	(0X466C30,	0X3D0);
	ExtLinA		(0X469000,	0,	"; Section 4. (virtual address 00069000)");
	ExtLinA		(0X469000,	1,	"; Virtual size                  : 00001000 (   4096.)");
	ExtLinA		(0X469000,	2,	"; Section size in file          : 00000400 (   1024.)");
	ExtLinA		(0X469000,	3,	"; Offset to raw data for section: 00069000");
	ExtLinA		(0X469000,	4,	"; Flags C0000040: Data Readable Writable");
	ExtLinA		(0X469000,	5,	"; Alignment     : default");
	MakeArray	(0X469400,	0XC00);
}

static Functions_0(void) {

	MakeFunction    (0X40113F,0X401210);
	SetFunctionFlags(0X40113F,0x10);
	MakeFrame(0X40113F, 0X0, 4, 0X10);
	MakeLocal(0X40113F, 0X401210, "[bp+0X8]", "hWnd");
	MakeFunction    (0X401210,0X401238);
	SetFunctionFlags(0X401210,0x0);
	MakeFunction    (0X4012AA,0X401436);
	SetFunctionFlags(0X4012AA,0x10);
	MakeFrame(0X4012AA, 0X0, 4, 0X10);
	MakeLocal(0X4012AA, 0X401436, "[bp+0X8]", "hDlg");
	MakeNameEx(0X4012CE, "dialogend", SN_LOCAL);
	MakeNameEx(0X4012DC, "onchange", SN_LOCAL);
	MakeNameEx(0X4012F0, "dlgstart", SN_LOCAL);
	MakeNameEx(0X401342, "enterpressed", SN_LOCAL);
	MakeNameEx(0X4013D5, "transloop?", SN_LOCAL);
	MakeNameEx(0X40140A, "@@valuecomploop", SN_LOCAL);
	MakeNameEx(0X40141F, "Invalid", SN_LOCAL);
	MakeFunction    (0X401436,0X401476);
	SetFunctionFlags(0X401436,0x0);
	MakeFunction    (0X401476,0X4014AC);
	SetFunctionFlags(0X401476,0x0);
	MakeFunction    (0X4014AC,0X4014E8);
	SetFunctionFlags(0X4014AC,0x0);
	MakeFunction    (0X4014E8,0X401560);
	SetFunctionFlags(0X4014E8,0x0);
	MakeFunction    (0X4015C4,0X4015DC);
	SetFunctionFlags(0X4015C4,0x0);
	MakeNameEx(0X4015C5, "vm_next", SN_LOCAL);
	MakeFunction    (0X4015FC,0X401600);
	SetFunctionFlags(0X4015FC,0x0);
	MakeFunction    (0X401600,0X401617);
	SetFunctionFlags(0X401600,0x0);
	MakeFunction    (0X401617,0X40161F);
	SetFunctionFlags(0X401617,0x0);
	MakeFunction    (0X40161F,0X401627);
	SetFunctionFlags(0X40161F,0x0);
	MakeFunction    (0X401627,0X401636);
	SetFunctionFlags(0X401627,0x0);
	MakeFunction    (0X40163E,0X401658);
	SetFunctionFlags(0X40163E,0x0);
	MakeNameEx(0X401650, "reset_flag_eax", SN_LOCAL);
	MakeFunction    (0X401658,0X401683);
	SetFunctionFlags(0X401658,0x0);
	MakeFunction    (0X401683,0X4016A4);
	SetFunctionFlags(0X401683,0x0);
	MakeFunction    (0X4016AC,0X4016C2);
	SetFunctionFlags(0X4016AC,0x0);
	MakeFunction    (0X4016C2,0X4016D4);
	SetFunctionFlags(0X4016C2,0x0);
	MakeFunction    (0X4016D4,0X401771);
	SetFunctionFlags(0X4016D4,0x50);
	MakeFrame(0X4016D4, 0X10, 4, 0X14);
	MakeLocal(0X4016D4, 0X401771, "[bp-0X10]", "pdwDataLen");
	MakeLocal(0X4016D4, 0X401771, "[bp-0X8]", "hHash");
	MakeLocal(0X4016D4, 0X401771, "[bp-0X4]", "hProv");
	MakeLocal(0X4016D4, 0X401771, "[bp+0X10]", "Algid");
	MakeLocal(0X4016D4, 0X401771, "[bp+0X14]", "pbData");
	MakeLocal(0X4016D4, 0X401771, "[bp+0X18]", "dwDataLen");
	MakeNameEx(0X401760, "@@finally", SN_LOCAL);
	MakeNameEx(0X40176A, "@@end", SN_LOCAL);
	MakeFunction    (0X401771,0X4017C6);
	SetFunctionFlags(0X401771,0x50);
	MakeFrame(0X401771, 0X0, 4, 0X8);
	MakeFunction    (0X401926,0X40192C);
	SetFunctionFlags(0X401926,0xc0);
	MakeFunction    (0X40192C,0X401932);
	SetFunctionFlags(0X40192C,0xc0);
	MakeFunction    (0X401932,0X401938);
	SetFunctionFlags(0X401932,0xc0);
	MakeFunction    (0X401938,0X40193E);
	SetFunctionFlags(0X401938,0xc0);
	MakeFunction    (0X40193E,0X401944);
	SetFunctionFlags(0X40193E,0xc0);
	MakeFunction    (0X401944,0X40194A);
	SetFunctionFlags(0X401944,0xc0);
	MakeFunction    (0X40194A,0X401950);
	SetFunctionFlags(0X40194A,0xc0);
	MakeFunction    (0X401950,0X401956);
	SetFunctionFlags(0X401950,0xc0);
	MakeFunction    (0X401956,0X40195C);
	SetFunctionFlags(0X401956,0xc0);
	MakeFunction    (0X40195C,0X401962);
	SetFunctionFlags(0X40195C,0xc0);
	MakeFunction    (0X401962,0X401968);
	SetFunctionFlags(0X401962,0xc0);
	MakeFunction    (0X401968,0X40196E);
	SetFunctionFlags(0X401968,0xc0);
	MakeFunction    (0X40196E,0X401974);
	SetFunctionFlags(0X40196E,0xc0);
	MakeFunction    (0X401974,0X40197A);
	SetFunctionFlags(0X401974,0xc0);
	MakeFunction    (0X40197A,0X401980);
	SetFunctionFlags(0X40197A,0xc0);
	MakeFunction    (0X401980,0X401986);
	SetFunctionFlags(0X401980,0xc0);
}

//------------------------------------------------------------------------
// Information about functions

static Functions(void) {

	Functions_0();
}

//------------------------------------------------------------------------
// Information about segment registers

static SegRegs(void) {
}

//------------------------------------------------------------------------
// Call all byte feature functions:

static Bytes(void) {
	Bytes_0();
}

// End of file.