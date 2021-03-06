/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\john\documents\nim\bomberman\nimcache\sdl2_image.o c:\users\john\documents\nim\bomberman\nimcache\sdl2_image.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct Sdlversion121551 Sdlversion121551;
typedef struct Surface122290 Surface122290;
typedef struct Rwops130830 Rwops130830;
typedef struct TextureptrHEX3Aobjecttype121578 TextureptrHEX3Aobjecttype121578;
typedef struct RendererptrHEX3Aobjecttype121576 RendererptrHEX3Aobjecttype121576;
typedef struct Pixelformat122284 Pixelformat122284;
typedef struct Box140009 Box140009;
typedef struct BlitmapptrHEX3Aobjecttype122332 BlitmapptrHEX3Aobjecttype122332;
typedef struct Mem130832 Mem130832;
typedef struct Palette122282 Palette122282;
typedef struct Color122280 Color122280;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(Sdlversion121551*, TY135605) (void);
typedef N_CDECL_PTR(int, TY135611) (int flags);
typedef N_CDECL_PTR(void, TY135617) (void);
typedef N_CDECL_PTR(Surface122290*, TY135622) (Rwops130830* src, int freesrc, NCSTRING type_135625);
typedef N_CDECL_PTR(Surface122290*, TY135630) (NCSTRING file);
typedef N_CDECL_PTR(Surface122290*, TY135636) (Rwops130830* src, int freesrc);
typedef N_CDECL_PTR(TextureptrHEX3Aobjecttype121578*, TY135643) (RendererptrHEX3Aobjecttype121576* renderer, NCSTRING file);
typedef N_CDECL_PTR(TextureptrHEX3Aobjecttype121578*, TY135650) (RendererptrHEX3Aobjecttype121576* renderer, Rwops130830* src, int freesrc);
typedef N_CDECL_PTR(TextureptrHEX3Aobjecttype121578*, TY135658) (RendererptrHEX3Aobjecttype121576* renderer, Rwops130830* src, int freesrc, NCSTRING type_135662);
typedef N_CDECL_PTR(int, TY135667) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135673) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135679) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135685) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135691) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135697) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135703) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135709) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135715) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135721) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135727) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135733) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135739) (Rwops130830* src);
typedef N_CDECL_PTR(int, TY135745) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135751) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135757) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135763) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135769) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135775) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135781) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135787) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135793) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135799) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135805) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135811) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135817) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135823) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135829) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135835) (Rwops130830* src);
typedef N_CDECL_PTR(Surface122290*, TY135841) (NCSTRING* xpm);
struct  Sdlversion121551  {
NU8 major;
NU8 minor;
NU8 patch;
};
struct Box140009 {
NI32 Field0;
NI32 Field1;
NI32 Field2;
NI32 Field3;
};
struct  Surface122290  {
NU32 flags;
Pixelformat122284* format;
NI32 w;
NI32 h;
NI32 pitch;
void* pixels;
void* userdata;
NI32 locked;
void* lockdata;
Box140009 cliprect;
BlitmapptrHEX3Aobjecttype122332* map;
int refcount;
};
typedef N_CDECL_PTR(NI64, TY130858) (Rwops130830* context);
typedef N_CDECL_PTR(NI64, TY130862) (Rwops130830* context, NI64 offset, int whence);
typedef N_CDECL_PTR(size_t, TY130868) (Rwops130830* context, void* destination, size_t size, size_t maxnum);
typedef N_CDECL_PTR(size_t, TY130875) (Rwops130830* context, void* source, size_t size, size_t num);
typedef N_CDECL_PTR(int, TY130882) (Rwops130830* context);
struct  Mem130832  {
NU8* base;
NU8* here;
NU8* stop;
};
struct  Rwops130830  {
TY130858 size;
TY130862 seek;
TY130868 read;
TY130875 write;
TY130882 close;
int kind;
Mem130832 mem;
};
struct  TextureptrHEX3Aobjecttype121578  {
char dummy;
};
struct  RendererptrHEX3Aobjecttype121576  {
char dummy;
};
typedef NU8 TY122314[2];
struct  Pixelformat122284  {
NU32 format;
Palette122282* palette;
NU8 Bitsperpixel;
NU8 Bytesperpixel;
TY122314 padding;
NU32 Rmask;
NU32 Gmask;
NU32 Bmask;
NU32 Amask;
NU8 Rloss;
NU8 Gloss;
NU8 Bloss;
NU8 Aloss;
NU8 Rshift;
NU8 Gshift;
NU8 Bshift;
NU8 Ashift;
int refcount;
Pixelformat122284* next;
};
struct  BlitmapptrHEX3Aobjecttype122332  {
char dummy;
};
struct  Palette122282  {
int ncolors;
Color122280* colors;
NU32 version;
int refcount;
};
struct Color122280 {
NU8 Field0;
NU8 Field1;
NU8 Field2;
NU8 Field3;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
STRING_LITERAL(TMP288, "SDL2_image.dll", 14);
STRING_LITERAL(TMP289, "SDL2_image.dll", 14);
static void* TMP287;
TY135605 Dl_135604;
TY135611 Dl_135610;
TY135617 Dl_135616;
TY135622 Dl_135621;
TY135630 Dl_135629;
TY135636 Dl_135635;
TY135643 Dl_135642;
TY135650 Dl_135649;
TY135658 Dl_135657;
TY135667 Dl_135666;
TY135673 Dl_135672;
TY135679 Dl_135678;
TY135685 Dl_135684;
TY135691 Dl_135690;
TY135697 Dl_135696;
TY135703 Dl_135702;
TY135709 Dl_135708;
TY135715 Dl_135714;
TY135721 Dl_135720;
TY135727 Dl_135726;
TY135733 Dl_135732;
TY135739 Dl_135738;
TY135745 Dl_135744;
TY135751 Dl_135750;
TY135757 Dl_135756;
TY135763 Dl_135762;
TY135769 Dl_135768;
TY135775 Dl_135774;
TY135781 Dl_135780;
TY135787 Dl_135786;
TY135793 Dl_135792;
TY135799 Dl_135798;
TY135805 Dl_135804;
TY135811 Dl_135810;
TY135817 Dl_135816;
TY135823 Dl_135822;
TY135829 Dl_135828;
TY135835 Dl_135834;
TY135841 Dl_135840;
extern TFrame* frameptr_17042;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_17042 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_17042).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_17042;
	frameptr_17042 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_20001();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_17042 = (*frameptr_17042).prev;
}
NIM_EXTERNC N_NOINLINE(void, sdl2_imageInit)(void) {
	nimfr("image", "image.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_imageDatInit)(void) {
if (!((TMP287 = nimLoadLibrary((NimStringDesc*) &TMP288))
)) nimLoadLibraryError((NimStringDesc*) &TMP289);
	Dl_135604 = (TY135605) nimGetProcAddr(TMP287, "IMG_Linked_Version");
	Dl_135610 = (TY135611) nimGetProcAddr(TMP287, "IMG_Init");
	Dl_135616 = (TY135617) nimGetProcAddr(TMP287, "IMG_Quit");
	Dl_135621 = (TY135622) nimGetProcAddr(TMP287, "IMG_LoadTyped_RW");
	Dl_135629 = (TY135630) nimGetProcAddr(TMP287, "IMG_Load");
	Dl_135635 = (TY135636) nimGetProcAddr(TMP287, "IMG_Load_RW");
	Dl_135642 = (TY135643) nimGetProcAddr(TMP287, "IMG_LoadTexture");
	Dl_135649 = (TY135650) nimGetProcAddr(TMP287, "IMG_LoadTexture_RW");
	Dl_135657 = (TY135658) nimGetProcAddr(TMP287, "IMG_LoadTextureTyped_RW");
	Dl_135666 = (TY135667) nimGetProcAddr(TMP287, "IMG_isICO");
	Dl_135672 = (TY135673) nimGetProcAddr(TMP287, "IMG_isCUR");
	Dl_135678 = (TY135679) nimGetProcAddr(TMP287, "IMG_isBMP");
	Dl_135684 = (TY135685) nimGetProcAddr(TMP287, "IMG_isGIF");
	Dl_135690 = (TY135691) nimGetProcAddr(TMP287, "IMG_isJPG");
	Dl_135696 = (TY135697) nimGetProcAddr(TMP287, "IMG_isLBM");
	Dl_135702 = (TY135703) nimGetProcAddr(TMP287, "IMG_isPCX");
	Dl_135708 = (TY135709) nimGetProcAddr(TMP287, "IMG_isPNG");
	Dl_135714 = (TY135715) nimGetProcAddr(TMP287, "IMG_isPNM");
	Dl_135720 = (TY135721) nimGetProcAddr(TMP287, "IMG_isTIF");
	Dl_135726 = (TY135727) nimGetProcAddr(TMP287, "IMG_isXCF");
	Dl_135732 = (TY135733) nimGetProcAddr(TMP287, "IMG_isXPM");
	Dl_135738 = (TY135739) nimGetProcAddr(TMP287, "IMG_isXV");
	Dl_135744 = (TY135745) nimGetProcAddr(TMP287, "IMG_isWEBP");
	Dl_135750 = (TY135751) nimGetProcAddr(TMP287, "IMG_LoadICO_RW");
	Dl_135756 = (TY135757) nimGetProcAddr(TMP287, "IMG_LoadCUR_RW");
	Dl_135762 = (TY135763) nimGetProcAddr(TMP287, "IMG_LoadBMP_RW");
	Dl_135768 = (TY135769) nimGetProcAddr(TMP287, "IMG_LoadGIF_RW");
	Dl_135774 = (TY135775) nimGetProcAddr(TMP287, "IMG_LoadJPG_RW");
	Dl_135780 = (TY135781) nimGetProcAddr(TMP287, "IMG_LoadLBM_RW");
	Dl_135786 = (TY135787) nimGetProcAddr(TMP287, "IMG_LoadPCX_RW");
	Dl_135792 = (TY135793) nimGetProcAddr(TMP287, "IMG_LoadPNG_RW");
	Dl_135798 = (TY135799) nimGetProcAddr(TMP287, "IMG_LoadPNM_RW");
	Dl_135804 = (TY135805) nimGetProcAddr(TMP287, "IMG_LoadTGA_RW");
	Dl_135810 = (TY135811) nimGetProcAddr(TMP287, "IMG_LoadTIF_RW");
	Dl_135816 = (TY135817) nimGetProcAddr(TMP287, "IMG_LoadXCF_RW");
	Dl_135822 = (TY135823) nimGetProcAddr(TMP287, "IMG_LoadXPM_RW");
	Dl_135828 = (TY135829) nimGetProcAddr(TMP287, "IMG_LoadXV_RW");
	Dl_135834 = (TY135835) nimGetProcAddr(TMP287, "IMG_LoadWEBP_RW");
	Dl_135840 = (TY135841) nimGetProcAddr(TMP287, "IMG_ReadXPMFromArray");
}

