// Executable.c
// Generated by decompiling Executable.exe
// using Reko decompiler version 0.8.0.2.

#include "Executable.h"

// 00401000: Register word32 fn00401000(Register word32 ecx, Register (ptr32 Eq_4) ebp, Register (ptr32 word32) esi)
word32 fn00401000(word32 ecx, struct Eq_4 * ebp, word32 * esi)
{
	InitializeCriticalSection(&exported_critical_section);
	fn00401060(&exported_int, fn00401060(slow_and_safe_increment(0x01), fn00401060(&exported_int, ecx, ebp, esi, 0x00402108), ebp, esi, 0x00402108), ebp, esi, 0x00402108);
	return 0x00;
}

// 00401050: Register ptr32 fn00401050()
ptr32 fn00401050()
{
	return 0x00403378;
}

// 00401060: Register word32 fn00401060(Register (ptr32 int32) eax, Register word32 ecx, Register (ptr32 Eq_4) ebp, Register (ptr32 word32) esi, Stack word32 dwArg04)
word32 fn00401060(int32 * eax, word32 ecx, struct Eq_4 * ebp, word32 * esi, word32 dwArg04)
{
	ptr32 * esp_14;
	word32 eax_18;
	int8 Top_19;
	_acrt_iob_func();
	*esp_14 = fp + 0x08;
	*(esp_14 - 0x04) = 0x00;
	*(esp_14 - 0x08) = dwArg04;
	*(esp_14 - 0x0C) = eax_18;
	struct Eq_66 * eax_32 = fn00401050();
	*(esp_14 - 0x0010) = eax_32->dw0004;
	*(esp_14 - 0x0014) = eax_32->dw0000;
	word32 ecx_40;
	_stdio_common_vfprintf();
	return ecx_40;
}

// 004012CE: Register Eq_89 Win32CrtStartup()
Eq_89 Win32CrtStartup()
{
	fn00401663();
	int8 Top_163 = 0x00;
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	ptr32 stackArg4 = <invalid>;
	word32 * esp_20;
	struct Eq_4 * ebp_133 = fn00401980(ebx, esi, edi, dwLoc0C, stackArg4, 0x14);
	*(esp_20 - 0x04) = 0x01;
	word32 dwLoc04_317 = 0x14;
	word32 dwLoc08_318 = 0x004024D8;
	word32 * esp_36 = esp_20;
	if ((byte) DPB(eax_28, fn00401474(edx, *(esp_20 - 0x04)), 0) == 0x00)
	{
l00401177:
		esp_36 -= 0x04;
		*esp_36 = 0x07;
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		ptr32 stackArg0 = <invalid>;
		fn00401774(stackArg0, *esp_36);
	}
	*(ebp_133 - 0x19) = 0x00;
	*(ebp_133 - 0x04) &= 0x00;
	word32 edx_139;
	*(ebp_133 - 0x24) = (byte) DPB(eax_61, fn0040143F(out edx_139), 0);
	word32 ebx_127 = DPB(ebx, 0x00, 0);
	word32 eax_70 = globals->dw403334;
	if (eax_70 != 0x01)
	{
		struct Eq_194 * esp_297;
		Eq_89 eax_301;
		if (eax_70 == 0x00)
		{
			globals->dw403334 = 0x01;
			PVFV ** esp_84 = esp_36 - 0x04;
			*esp_84 = (PVFV **) &globals->t4020EC;
			*(esp_84 - 0x04) = 0x004020E0;
			esp_297 = (struct Eq_194 *) ((char *) esp_84 + 0x04);
			if (_initterm_e(*(esp_84 - 0x04), *esp_84) != 0x00)
			{
				*(ebp_133 - 0x04) = ~0x01;
				eax_301 = 0xFF;
				goto l004012C8;
			}
			*esp_84 = (PVFV **) &globals->t4020DC;
			*(esp_84 - 0x04) = 0x004020D4;
			_initterm(*(esp_84 - 0x04), *esp_84);
			globals->dw403334 = 0x02;
		}
		else
		{
			*(ebp_133 - 0x19) = 0x01;
			ebx_127 = DPB(ebx, 0x01, 0);
		}
		union Eq_102 * esp_109 = esp_36 - 0x04;
		*esp_109 = *(ebp_133 - 0x24);
		fn004015CE(*esp_109);
		Eq_102 ecx_117 = *esp_109;
		ptr32 esp_118 = (char *) esp_109 + 0x04;
		Eq_102 eax_119 = fn00401768();
		Eq_102 edi_121 = 0x00;
		if (*eax_119 != 0x00)
		{
			*esp_109 = (union Eq_102 *) eax_119;
			<anonymous> ** esi_137;
			union Eq_102 * esp_138;
			Eq_102 eax_132 = fn00401544(ebx_127, eax_119, 0x00, out edx_139, out ebx_127, out ebp_133, out esi_137, out edi_121);
			ecx_117 = *esp_138;
			esp_118 = (char *) esp_138 + 0x04;
			if ((byte) eax_132 != 0x00)
			{
				*esp_138 = (union Eq_102 *) edi_121;
				*(esp_138 - 0x04) = 0x02;
				*(esp_138 - 0x08) = (union Eq_102 *) edi_121;
				<anonymous> * esi_156 = *esi_137;
				word32 esp_158;
				int8 Top_159;
				fn00401976();
				esi_156();
			}
		}
		Eq_102 eax_166 = fn0040176E();
		Eq_102 esi_167 = eax_166;
		if (*eax_166 != edi_121)
		{
			*(esp_118 - 0x04) = (union Eq_102 *) eax_166;
			union Eq_102 * esp_183;
			eax_166 = fn00401544(ebx_127, eax_166, edi_121, out edx_139, out ebx_127, out ebp_133, out esi_167, out edi_121);
			ecx_117 = *esp_183;
			esp_118 = (char *) esp_183 + 0x04;
			if ((byte) eax_166 != 0x00)
			{
				*esp_183 = (union Eq_102 *) *esi_167;
				union Eq_102 * esp_198;
				register_thread_local_exe_atexit_callback();
				ecx_117 = *esp_198;
				esp_118 = (char *) esp_198 + 0x04;
			}
		}
		word32 esp_211;
		word32 ecx_214;
		word32 * eax_216;
		int8 Top_223;
		word32 edx_228;
		_p___argv();
		word32 esp_231;
		word32 ecx_232;
		word32 * eax_233;
		int8 Top_234;
		word32 edx_235;
		_p___argc();
		ptr32 esp_238;
		word32 ecx_239;
		word32 eax_240;
		word32 edx_242;
		get_initial_narrow_environment();
		*(esp_238 - 0x04) = eax_240;
		*(esp_238 - 0x08) = *eax_216;
		*(esp_238 - 0x0C) = *eax_233;
		int8 Top_254;
		Eq_89 eax_252 = fn00401000(ecx_239, ebp_133, eax_233);
		byte bl_272 = (byte) ebx_127;
		word32 ecx_263;
		word32 eax_262 = fn0040188F(out ecx_263);
		word32 ebx_279 = DPB(ebx_127, bl_272, 0);
		ptr32 esp_259 = esp_238;
		if ((byte) eax_262 == 0x00)
		{
			*(esp_238 - 0x04) = (uint32) eax_252;
			exit(*(esp_238 - 0x04));
		}
		if (bl_272 == 0x00)
			cexit();
		union Eq_508 * esp_284 = esp_259 - 0x04;
		*esp_284 = 0x00;
		*(esp_284 - 0x04) = 0x01;
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		ptr32 stackArg4 = <invalid>;
		fn004015EB(stackArg4, *esp_284);
		*(ebp_133 - 0x04) = ~0x01;
		esp_297 = (struct Eq_194 *) ((char *) esp_284 + 0x04);
		eax_301 = eax_252;
l004012C8:
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		ptr32 stackArg4 = <invalid>;
		ptr32 stackArg8 = <invalid>;
		ptr32 stackArg12 = <invalid>;
		ptr32 stackArg16 = <invalid>;
		fn004019C6(ebp_133, esp_297->ptrFFFFFFFC, stackArg4, stackArg8, stackArg12, stackArg16, out ebp_311, out esi_315, out edi_314);
		return eax_301;
	}
	goto l00401177;
}

// 004012D8: void fn004012D8(Stack (ptr32 Eq_537) dwArg04)
void fn004012D8(struct _EXCEPTION_POINTERS * dwArg04)
{
	SetUnhandledExceptionFilter(null);
	UnhandledExceptionFilter(dwArg04);
	TerminateProcess(GetCurrentProcess(), 0xC0000409);
}

// 004013FB: Register (ptr32 Eq_556) fn004013FB(Stack (ptr32 Eq_557) dwArg04, Stack up32 dwArg08, Register out (ptr32 Eq_556) edxOut)
struct Eq_556 * fn004013FB(struct Eq_557 * dwArg04, up32 dwArg08, struct Eq_556 & edxOut)
{
	struct Eq_556 * eax_32;
	struct Eq_561 * ecx_13 = dwArg04 + dwArg04->dw003C / 0x0040;
	struct Eq_556 * edx_16 = &ecx_13->w0014 + 0x02 + (word32) ecx_13->w0014 / 22;
	struct Eq_556 * esi_19 = edx_16 + (word32) ecx_13->w0006;
	for (; edx_16 != esi_19; ++edx_16)
	{
		if (dwArg08 >= edx_16->dw000C && dwArg08 < edx_16->dw0008 + edx_16->dw000C)
		{
			eax_32 = edx_16;
			goto l00401438;
		}
	}
	eax_32 = null;
l00401438:
	edxOut = edx_16;
	return eax_32;
}

// 0040143F: Register byte fn0040143F(Register out ptr32 edxOut)
byte fn0040143F(ptr32 & edxOut)
{
	word32 eax_4 = fn00401B98();
	if (eax_4 != 0x00)
	{
		ptr32 edx_19 = fs->ptr0018->ptr0004;
		do
		{
			__lock();
			ptr32 eax_25;
			__cmpxchg(globals->dw403338, edx_19, 0x00, out eax_25);
			if (eax_25 == 0x00)
			{
				edxOut = edx_19;
				return (byte) DPB(eax_25, 0x00, 0);
			}
		} while (edx_19 != eax_25);
		edxOut = edx_19;
		return (byte) DPB(eax_25, 0x01, 0);
	}
	else
	{
		edxOut = edx;
		return (byte) DPB(eax_4, 0x00, 0);
	}
}

// 00401474: Register byte fn00401474(Register word32 edx, Stack word32 dwArg04)
byte fn00401474(word32 edx, word32 dwArg04)
{
	if (dwArg04 == 0x00)
		globals->b403354 = 0x01;
	fn004019FE(edx);
	byte al_20 = fn00401C48();
	word32 eax_52 = DPB(eax_13, al_20, 0);
	if (al_20 == 0x00)
		return (byte) DPB(eax_52, 0x00, 0);
	if (fn00401C48() != 0x00)
		return (byte) DPB(eax_13, 0x01, 0);
	eax_52 = DPB(eax_13, fn00401C48(), 0);
	return (byte) DPB(eax_52, 0x00, 0);
}

// 004014AD: void fn004014AD(Register word32 ecx, Register word32 edx, Register word32 ebx, Register word32 ebp, Register word32 esi, Register Eq_102 edi, Stack Eq_102 dwArg04)
void fn004014AD(word32 ecx, word32 edx, word32 ebx, word32 ebp, word32 esi, Eq_102 edi, Eq_102 dwArg04)
{
	if (dwArg04 == 0x00 || dwArg04 == 0x01)
	{
		word32 eax_42 = fn00401B98();
		if (eax_42 != 0x00 && dwArg04 == 0x00)
		{
			word32 * esp_114;
			word32 eax_115;
			int8 Top_120;
			word32 edx_125;
			initialize_onexit_table();
			word32 ecx_127 = *esp_114;
			if (eax_115 == 0x00)
			{
				*esp_114 = 0x00403348;
				initialize_onexit_table();
			}
		}
		else
		{
			ui32 eax_56 = globals->dw403004;
			ui32 eax_77 = __ror(eax_56 & 0x1F | ~0x00, (byte) (0x20 - (eax_56 & 0x1F))) ^ globals->dw403004;
			globals->dw40333C = eax_77;
			globals->dw403340 = eax_77;
			globals->dw403344 = eax_77;
			globals->dw403348 = eax_77;
			globals->dw40334C = eax_77;
			globals->dw403350 = eax_77;
		}
	}
	else
	{
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		ptr32 stackArg0 = <invalid>;
		fn00401774(stackArg0, 0x05);
		int3();
		fn00401544(ebx, dwArg04, edi, out edx_238, out ebx_239, out ebp_240, out esi_241, out edi_242);
	}
}

// 00401544: Register (ptr32 Eq_760) fn00401544(Register word32 ebx, Register Eq_102 esi, Register Eq_102 edi, Register out ptr32 edxOut, Register out ptr32 ebxOut, Register out ptr32 ebpOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
struct Eq_760 * fn00401544(word32 ebx, Eq_102 esi, Eq_102 edi, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & ebpOut, ptr32 & esiOut, ptr32 & ediOut)
{
	struct Eq_760 * eax_81;
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	ptr32 stackArg4 = <invalid>;
	struct Eq_763 * esp_14;
	struct Eq_4 * ebp_13 = fn00401980(ebx, esi, edi, dwLoc0C, stackArg4, 0x08);
	*(ebp_13 - 0x04) &= 0x00;
	struct Eq_781 * eax_22 = (struct Eq_781 *) 23117;
	if (globals->w400000 == 23117)
	{
		eax_22 = globals->ptr40003C;
		if (eax_22->dw400000 == 0x4550 && eax_22->w400018 == 0x010B)
		{
			*(esp_14 - 0x04) = ebp_13->dw0008 - 0x00400000;
			*(esp_14 - 0x08) = 0x00400000;
			eax_22 = fn004013FB(*(esp_14 - 0x08), *(esp_14 - 0x04), out edx);
			if (eax_22 != null && eax_22->dw0024 >= 0x00)
			{
				*(ebp_13 - 0x04) = ~0x01;
				eax_81 = (struct Eq_760 *) DPB(eax_22, 0x01, 0);
l004015C8:
				// Failed to bind call argument.
				// Please report this issue at https://github.com/uxmal/reko
				// Failed to bind call argument.
				// Please report this issue at https://github.com/uxmal/reko
				// Failed to bind call argument.
				// Please report this issue at https://github.com/uxmal/reko
				// Failed to bind call argument.
				// Please report this issue at https://github.com/uxmal/reko
				ptr32 stackArg4 = <invalid>;
				ptr32 stackArg8 = <invalid>;
				ptr32 stackArg12 = <invalid>;
				ptr32 stackArg16 = <invalid>;
				ptr32 ebp_70;
				ptr32 edi_73;
				ptr32 esi_74;
				ptr32 ebx_71 = fn004019C6(ebp_13, esp_14->ptrFFFFFFFC, stackArg4, stackArg8, stackArg12, stackArg16, out ebp_70, out esi_74, out edi_73);
				edxOut = edx;
				ebxOut = ebx_71;
				ebpOut = ebp_70;
				esiOut = esi_74;
				ediOut = edi_73;
				return eax_81;
			}
		}
	}
	*(ebp_13 - 0x04) = ~0x01;
	eax_81 = (struct Eq_760 *) DPB(eax_22, 0x00, 0);
	goto l004015C8;
}

// 004015CE: void fn004015CE(Stack Eq_102 bArg04)
void fn004015CE(Eq_102 bArg04)
{
	if (fn00401B98() != 0x00 && bArg04 == 0x00)
		globals->dw403338 = 0x00;
}

// 004015EB: void fn004015EB(Stack ptr32 dwArg04, Stack Eq_508 bArg08)
void fn004015EB(ptr32 dwArg04, Eq_508 bArg08)
{
	if (globals->b403354 == 0x00 || bArg08 == 0x00)
	{
		fn00401C48();
		fn00401C48();
	}
}

// 00401613: Register ui32 fn00401613(Register ptr32 ebp, Stack ui32 dwArg04)
ui32 fn00401613(ptr32 ebp, ui32 dwArg04)
{
	word32 eax_23;
	ui32 eax_8 = globals->dw403004;
	word32 eax_17 = __ror(eax_8 ^ globals->dw40333C, (byte) (eax_8 & 0x1F));
	if (eax_17 == ~0x00)
		crt_atexit();
	else
		register_onexit_function();
	return ~(0x00 - (-eax_23 == 0x00)) & dwArg04;
}

// 0040164E: void fn0040164E(Stack ui32 dwArg04)
void fn0040164E(ui32 dwArg04)
{
	fn00401613(fp - 0x04, dwArg04);
}

// 00401663: void fn00401663()
void fn00401663()
{
	ui32 eax_15 = globals->dw403004;
	if (eax_15 != 0xBB40E64E && (eax_15 & 0xFFFF0000) != 0x00)
		globals->dw403000 = ~eax_15;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x10);
		ui32 v14_43 = dwLoc0C & 0x00 ^ dwLoc10 & 0x00 ^ GetCurrentThreadId() ^ GetCurrentProcessId();
		QueryPerformanceCounter(fp - 0x18);
		ui32 ecx_55 = dwLoc14 ^ dwLoc18 ^ v14_43 ^ fp - 0x08;
		if (ecx_55 == 0xBB40E64E)
			ecx_55 = ~0x44BF19B0;
		else if ((ecx_55 & 0xFFFF0000) == 0x00)
			ecx_55 |= (ecx_55 | 0x4711) << 0x10;
		globals->dw403004 = ecx_55;
		globals->dw403000 = ~ecx_55;
	}
}

// 004016FF: void fn004016FF()
void fn004016FF()
{
}

// 00401703: void fn00401703()
void fn00401703()
{
}

// 00401709: void fn00401709()
void fn00401709()
{
}

// 0040170C: void fn0040170C()
void fn0040170C()
{
	InitializeSListHead(&globals->u403358);
}

// 00401718: void fn00401718(Register word32 eax)
void fn00401718(word32 eax)
{
	word32 eax_12;
	controlfp_s();
	if (eax_12 == 0x00)
		return;
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	ptr32 stackArg0 = <invalid>;
	fn00401774(stackArg0, 0x07);
	int3();
	fn00401739();
}

// 00401739: Register ptr32 fn00401739()
ptr32 fn00401739()
{
	return 0x00403360;
}

// 0040173F: void fn0040173F()
void fn0040173F()
{
	struct Eq_66 * eax_4 = fn00401050();
	word32 ecx_6 = eax_4->dw0004;
	eax_4->dw0000 |= 0x04;
	eax_4->dw0004 = ecx_6;
	struct Eq_1008 * eax_12 = fn00401739();
	word32 ecx_13 = eax_12->dw0004;
	eax_12->dw0000 |= 0x02;
	eax_12->dw0004 = ecx_13;
}

// 0040175C: void fn0040175C()
void fn0040175C()
{
}

// 00401768: Register ptr32 fn00401768()
ptr32 fn00401768()
{
	return 0x00403388;
}

// 0040176E: Register ptr32 fn0040176E()
ptr32 fn0040176E()
{
	return 0x00403384;
}

// 00401774: void fn00401774(Stack ptr32 dwArg00, Stack word32 dwArg04)
void fn00401774(ptr32 dwArg00, word32 dwArg04)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		globals->dw403368 = 0x00;
		memset(fp - 808, 0x00, 0x02CC);
		memset(fp - 0x5C, 0x00, 0x50);
		byte bl_90 = 0x00 - (0x01 - IsDebuggerPresent() == 0x00);
		SetUnhandledExceptionFilter(null);
		if (UnhandledExceptionFilter(fp - 0x0C) == 0x00)
			globals->dw403368 &= 0x00 - (-((word32) (bl_90 + 0x01)) == 0x00);
	}
	else
		__fastfail(dwArg04);
}

// 0040188F: Register Eq_1113 fn0040188F(Register out Eq_446 ecxOut)
Eq_1113 fn0040188F(HMODULE & ecxOut)
{
	Eq_446 eax_12 = GetModuleHandleW(null);
	Eq_446 ecx_20 = eax_12;
	if (eax_12 != null)
	{
		eax_12 = (struct HINSTANCE__ *) 23117;
		if (eax_12->unused == 23117)
		{
			eax_12 = (Eq_446) (eax_12 + (&eax_12->unused)[0x0F] / 0x04);
			if (eax_12->unused == 0x4550)
			{
				ecx_20 = (struct HINSTANCE__ *) 0x010B;
				if ((&eax_12->unused)[0x06] == 0x010B && (&eax_12->unused)[0x001D] > 0x0E)
				{
					Eq_1113 eax_38 = DPB(eax_12, (&eax_12->unused)[0x003A] != 0x00, 0);
					ecxOut = (struct HINSTANCE__ *) 0x010B;
					return eax_38;
				}
			}
		}
	}
	ecxOut = ecx_20;
	return DPB(eax_12, 0x00, 0);
}

// 004018D3: void fn004018D3()
void fn004018D3()
{
	SetUnhandledExceptionFilter(&globals->t4018DF);
}

// 00401920: void fn00401920(Register word32 ebx, Register word32 esi, Register word32 edi)
void fn00401920(word32 ebx, word32 esi, word32 edi)
{
	word32 * esi_10 = globals->a4024C8;
	if (false)
	{
		do
		{
			word32 edi_19 = *esi_10;
			if (edi_19 != 0x00)
			{
				word32 esp_24;
				int8 Top_25;
				fn00401976();
				fn00000000();
			}
			++esi_10;
		} while (esi_10 < globals->a4024C8);
	}
}

// 00401976: void fn00401976()
void fn00401976()
{
	globals->ptr4020D0();
}

// 00401980: Register ptr32 fn00401980(Register word32 ebx, Register Eq_102 esi, Register Eq_102 edi, Stack word32 dwArg00, Stack ptr32 dwArg04, Stack ui32 dwArg08)
ptr32 fn00401980(word32 ebx, Eq_102 esi, Eq_102 edi, word32 dwArg00, ptr32 dwArg04, ui32 dwArg08)
{
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = ebx;
	*(esp_14 - 0x08) = (union Eq_102 *) esi;
	*(esp_14 - 0x0C) = (union Eq_102 *) edi;
	*(esp_14 - 0x0010) = globals->dw403004 ^ fp + 0x08;
	*(esp_14 - 0x0014) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 004019C6: Register ptr32 fn004019C6(Register (ptr32 Eq_4) ebp, Stack ptr32 dwArg00, Stack ptr32 dwArg04, Stack ptr32 dwArg08, Stack ptr32 dwArg0C, Stack ptr32 dwArg10, Register out ptr32 ebpOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
ptr32 fn004019C6(struct Eq_4 * ebp, ptr32 dwArg00, ptr32 dwArg04, ptr32 dwArg08, ptr32 dwArg0C, ptr32 dwArg10, ptr32 & ebpOut, ptr32 & esiOut, ptr32 & ediOut)
{
	fs->dw0000 = *(ebp - 0x10);
	ptr32 ebp_19 = ebp->ptr0000;
	ebp->ptr0000 = dwArg00;
	ebpOut = ebp_19;
	esiOut = dwArg0C;
	ediOut = dwArg08;
	return dwArg10;
}

// 004019FE: void fn004019FE(Register word32 edx)
void fn004019FE(word32 edx)
{
	globals->dw40336C &= 0x00;
	globals->dw403010 |= 0x01;
	if (IsProcessorFeaturePresent(0x0A) != 0x00)
	{
		ui32 edi_101;
		globals->dw403010 |= 0x02;
		globals->dw40336C = 0x01;
		__cpuid(0x00, 0x00, &0x00, &0x01, &0x00, &edx);
		__cpuid(0x01, 0x00, &0x01, &0x01, &0x00, &edx);
		Eq_1297 bLoc14_258 = dwLoc14 & 0x00;
		if ((edx ^ 0x49656E69 | 1818588270 | 0x756E6546) == 0x00 && (0x00 == 0x000106C0 || (0x00 == 0x00020660 || (0x00 == 0x00020670 || (0x00 == 0x00030650 || (0x00 == 0x00030660 || false))))))
		{
			ui32 edi_100 = globals->dw403370;
			globals->dw403370 = edi_100 | 0x01;
			edi_101 = edi_100 | 0x01;
		}
		else
			edi_101 = globals->dw403370;
		if (false)
		{
			__cpuid(0x07, 0x00, &0x07, &0x01, &0x00, &edx);
			bLoc14_258.u0 = 0x01;
			if (0x00 != 0x00)
				globals->dw403370 = edi_101 | 0x02;
		}
		if (0x00 != 0x00)
		{
			globals->dw403010 |= 0x04;
			globals->dw40336C = 0x02;
			if (0x00 != 0x00 && (0x00 != 0x00 && (((word32) __xgetbv(0x00) & 0x06) == 0x06 && true)))
			{
				ui32 eax_187 = globals->dw403010;
				globals->dw40336C = 0x03;
				globals->dw403010 = eax_187 | 0x08;
				if ((bLoc14_258 & 0x20) != 0x00)
				{
					globals->dw40336C = 0x05;
					globals->dw403010 = eax_187 | 0x08 | 0x20;
				}
			}
		}
	}
}

// 00401B98: Register word32 fn00401B98()
word32 fn00401B98()
{
	return (word32) (globals->dw403014 != 0x00);
}

// 00401BA4: void fn00401BA4()
void fn00401BA4()
{
}

// 00401C48: Register byte fn00401C48()
byte fn00401C48()
{
	return 0x01;
}

