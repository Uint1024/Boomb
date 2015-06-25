/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\john\documents\nim\bomberman\nimcache\wall.o c:\users\john\documents\nim\bomberman\nimcache\wall.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct WallHEX3Aobjecttype153013 WallHEX3Aobjecttype153013;
typedef struct Entityobj149007 Entityobj149007;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct IvisibleHEX3Aobjecttype146058 IvisibleHEX3Aobjecttype146058;
typedef struct IcollidableHEX3Aobjecttype147018 IcollidableHEX3Aobjecttype147018;
typedef struct IupdatableHEX3Aobjecttype148021 IupdatableHEX3Aobjecttype148021;
typedef struct VisiblenormalHEX3Aobjecttype146061 VisiblenormalHEX3Aobjecttype146061;
typedef struct Tcell46746 Tcell46746;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellseq46762 Tcellseq46762;
typedef struct Tpagedesc46754 Tpagedesc46754;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct CollidablenormalHEX3Aobjecttype147021 CollidablenormalHEX3Aobjecttype147021;
typedef struct SpriteHEX3Aobjecttype141009 SpriteHEX3Aobjecttype141009;
typedef struct Box140009 Box140009;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Entityobj149007  {
  TNimObject Sup;
IvisibleHEX3Aobjecttype146058* visible;
IcollidableHEX3Aobjecttype147018* collidable;
IupdatableHEX3Aobjecttype148021* updatable;
};
struct  WallHEX3Aobjecttype153013  {
  Entityobj149007 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46746  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46762  {
NI len;
NI cap;
Tcell46746** d;
};
struct  Tcellset46758  {
NI counter;
NI max;
Tpagedesc46754* head;
Tpagedesc46754** data;
};
typedef Tsmallchunk27840* TY28622[512];
typedef Ttrunk27813* Ttrunkbuckets27815[256];
struct  Tintset27817  {
Ttrunkbuckets27815 data;
};
struct  Tmemregion28610  {
NI minlargeobj;
NI maxlargeobj;
TY28622 freesmallchunks;
Tllchunk28604* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27842* freechunkslist;
Tintset27817 chunkstarts;
Tavlnode28608* root;
Tavlnode28608* deleted;
Tavlnode28608* last;
Tavlnode28608* freeavlnodes;
};
struct  Tgcstat48614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48616  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46762 zct;
Tcellseq46762 decstack;
Tcellset46758 cycleroots;
Tcellseq46762 tempstack;
NI recgclock;
Tmemregion28610 region;
Tgcstat48614 stat;
};
struct  IvisibleHEX3Aobjecttype146058  {
  TNimObject Sup;
SpriteHEX3Aobjecttype141009* sprite;
};
struct Box140009 {
NI32 Field0;
NI32 Field1;
NI32 Field2;
NI32 Field3;
};
struct  IcollidableHEX3Aobjecttype147018  {
  TNimObject Sup;
Box140009 box;
};
struct  IupdatableHEX3Aobjecttype148021  {
  TNimObject Sup;
};
struct  VisiblenormalHEX3Aobjecttype146061  {
  IvisibleHEX3Aobjecttype146058 Sup;
};
typedef NI TY27820[16];
struct  Tpagedesc46754  {
Tpagedesc46754* next;
NI key;
TY27820 bits;
};
struct  Tbasechunk27838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27840  {
  Tbasechunk27838 Sup;
Tsmallchunk27840* next;
Tsmallchunk27840* prev;
Tfreecell27830* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28604  {
NI size;
NI acc;
Tllchunk28604* next;
};
struct  Tbigchunk27842  {
  Tbasechunk27838 Sup;
Tbigchunk27842* next;
Tbigchunk27842* prev;
NI align;
NF data;
};
struct  Ttrunk27813  {
Ttrunk27813* next;
NI key;
TY27820 bits;
};
typedef Tavlnode28608* TY28614[2];
struct  Tavlnode28608  {
TY28614 link;
NI key;
NI upperbound;
NI level;
};
struct  CollidablenormalHEX3Aobjecttype147021  {
  IcollidableHEX3Aobjecttype147018 Sup;
};
struct  SpriteHEX3Aobjecttype141009  {
Box140009 box;
NU8 spritetype;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
N_NIMCALL(WallHEX3Aobjecttype153013*, newwall_153024)(NI32 x, NI32 y);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP370)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(VisiblenormalHEX3Aobjecttype146061*, newvisiblenormal_146068)(NI32 x, NI32 y, NI32 w, NI32 h, NU8 sprite);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46746* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c);
N_NOINLINE(void, incl_47465)(Tcellset46758* s, Tcell46746* cell);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46746* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(CollidablenormalHEX3Aobjecttype147021*, newcollidablenormal_147028)(NI32 x, NI32 y, NI32 w, NI32 h);
extern TNimType NTI149007; /* EntityObj */
TNimType NTI153013; /* Wall:ObjectType */
TNimType NTI153012; /* Wall */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
N_NIMCALL(void, TMP370)(void* p, NI op) {
	WallHEX3Aobjecttype153013* a;
	a = (WallHEX3Aobjecttype153013*)p;
	nimGCvisit((void*)(*a).Sup.visible, op);
	nimGCvisit((void*)(*a).Sup.collidable, op);
	nimGCvisit((void*)(*a).Sup.updatable, op);
}

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

static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		nimln(139, "gc.nim");
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		nimln(191, "gc.nim");
		incl_47465((&gch_48644.cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_52622)(Tcell46746* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50267(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_51023(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46746))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46746* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, decref_52204)(Tcell46746* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_51804(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_50267(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_51023(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		Tcell46746* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50246(src);
		incref_52622(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46746* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50246((*dest));
		decref_52204(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(WallHEX3Aobjecttype153013*, newwall_153024)(NI32 x, NI32 y) {
	WallHEX3Aobjecttype153013* result;
	WallHEX3Aobjecttype153013* LOC1;
	VisiblenormalHEX3Aobjecttype146061* LOC2;
	CollidablenormalHEX3Aobjecttype147021* LOC3;
	nimfr("newWall", "wall.nim")
	result = 0;
	nimln(13, "wall.nim");
	LOC1 = 0;
	LOC1 = (WallHEX3Aobjecttype153013*) newObj((&NTI153012), sizeof(WallHEX3Aobjecttype153013));
	(*LOC1).Sup.Sup.m_type = (&NTI153013);
	LOC2 = 0;
	LOC2 = newvisiblenormal_146068(x, y, ((NI32) 40), ((NI32) 40), ((NU8) 2));
	asgnRef((void**) (&(*LOC1).Sup.visible), &LOC2->Sup);
	nimln(14, "wall.nim");
	LOC3 = 0;
	LOC3 = newcollidablenormal_147028(x, y, ((NI32) 40), ((NI32) 40));
	asgnRef((void**) (&(*LOC1).Sup.collidable), &LOC3->Sup);
	result = LOC1;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_wallInit)(void) {
	nimfr("wall", "wall.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_wallDatInit)(void) {
static TNimNode TMP368[1];
NTI153013.size = sizeof(WallHEX3Aobjecttype153013);
NTI153013.kind = 17;
NTI153013.base = (&NTI149007);
TMP368[0].len = 0; TMP368[0].kind = 2;
NTI153013.node = &TMP368[0];
NTI153012.size = sizeof(WallHEX3Aobjecttype153013*);
NTI153012.kind = 22;
NTI153012.base = (&NTI153013);
NTI153012.marker = TMP370;
}

