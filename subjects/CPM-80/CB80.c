// CB80.c
// Generated by decompiling CB80.COM
// using Reko decompiler version 0.6.2.0.

#include "CB80.h"

void fn0387()
{
	<anonymous> * hl_6 = globals->ptr1648;
	word16 sp_7;
	word16 hl_8;
	hl_6();
	return;
}

ptr16 fn0390(Eq_8 c, byte b, byte e, word16 wArg00, word16 wArg02)
{
	globals->b1656 = e;
	globals->b1655 = b;
	globals->t1654 = c;
	globals->f1653 = (byte) wArg02;
	while (true)
	{
		bool a_26 = globals->f1653;
		globals->f1653 = a_26 - 0x01;
		if (a_26)
			break;
		globals->t1654->u0 = globals->b1656;
		globals->t1654 = globals->t1654;
	}
	return fp + 0x02;
}

byte fn03BB(cu8 c, Eq_48 & aOut)
{
	globals->b1657 = c;
	byte a_12 = 0x00 - (0x1A - (globals->b1657 - 0x61) < 0x00);
	byte a_16;
	*aOut = ~a_12;
	return cond(a_12);
}

void fn03CB(Eq_66 c, byte b, byte l)
{
	globals->t1658 = c;
	byte a_22;
	fn03BB((byte) globals->t1658, out a_22);
	return;
}

Eq_79 fn03E6(Eq_79 c, byte l)
{
	globals->t1659 = c;
	byte a_8;
	byte C_9 = fn03BB((byte) globals->t1659, out a_8);
	if (__ror(a_8, C_9) >= 0x00)
		return globals->t1659;
	else
		return globals->t1659;
}

void fn0400()
{
	globals->w1640 = globals->w0006;
	globals->ptr164E = &globals->f0080;
	return;
}

byte fn045B()
{
	if (globals->f0080)
	{
		globals->f0080 = globals->f0080 - 0x01;
		struct Eq_106 * hl_15 = globals->ptr164E;
		globals->ptr164E = &hl_15->b0001;
		return hl_15->b0001;
	}
	else
		return 0x00;
}

void fn063E(word16 bc, Eq_129 e, byte d)
{
fn063E_entry:
	globals->b1679 = d
	globals->t1678 = e
	globals->b1677 = b
	globals->t1676 = c
	globals->b167B = 0x00
	globals->t1678->u0 = 0x00
	globals->t167A.u0 = 0x00
	goto l0657
l063E:
l0657:
	branch 0x03 - globals->t167A l06B6
l0660:
	globals->b167C = 0x30
l0665:
	bc = 0x0227
	word16 de_98
	bool C_99 = fn1348(&globals->t1676, DPB(globals->t167A, 0x00, 8) * 0x02 + 0x0227, out de_98)
	branch C_99 l0697
l0678:
	struct Eq_210 * hl_106 = DPB(globals->t167A, 0x00, 8) * 0x02 + 0x0227
	byte * de_109
	fn1348(&globals->t1676, hl_106, out de_109)
	*(de_109 - 0x01) = (byte) hl_106
	*de_109 = SLICE(hl_106, byte, 8)
	globals->b167B = 0x01
	globals->b167C = globals->b167C + 0x01
	goto l0665
l0697:
	branch __ror(globals->b167B, C_99) >= 0x00 l06AF
l069E:
	Eq_129 hl_137 = globals->t1678
	*hl_137 = *hl_137
	globals->t1678->u0 = globals->b167C
	bc = 0x27
l06AF:
	globals->t167A = globals->t167A
	branch globals->t167A != 0x00 l0657
l06B6:
	Eq_129 hl_50 = globals->t1678
	Eq_138 hl_46 = globals->t1676
	*hl_50 = *hl_50
	globals->t1678->u0 = (byte) hl_46.u1
	return
	Eq_129 hl_68 = globals->t1678
	Eq_138 hl_64 = globals->t1676
	*hl_68 = *hl_68
	globals->t1678->u0 = (byte) hl_64.u1
	return
fn063E_exit:
}

void fn0990(word16 af, word16 bc, Eq_296 e, byte d, byte h, byte l)
{
fn0990_entry:
	globals->b1695 = d
	globals->t1694 = e
	globals->b1693 = b
	globals->t1692 = c
	struct Eq_310 * hl_19 = globals->ptr168B
	byte h_22 = SLICE(hl_19->f0000 + 0x01, byte, 8)
	word16 bc_16 = DPB(bc, 11, 0)
	struct Eq_320 * sp_29 = fn0390((byte) (hl_19->f0000 + 0x01), h_22, 0x20, wLoc04, bc_16)
	globals->t1696 = *globals->t1692
	Eq_307 hl_33 = globals->t1692
	globals->t1692 = hl_33
	bool a_38 = *hl_33
	byte b_117 = h_22
	word16 af_127 = DPB(af, a_38, 0)
	branch a_38 - 0x3A l0A0C
	goto l09BD
l0990:
l09BD:
	Eq_307 hl_427 = globals->t1692
	fn03CB(*hl_427, h_22, (byte) hl_427)
	Eq_307 hl_430 = globals->t1692
	*(sp_29 - 0x02) = af_127
	*(sp_29 - 0x02) = DPB(af, 0x00 - (*hl_430 < 0x41) | sp_29->b0003, 0)
	b_117 = sp_29->b0003
	branch __ror(0x00 - (0x02 - globals->t1696 < 0x00) & b_117, false) >= 0x00 l0A06
l09E0:
	globals->ptr168B->f0000 = *globals->t1692 & 0x1F
	af_127 = DPB(af, 0x10, 0)
	branch 0x10 - (globals->ptr168B)->f0000 l09F6
l09F3:
	return
l09F6:
	globals->t1692 = globals->t1692
	globals->t1696 = globals->t1696 - 0x01
	globals->t1696 = globals->t1696 - 0x01
	goto l0A11
l0A06:
	return
l0A09:
l0A0C:
	globals->ptr168B->f0000 = 0x00
l0A11:
	globals->t1697.u0 = 0x00
l0A16:
	*(sp_29 - 0x02) = DPB(af_127, ~(0x00 - (0x07 - globals->t1697 < 0x00)), 0)
	byte a_92 = fn0B74(b_117)
	word16 bc_93 = *(sp_29 - 0x02)
	byte b_94 = SLICE(bc_93, byte, 8)
	word16 bc_97 = DPB(bc_93, b_94, 0)
	branch __ror(a_92 & b_94, false) >= 0x00 l0A53
l0A29:
	Mem112[sp_29 - 0x02 + 0x00:word16] = Mem91[5778:word16] + DPB(Mem91[0x1697:word16], 0x00, 8)
	bool a_126 = **(sp_29 - 0x02)
	Mem128[Mem112[5771:word16] + (DPB(Mem112[0x1697:word16], 0x00, 8) + 0x01):byte] = a_126
	b_117 = 0x00
	af_127 = DPB(af_127, a_126, 0)
	branch a_126 - 0x2A l0A4D
l0A4A:
	return
l0A4D:
	fn0B91()
	goto l0A16
l0A53:
	byte * bc_170
	cu8 * hl_144 = globals->t1692
	*(sp_29 - 0x02) = DPB(af_127, 0x00 - (0x01 - globals->t1696 < 0x00), 0)
	branch __ror(0x00 - (*hl_144 < 0x2F) & sp_29->b0003, false) >= 0x00 l0AA3
l0A70:
	fn0B91()
	branch 0x03 - globals->t1696 l0A7F
l0A7C:
	return
l0A7F:
	*(sp_29 - 0x02) = (union Eq_66 *) globals->t1696
	Mem320[sp_29 - 0x04 + 0x00:word16] = Mem310[5778:word16] + DPB(Mem310[0x1697:word16], 0x00, 8)
	byte * de_325 = globals->ptr168B->f0000[0x09]
	bc_170 = (byte *) *(sp_29 - 0x04)
	byte l_333 = (byte) *(sp_29 - 0x02)
l0A98:
	*de_325 = *bc_170
	bc_170 = (byte *) bc_170[0x01]
	de_325 = (byte *) de_325[0x01]
	l_333 = l_333 - 0x01
	branch l_333 != 0x00 l0A98
	goto l0AE5
l0AA3:
	word16 hl_365 = Mem147[5778:word16] + DPB(Mem147[0x1697:word16], 0x00, 8)
	*(sp_29 - 0x02) = DPB(af_127, 0x00 - (globals->t1696 < 0x01), 0)
	branch __ror(0x00 - (*hl_365 < 0x2F) | sp_29->b0003, false) >= 0x00 l0AE2
l0AC3:
	Eq_296 hl_385 = globals->t1694
	*(sp_29 - 0x02) = (word16) DPB(hl_385, *hl_385, 0)
	*(sp_29 - 0x04) = (word16) *globals->t1694
	byte * de_399 = globals->ptr168B->f0000[0x09]
	bc_170 = (byte *) *(sp_29 - 0x04)
	byte l_407 = (byte) *(sp_29 - 0x02)
l0AD7:
	*de_399 = *bc_170
	bc_170 = (byte *) bc_170[0x01]
	de_399 = (byte *) de_399[0x01]
	l_407 = l_407 - 0x01
	branch l_407 != 0x00 l0AD7
	goto l0AE5
l0AE2:
	return
l0AE5:
	*(sp_29 - 0x02) = (byte **) DPB(bc_170, 0x03, 0)
	struct Eq_310 * hl_181 = globals->ptr168B
	fn0390((byte) hl_181->f0000[0x0C], SLICE(hl_181->f0000[0x0C], byte, 8), 0x00, bc_16, wArg00)
	globals->ptr168B->b0020 = 0x00
	globals->t1697.u0 = 0x00
l0B04:
	branch 0x07 - globals->t1697 l0B38
l0B0D:
	word16 hl_280 = Mem198[5771:word16] + (DPB(Mem198[0x1697:word16], 0x00, 8) + 0x01)
	Mem296[Mem198[5771:word16] + (DPB(Mem198[0x1697:word16], 0x00, 8) + 0x01):byte] = fn03E6(*hl_280, (byte) hl_280)
	Eq_489 a_297 = globals->t1697
	globals->t1697 = *a_297
	branch a_297 != 0x01 l0B04
l0B38:
	globals->t1697.u0 = 0x00
l0B3D:
	branch 0x02 - globals->t1697 l0B71
l0B46:
	word16 hl_250 = Mem220[5771:word16] + (DPB(Mem220[0x1697:word16], 0x00, 8) + 0x09)
	Mem266[Mem220[5771:word16] + (DPB(Mem220[0x1697:word16], 0x00, 8) + 0x09):byte] = fn03E6(*hl_250, (byte) hl_250)
	Eq_489 a_267 = globals->t1697
	globals->t1697 = *a_267
	branch a_267 != 0x01 l0B3D
l0B71:
	return
fn0990_exit:
}

byte fn0B74(byte b)
{
	return 0x00 - (Mem0[0x1696:byte] <u ~0x00) & SLICE(DPB(af, 0x00 - (Mem0[Mem0[5778:word16] + DPB(Mem0[0x1697:word16], 0x00, 8):byte] <u 0x2F), 0), byte, 8);
}

void fn0B91()
{
	globals->t1697 = *globals->t1697;
	globals->t1696 = globals->t1696 - 0x01;
	return;
}

void fn0C93(word16 bc)
{
	return;
}

void fn0D64()
{
	__ror(globals->ptr1521->b0009, false);
	return;
}

void fn0D6F()
{
	struct Eq_845 * hl_4 = globals->ptr1521;
	hl_4->b0009 = hl_4->b0009 | 0x02;
	return;
}

void fn0DB9()
{
	byte a_6 = globals->ptr1521->b0009;
	byte a_10 = __ror(a_6 + 252, cond(a_6 + 252));
	byte a_12 = __ror(a_10, cond(a_10));
	__ror(a_12, cond(a_12));
	return;
}

void fn0DCB()
{
	struct Eq_845 * hl_4 = globals->ptr1521;
	hl_4->b0009 = hl_4->b0009 | 0x08;
	return;
}

void fn0E63(word16 bc, word16 de)
{
fn0E63_entry:
	globals->f16A6 = c
	fn0C93(bc)
	Eq_899 bc_9 = DPB(bc, 0x00, 8)
	Mem23[0x1521:word16] = DPB(de, Mem4[bc_9 + 0x152C + bc_9 + 0x01:byte], 8)
	goto l0E79
l0E63:
l0E79:
	byte l_33
	word16 de_32
	byte a_34 = fn1353(0x00, &globals->ptr1521, out de_32, out l_33)
	branch (a_34 | l_33) == 0x00 l0EA8
l0E85:
	branch globals->f16A6 - (globals->ptr1521)->f0002 l0E9B
l0E91:
	byte a_65
	byte C_67 = fn0EAB(out a_65, out de_32)
	branch __ror(a_65, C_67) >= 0x00 l0E9B
l0E98:
	return
l0E9B:
	globals->ptr1521 = DPB(de_32, globals->ptr1521->b0001, 8)
	goto l0E79
l0EA8:
	return
fn0E63_exit:
}

byte fn0EAB(Eq_932 & aOut, ptr16 & deOut)
{
	*deOut = de;
	globals->t16A7.u0 = 0x00;
l0EB0:
	bool a_13 = globals->f138C;
	byte SZPC_15 = a_13 - globals->t16A7;
	if (a_13 - globals->t16A7)
	{
		byte a_59;
		*aOut = 0x01;
		return SZPC_15;
	}
	else
	{
		word16 hl_40 = Mem3[0x1521:word16] + (DPB(Mem3[5799:word16], 0x00, 8) + 0x0A);
		struct Eq_977 * hl_45 = DPB(globals->t16A7, 0x00, 8);
		bool a_50 = *hl_40;
		bool * de_48 = hl_40;
		*deOut = de_48;
		byte SZPC_51 = a_50 - hl_45->f138C;
		if (a_50 - hl_45->f138C)
		{
			globals->t16A7 = globals->t16A7;
			goto l0EB0;
		}
		else
		{
			byte a_55;
			*aOut = 0x00;
			return SZPC_51;
		}
	}
}

void fn0FB8()
{
	return;
}

void fn1262()
{
fn1262_entry:
	branch globals->f16A8 - 0x20 l1278
	goto l126A
l1262:
l126A:
	bool a_9 = fn045B()
	globals->f16A8 = a_9
	branch a_9 - 0x20 l1278
	goto l126A
l1278:
	return
fn1262_exit:
}

void fn1315(word16 de, byte h, byte l)
{
	return;
}

void fn1326(byte c, byte l, byte h)
{
	do
	{
		byte a_11 = __ror(h, false);
		h = a_11;
		l = __ror(l, cond(a_11));
		c = c - 0x01;
	} while (c != 0x00);
	return;
}

void fn1335(byte d, byte e, byte h, byte l)
{
	return;
}

void fn133C(byte a, byte d, byte e)
{
	return;
}

void fn1346(Eq_222 * de, word16 hl)
{
	struct Eq_210 * hl_7 = DPB(hl, b, 8);
	word16 de_9;
	fn1348(de, hl_7, out de_9);
	return;
}

byte fn1348(Eq_222 * de, Eq_210 * hl, ptr16 & deOut)
{
	uint8 a_14 = de->b0001;
	word16 de_13;
	*deOut = (byte *) &de->b0001;
	return cond(SEQ(a_14, a_14) - SEQ(Mem0[hl + 0x01:byte], Mem0[hl + 0x00:byte]));
}

byte fn1353(byte a, Eq_946 * de, ptr16 & deOut, Eq_948 & lOut)
{
	word16 de_6;
	byte l_7;
	return fn1356(de, 0x00, a, out de_6, out l_7);
}

byte fn1356(Eq_946 * de, ui8 h, byte l, ptr16 & deOut, Eq_1084 & lOut)
{
	uint8 a_6 = de->b0000 - l;
	uint8 a_12 = de->b0001;
	byte l_8;
	*lOut = a_6;
	word16 de_11;
	*deOut = (byte *) &de->b0001;
	return (byte) (SEQ(a_12, a_12) - SEQ(h, a_6));
}

