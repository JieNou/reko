// ais3_crackme.h
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4005C5 Eq_16 t4005C5) (400620 Eq_19 t400620) (4006B0 Eq_20 t4006B0) (4006C8 (str char) str4006C8) (4006F0 (str char) str4006F0) (400718 (str char) str400718) (600DF8 (arr (ptr64 code)) a600DF8) (600E08 word64 qw600E08) (601038 byte b601038))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start : ptr64)
	T_3 (in signature of call_gmon_start : void)
Eq_5: (fn void ())
	T_5 (in rdx : (ptr64 Eq_5))
	T_21 (in rtld_fini : (ptr64 (fn void ())))
Eq_6: (union "Eq_6" (int32 u0) (word64 u1))
	T_6 (in qwArg00 : Eq_6)
	T_17 (in argc : int32)
Eq_7: (fn void (ptr64))
	T_7 (in __align : ptr64)
	T_8 (in signature of __align : void)
Eq_14: (fn int32 ((ptr64 Eq_16), Eq_6, (ptr64 (ptr64 char)), (ptr64 Eq_19), (ptr64 Eq_20), (ptr64 Eq_5), (ptr64 void)))
	T_14 (in __libc_start_main : ptr64)
	T_15 (in signature of __libc_start_main : void)
Eq_16: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_16 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_23 (in 0x4005C5<64> : word64)
Eq_19: (fn void ())
	T_19 (in init : (ptr64 (fn void ())))
	T_25 (in 0x400620<64> : word64)
Eq_20: (fn void ())
	T_20 (in fini : (ptr64 (fn void ())))
	T_26 (in 0x4006B0<64> : word64)
Eq_28: (fn void ())
	T_28 (in __hlt : ptr64)
	T_29 (in signature of __hlt : void)
Eq_50: (fn void ())
	T_50 (in deregister_tm_clones : ptr64)
	T_51 (in signature of deregister_tm_clones : void)
Eq_65: (fn void ())
	T_65 (in register_tm_clones : ptr64)
	T_66 (in signature of register_tm_clones : void)
	T_68 (in register_tm_clones : ptr64)
Eq_96: (struct "Eq_96" 0001 (0 (arr Eq_96) a0000))
	T_96 (in Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0):byte] : byte)
	T_224
	T_225
Eq_105: (struct "Eq_105" (601020 byte b601020))
	T_105 (in (int64) SLICE((uint64) dwLoc0C_103, word32, 0) : int64)
Eq_169: (struct "Eq_169" (8 (ptr64 (arr Eq_96)) ptr0008))
	T_169 (in rsi : (ptr64 Eq_169))
Eq_173: (fn word32 ((ptr64 (arr Eq_96))))
	T_173 (in verify : ptr64)
	T_174 (in signature of verify : void)
Eq_184: (fn int32 ((ptr64 char)))
	T_184 (in puts : ptr64)
	T_185 (in signature of puts : void)
	T_189 (in puts : ptr64)
	T_192 (in puts : ptr64)
Eq_200: (fn void ())
	T_200 (in _init : ptr64)
	T_201 (in signature of _init : void)
Eq_204: (union "Eq_204" (int64 u0) (ptr64 u1))
	T_204 (in 0000000000600E00 : ptr64)
Eq_205: (union "Eq_205" (int64 u0) (ptr64 u1))
	T_205 (in 0000000000600DF8 : ptr64)
Eq_214: (union "Eq_214" (int64 u0) (uint64 u1))
	T_214 (in rbx_36 : Eq_214)
	T_215 (in 0<u64> : uint64)
	T_221 (in rbx_36 + 1<64> : word64)
	T_222 (in rbp_19 >> 3<64> : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in call_gmon_start : ptr64)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: (ptr64 (fn T_4 ()))
T_3: (in signature of call_gmon_start : void)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in rdx : (ptr64 Eq_5))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: (ptr64 (fn void ()))
T_6: (in qwArg00 : Eq_6)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: (union (int32 u1) (word64 u0))
T_7: (in __align : ptr64)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: (ptr64 (fn T_13 (T_12)))
T_8: (in signature of __align : void)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: 
T_9: (in  : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: 
T_10: (in fp : ptr64)
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_11: (in 8<i64> : int64)
  Class: Eq_11
  DataType: int64
  OrigDataType: int64
T_12: (in fp + 8<i64> : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: ptr64
T_13: (in __align((char *) fp + 8<i32>) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __libc_start_main : ptr64)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: (ptr64 (fn T_27 (T_23, T_6, T_24, T_25, T_26, T_5, T_10)))
T_15: (in signature of __libc_start_main : void)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: 
T_16: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_17: (in argc : int32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_18: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_19: (in init : (ptr64 (fn void ())))
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_20: (in fini : (ptr64 (fn void ())))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: 
T_22: (in stack_end : (ptr64 void))
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: 
T_23: (in 0x4005C5<64> : word64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_24: (in fp + 8<i64> : word64)
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_25: (in 0x400620<64> : word64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn void ()))
T_26: (in 0x4006B0<64> : word64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn void ()))
T_27: (in __libc_start_main(&globals->t4005C5, qwArg00, (char *) fp + 8<i32>, &globals->t400620, &globals->t4006B0, rdx, fp) : int32)
  Class: Eq_27
  DataType: int32
  OrigDataType: int32
T_28: (in __hlt : ptr64)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: (ptr64 (fn T_30 ()))
T_29: (in signature of __hlt : void)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: 
T_30: (in __hlt() : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in __gmon_start__ : ptr64)
  Class: Eq_31
  DataType: word64
  OrigDataType: 
T_32: (in signature of __gmon_start__ : void)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: 
T_33: (in 0<64> : word64)
  Class: Eq_31
  DataType: word64
  OrigDataType: word64
T_34: (in __gmon_start__ == 0<64> : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in __gmon_start__ : ptr64)
  Class: Eq_35
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_36: (in false : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in 0<u64> : uint64)
  Class: Eq_37
  DataType: uint64
  OrigDataType: uint64
T_38: (in 0<64> : word64)
  Class: Eq_37
  DataType: uint64
  OrigDataType: word64
T_39: (in 0<u64> == 0<64> : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0<u64> : uint64)
  Class: Eq_40
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_41: (in false : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0<u64> : uint64)
  Class: Eq_42
  DataType: uint64
  OrigDataType: uint64
T_43: (in 0<64> : word64)
  Class: Eq_42
  DataType: uint64
  OrigDataType: word64
T_44: (in 0<u64> == 0<64> : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in 0<u64> : uint64)
  Class: Eq_45
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_46: (in 0000000000601038 : ptr64)
  Class: Eq_46
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x0000000000601038<p64>:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0<8> : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in globals->b601038 != 0<8> : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in deregister_tm_clones : ptr64)
  Class: Eq_50
  DataType: (ptr64 Eq_50)
  OrigDataType: (ptr64 (fn T_52 ()))
T_51: (in signature of deregister_tm_clones : void)
  Class: Eq_50
  DataType: (ptr64 Eq_50)
  OrigDataType: 
T_52: (in deregister_tm_clones() : void)
  Class: Eq_52
  DataType: void
  OrigDataType: void
T_53: (in 1<8> : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_54: (in 0000000000601038 : ptr64)
  Class: Eq_54
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_55 t0000)))
T_55: (in Mem19[0x0000000000601038<p64>:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_56: (in 0000000000600E08 : ptr64)
  Class: Eq_56
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_57 t0000)))
T_57: (in Mem0[0x0000000000600E08<p64>:word64] : word64)
  Class: Eq_57
  DataType: word64
  OrigDataType: word64
T_58: (in 0<64> : word64)
  Class: Eq_57
  DataType: word64
  OrigDataType: word64
T_59: (in globals->qw600E08 == 0<64> : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in 0<u64> : uint64)
  Class: Eq_60
  DataType: uint64
  OrigDataType: uint64
T_61: (in 0<64> : word64)
  Class: Eq_60
  DataType: uint64
  OrigDataType: word64
T_62: (in 0<u64> == 0<64> : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in fn0000000000000000 : ptr64)
  Class: Eq_63
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_64: (in signature of fn0000000000000000 : void)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: 
T_65: (in register_tm_clones : ptr64)
  Class: Eq_65
  DataType: (ptr64 Eq_65)
  OrigDataType: (ptr64 (fn T_67 ()))
T_66: (in signature of register_tm_clones : void)
  Class: Eq_65
  DataType: (ptr64 Eq_65)
  OrigDataType: 
T_67: (in register_tm_clones() : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
T_68: (in register_tm_clones : ptr64)
  Class: Eq_65
  DataType: (ptr64 Eq_65)
  OrigDataType: (ptr64 (fn T_69 ()))
T_69: (in register_tm_clones() : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
T_70: (in eax : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in rdi : (arr Eq_96))
  Class: Eq_71
  DataType: (ptr64 (arr Eq_96))
  OrigDataType: (ptr64 (struct (0 (arr T_224) a0000)))
T_72: (in dwLoc0C_103 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in 0<32> : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_74: (in rax_112 : uint64)
  Class: Eq_74
  DataType: uint64
  OrigDataType: uint64
T_75: (in rax_17 : (ptr64 byte))
  Class: Eq_75
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_84 t0000)))
T_76: (in (uint64) dwLoc0C_103 : uint64)
  Class: Eq_76
  DataType: uint64
  OrigDataType: uint64
T_77: (in SLICE((uint64) dwLoc0C_103, word32, 0) : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in (int64) SLICE((uint64) dwLoc0C_103, word32, 0) : int64)
  Class: Eq_78
  DataType: int64
  OrigDataType: int64
T_79: (in rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0) : word64)
  Class: Eq_75
  DataType: (ptr64 byte)
  OrigDataType: word64
T_80: (in rax_32_32_113 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in SLICE(rax_17, word32, 32) : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_82: (in 0<64> : word64)
  Class: Eq_82
  DataType: word64
  OrigDataType: word64
T_83: (in rax_17 + 0<64> : word64)
  Class: Eq_83
  DataType: word64
  OrigDataType: word64
T_84: (in Mem12[rax_17 + 0<64>:byte] : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in (word32) Mem12[rax_17 + 0<64>:byte] : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in SLICE((word32) Mem12[rax_17 + 0<64>:byte], byte, 0) : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in 0<8> : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_88: (in (byte) (word32) *rax_17 != 0<8> : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in al_34 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in (uint64) dwLoc0C_103 : uint64)
  Class: Eq_90
  DataType: uint64
  OrigDataType: uint64
T_91: (in SLICE((uint64) dwLoc0C_103, word32, 0) : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in (uint64) dwLoc0C_103 : uint64)
  Class: Eq_92
  DataType: uint64
  OrigDataType: uint64
T_93: (in SLICE((uint64) dwLoc0C_103, word32, 0) : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in (int64) SLICE((uint64) dwLoc0C_103, word32, 0) : int64)
  Class: Eq_94
  DataType: int64
  OrigDataType: int64
T_95: (in rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0) : word64)
  Class: Eq_95
  DataType: (ptr64 Eq_96)
  OrigDataType: (ptr64 (struct (0 T_96 t0000)))
T_96: (in Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0):byte] : byte)
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: byte
T_97: (in (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0):byte] : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in (uint64) (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0):byte] : uint64)
  Class: Eq_98
  DataType: uint64
  OrigDataType: uint64
T_99: (in SLICE((uint64) (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0):byte], word32, 0) : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in (word32) (uint64) dwLoc0C_103 ^ (word32) ((uint64) ((word32) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&(rdi)[(int64) ((word32) ((uint64) dwLoc0C_103))].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000))[0<i32>].a0000)[0<i32>])) : word32)
  Class: Eq_100
  DataType: ui32
  OrigDataType: ui32
T_101: (in (uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ SLICE((uint64) ((word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0):byte]), word32, 0)) : uint64)
  Class: Eq_101
  DataType: uint64
  OrigDataType: uint64
T_102: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ SLICE((uint64) ((word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_103, word32, 0):byte]), word32, 0)), byte, 0) : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_103: (in (uint64) dwLoc0C_103 : uint64)
  Class: Eq_103
  DataType: uint64
  OrigDataType: uint64
T_104: (in SLICE((uint64) dwLoc0C_103, word32, 0) : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in (int64) SLICE((uint64) dwLoc0C_103, word32, 0) : int64)
  Class: Eq_105
  DataType: (ptr64 Eq_105)
  OrigDataType: (ptr64 (struct (601020 T_108 t601020)))
T_106: (in 0x601020<64> : word64)
  Class: Eq_106
  DataType: word64
  OrigDataType: word64
T_107: (in (int64) (word32) (uint64) dwLoc0C_103 + 0x601020<64> : word64)
  Class: Eq_107
  DataType: int64
  OrigDataType: int64
T_108: (in Mem74[(int64) SLICE((uint64) dwLoc0C_103, word32, 0) + 0x601020<64>:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in (word32) Mem74[(int64) SLICE((uint64) dwLoc0C_103, word32, 0) + 0x601020<64>:byte] : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in SLICE((word32) Mem74[(int64) SLICE((uint64) dwLoc0C_103, word32, 0) + 0x601020<64>:byte], byte, 0) : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in (word32) al_34 : word32)
  Class: Eq_111
  DataType: int32
  OrigDataType: int32
T_112: (in 8<32> : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in (uint64) dwLoc0C_103 : uint64)
  Class: Eq_113
  DataType: uint64
  OrigDataType: uint64
T_114: (in SLICE((uint64) dwLoc0C_103, word32, 0) : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in 9<32> : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in (word32) (uint64) dwLoc0C_103 ^ 9<32> : word32)
  Class: Eq_116
  DataType: ui32
  OrigDataType: ui32
T_117: (in (uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>) : uint64)
  Class: Eq_117
  DataType: uint64
  OrigDataType: uint64
T_118: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) : word32)
  Class: Eq_118
  DataType: ui32
  OrigDataType: ui32
T_119: (in 3<32> : word32)
  Class: Eq_119
  DataType: ui32
  OrigDataType: ui32
T_120: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_103 ^ 9<32>) & 3<32> : word32)
  Class: Eq_120
  DataType: ui32
  OrigDataType: ui32
T_121: (in (uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>) : uint64)
  Class: Eq_121
  DataType: uint64
  OrigDataType: uint64
T_122: (in SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0) : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in (uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0) : uint64)
  Class: Eq_123
  DataType: uint64
  OrigDataType: uint64
T_124: (in SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0) : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in 8<32> - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>)))) : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in (uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)) : uint64)
  Class: Eq_126
  DataType: uint64
  OrigDataType: uint64
T_127: (in SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0) : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in (uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0) : uint64)
  Class: Eq_128
  DataType: uint64
  OrigDataType: uint64
T_129: (in SLICE((uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0), byte, 0) : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in (word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8<32> - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>)))))))) : word32)
  Class: Eq_130
  DataType: int32
  OrigDataType: int32
T_131: (in (uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0), byte, 0)) : uint64)
  Class: Eq_131
  DataType: uint64
  OrigDataType: uint64
T_132: (in SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0) : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in (uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0) : uint64)
  Class: Eq_133
  DataType: uint64
  OrigDataType: uint64
T_134: (in SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) : word32)
  Class: Eq_134
  DataType: ui32
  OrigDataType: ui32
T_135: (in (word32) al_34 : word32)
  Class: Eq_135
  DataType: ui32
  OrigDataType: ui32
T_136: (in (uint64) dwLoc0C_103 : uint64)
  Class: Eq_136
  DataType: uint64
  OrigDataType: uint64
T_137: (in SLICE((uint64) dwLoc0C_103, word32, 0) : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in 9<32> : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in (word32) (uint64) dwLoc0C_103 ^ 9<32> : word32)
  Class: Eq_139
  DataType: ui32
  OrigDataType: ui32
T_140: (in (uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>) : uint64)
  Class: Eq_140
  DataType: uint64
  OrigDataType: uint64
T_141: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) : word32)
  Class: Eq_141
  DataType: ui32
  OrigDataType: ui32
T_142: (in 3<32> : word32)
  Class: Eq_142
  DataType: ui32
  OrigDataType: ui32
T_143: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_103 ^ 9<32>) & 3<32> : word32)
  Class: Eq_143
  DataType: ui32
  OrigDataType: ui32
T_144: (in (uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>) : uint64)
  Class: Eq_144
  DataType: uint64
  OrigDataType: uint64
T_145: (in SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0) : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in (uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0) : uint64)
  Class: Eq_146
  DataType: uint64
  OrigDataType: uint64
T_147: (in SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0) : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in (word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>)))) : word32)
  Class: Eq_148
  DataType: ui32
  OrigDataType: ui32
T_149: (in (uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)) : uint64)
  Class: Eq_149
  DataType: uint64
  OrigDataType: uint64
T_150: (in SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)), word32, 0) : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in (uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)), word32, 0) : uint64)
  Class: Eq_151
  DataType: uint64
  OrigDataType: uint64
T_152: (in SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)), word32, 0), word32, 0) : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in (uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)), word32, 0), word32, 0) : uint64)
  Class: Eq_153
  DataType: uint64
  OrigDataType: uint64
T_154: (in SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0) : word32)
  Class: Eq_154
  DataType: ui32
  OrigDataType: ui32
T_155: (in (word32) (uint64) (word32) (uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8<32> - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>)))))))))) : word32)
  Class: Eq_155
  DataType: ui32
  OrigDataType: ui32
T_156: (in (uint64) (SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) | SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0)) : uint64)
  Class: Eq_156
  DataType: uint64
  OrigDataType: uint64
T_157: (in SLICE((uint64) (SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8<32> - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) | SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_103, word32, 0) ^ 9<32>), word32, 0) & 3<32>), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0)), byte, 0) : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in 8<8> : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in (byte) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8<32> - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>))))))))))) + 8<8> : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_160: (in (byte) (word32) ((int64) (word32) (uint64) dwLoc0C_103 + 0x601020<64>) == (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8<32> - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>)))))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_103) ^ 9<32>)) & 3<32>)))))))))))) + 8<8> : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in 0x17<32> : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_162: (in dwLoc0C_103 == 0x17<32> : bool)
  Class: Eq_162
  DataType: bool
  OrigDataType: bool
T_163: (in (word32) (dwLoc0C_103 == 0x17<32>) : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in SEQ(rax_32_32_113, (word32) (dwLoc0C_103 == 0x17<32>)) : word64)
  Class: Eq_74
  DataType: uint64
  OrigDataType: word64
T_165: (in 1<32> : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in dwLoc0C_103 + 1<32> : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_167: (in 0<u64> : uint64)
  Class: Eq_74
  DataType: uint64
  OrigDataType: uint64
T_168: (in SLICE(rax_112, word32, 0) : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_169: (in rsi : (ptr64 Eq_169))
  Class: Eq_169
  DataType: (ptr64 Eq_169)
  OrigDataType: (ptr64 (struct (8 T_177 t0008)))
T_170: (in edi : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in 2<32> : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_172: (in edi == 2<32> : bool)
  Class: Eq_172
  DataType: bool
  OrigDataType: bool
T_173: (in verify : ptr64)
  Class: Eq_173
  DataType: (ptr64 Eq_173)
  OrigDataType: (ptr64 (fn T_178 (T_177)))
T_174: (in signature of verify : void)
  Class: Eq_173
  DataType: (ptr64 Eq_173)
  OrigDataType: 
T_175: (in 8<64> : word64)
  Class: Eq_175
  DataType: word64
  OrigDataType: word64
T_176: (in rsi + 8<64> : word64)
  Class: Eq_176
  DataType: word64
  OrigDataType: word64
T_177: (in Mem12[rsi + 8<64>:word64] : word64)
  Class: Eq_71
  DataType: (ptr64 (arr Eq_96))
  OrigDataType: word64
T_178: (in verify(rsi->ptr0008) : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in (uint32) verify(rsi->ptr0008) : uint32)
  Class: Eq_179
  DataType: uint32
  OrigDataType: uint32
T_180: (in (uint64) (uint32) verify(rsi->ptr0008) : uint64)
  Class: Eq_180
  DataType: uint64
  OrigDataType: uint64
T_181: (in SLICE((uint64) (uint32) verify(rsi->ptr0008), word32, 0) : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in 0<32> : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_183: (in (word32) (uint64) (uint32) verify(rsi->ptr0008) == 0<32> : bool)
  Class: Eq_183
  DataType: bool
  OrigDataType: bool
T_184: (in puts : ptr64)
  Class: Eq_184
  DataType: (ptr64 Eq_184)
  OrigDataType: (ptr64 (fn T_188 (T_187)))
T_185: (in signature of puts : void)
  Class: Eq_184
  DataType: (ptr64 Eq_184)
  OrigDataType: 
T_186: (in s : (ptr64 char))
  Class: Eq_186
  DataType: (ptr64 char)
  OrigDataType: 
T_187: (in 0x4006C8<u64> : uint64)
  Class: Eq_186
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_188: (in puts("You need to enter the secret key!") : int32)
  Class: Eq_188
  DataType: int32
  OrigDataType: int32
T_189: (in puts : ptr64)
  Class: Eq_184
  DataType: (ptr64 Eq_184)
  OrigDataType: (ptr64 (fn T_191 (T_190)))
T_190: (in 0x400718<u64> : uint64)
  Class: Eq_186
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_191: (in puts("I'm sorry, that's the wrong secret key!") : int32)
  Class: Eq_188
  DataType: int32
  OrigDataType: int32
T_192: (in puts : ptr64)
  Class: Eq_184
  DataType: (ptr64 Eq_184)
  OrigDataType: (ptr64 (fn T_194 (T_193)))
T_193: (in 0x4006F0<u64> : uint64)
  Class: Eq_186
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_194: (in puts("Correct! that is the secret key!") : int32)
  Class: Eq_188
  DataType: int32
  OrigDataType: int32
T_195: (in rdx : word64)
  Class: Eq_195
  DataType: word64
  OrigDataType: word64
T_196: (in rsi : word64)
  Class: Eq_196
  DataType: word64
  OrigDataType: word64
T_197: (in edi : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in rdi : word64)
  Class: Eq_198
  DataType: word64
  OrigDataType: word64
T_199: (in SLICE(rdi, word32, 0) : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_200: (in _init : ptr64)
  Class: Eq_200
  DataType: (ptr64 Eq_200)
  OrigDataType: (ptr64 (fn T_202 ()))
T_201: (in signature of _init : void)
  Class: Eq_200
  DataType: (ptr64 Eq_200)
  OrigDataType: 
T_202: (in _init() : void)
  Class: Eq_202
  DataType: void
  OrigDataType: void
T_203: (in rbp_19 : int64)
  Class: Eq_203
  DataType: int64
  OrigDataType: int64
T_204: (in 0000000000600E00 : ptr64)
  Class: Eq_204
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_205: (in 0000000000600DF8 : ptr64)
  Class: Eq_205
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_206: (in 0x600E00<u64> - 0x600DF8<u64> : word64)
  Class: Eq_203
  DataType: int64
  OrigDataType: int64
T_207: (in r13d_72 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in (uint64) edi : uint64)
  Class: Eq_208
  DataType: uint64
  OrigDataType: uint64
T_209: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_210: (in 3<64> : word64)
  Class: Eq_210
  DataType: word64
  OrigDataType: word64
T_211: (in rbp_19 >> 3<64> : word64)
  Class: Eq_211
  DataType: int64
  OrigDataType: int64
T_212: (in 0<64> : word64)
  Class: Eq_211
  DataType: int64
  OrigDataType: word64
T_213: (in rbp_19 >> 3<64> == 0<64> : bool)
  Class: Eq_213
  DataType: bool
  OrigDataType: bool
T_214: (in rbx_36 : Eq_214)
  Class: Eq_214
  DataType: Eq_214
  OrigDataType: word64
T_215: (in 0<u64> : uint64)
  Class: Eq_214
  DataType: uint64
  OrigDataType: uint64
T_216: (in 0000000000600DF8 : ptr64)
  Class: Eq_216
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_226) a0000)))
T_217: (in 8<64> : word64)
  Class: Eq_217
  DataType: ui64
  OrigDataType: ui64
T_218: (in rbx_36 * 8<64> : word64)
  Class: Eq_218
  DataType: ui64
  OrigDataType: ui64
T_219: (in 0x0000000000600DF8<p64>[rbx_36 * 8<64>] : word64)
  Class: Eq_219
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_220: (in 1<64> : word64)
  Class: Eq_220
  DataType: word64
  OrigDataType: word64
T_221: (in rbx_36 + 1<64> : word64)
  Class: Eq_214
  DataType: Eq_214
  OrigDataType: uint64
T_222: (in rbp_19 >> 3<64> : word64)
  Class: Eq_214
  DataType: Eq_214
  OrigDataType: int64
T_223: (in rbx_36 != rbp_19 >> 3<64> : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
T_224:
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (struct 0001 (0 T_96 t0000))
T_225:
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (arr Eq_96)
T_226:
  Class: Eq_226
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_219 t0000))
*/
typedef struct Globals {
	Eq_16 t4005C5;	// 4005C5
	Eq_19 t400620;	// 400620
	Eq_20 t4006B0;	// 4006B0
	char str4006C8[];	// 4006C8
	char str4006F0[];	// 4006F0
	char str400718[];	// 400718
	<anonymous> * a600DF8[];	// 600DF8
	word64 qw600E08;	// 600E08
	byte b601038;	// 601038
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef union Eq_6 {
	int32 u0;
	word64 u1;
} Eq_6;

typedef void (Eq_7)(ptr64);

typedef int32 (Eq_14)( *, Eq_6, char * *,  *,  *,  *, void);

typedef int32 (Eq_16)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_19)();

typedef void (Eq_20)();

typedef void (Eq_28)();

typedef void (Eq_50)();

typedef void (Eq_65)();

typedef struct Eq_96 {	// size: 1 1
	Eq_96 a0000[];	// 0
} Eq_96;

typedef struct Eq_105 {
	byte b601020;	// 601020
} Eq_105;

typedef struct Eq_169 {
	Eq_96 (* ptr0008)[];	// 8
} Eq_169;

typedef word32 (Eq_173)(Eq_96 *[]);

typedef int32 (Eq_184)(char *);

typedef void (Eq_200)();

typedef union Eq_204 {
	int64 u0;
	ptr64 u1;
} Eq_204;

typedef union Eq_205 {
	int64 u0;
	ptr64 u1;
} Eq_205;

typedef union Eq_214 {
	int64 u0;
	uint64 u1;
} Eq_214;

