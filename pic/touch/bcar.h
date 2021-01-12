const unsigned char bcar[3473] = { 0X00,0X18,0X23,0X00,0X21,0X00,0X00,0X39,
0XF8,0XF8,0XF8,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XF1,0XF1,0XF1,0XF8,
0XF8,0XF8,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF5,0XF5,0XF5,0XF4,0XF4,
0XF4,0XF6,0XF6,0XF6,0XDA,0XDA,0XDA,0XC2,0XC2,0XC2,0XB5,0XB5,0XB5,0XC1,0XC1,0XC1,
0XC4,0XC4,0XC4,0XC2,0XC2,0XC2,0XB8,0XB8,0XB8,0XB5,0XB5,0XB5,0XC9,0XC9,0XC9,0XE8,
0XE8,0XE8,0XF8,0XF8,0XF8,0XF7,0XF7,0XF7,0XF7,0XF7,0XF7,0XF6,0XF6,0XF6,0XF7,0XF7,
0XF7,0XF5,0XF5,0XF5,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,
0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF4,0XF4,0XF4,0XF8,0XF8,0XF8,0XF5,
0XF5,0XF5,0XF9,0XF9,0XF9,0XF3,0XF3,0XF3,0XF6,0XF6,0XF6,0XF1,0XF1,0XF1,0XF5,0XF5,
0XF5,0XF0,0XF0,0XF0,0XEC,0XEC,0XEC,0XC7,0XC7,0XC7,0XB5,0XB5,0XB5,0XB7,0XB7,0XB7,
0XBD,0XBD,0XBD,0XAD,0XAD,0XAD,0X9F,0X9F,0X9F,0X93,0X93,0X93,0X9D,0X9D,0X9D,0XA9,
0XA9,0XA9,0XB9,0XB9,0XB9,0XBF,0XBF,0XBF,0XB2,0XB2,0XB2,0XB3,0XB3,0XB3,0XCB,0XCB,
0XCB,0XE8,0XE8,0XE8,0XFB,0XFB,0XFB,0XF0,0XF0,0XF0,0XFC,0XFC,0XFC,0XF6,0XF6,0XF6,
0XF7,0XF7,0XF7,0XFA,0XFA,0XFA,0XF1,0XF1,0XF1,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,
0XFF,0XFF,0XF8,0XF8,0XF8,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF4,0XF4,
0XF4,0XF6,0XF6,0XF6,0XFD,0XFD,0XFD,0XE8,0XE8,0XE8,0XD2,0XD2,0XD2,0XB2,0XB2,0XB2,
0XAB,0XAB,0XAB,0XA1,0XA1,0XA1,0X6E,0X6E,0X6E,0X46,0X46,0X46,0X2D,0X2D,0X2D,0X24,
0X24,0X24,0X22,0X22,0X22,0X1C,0X1C,0X1C,0X1D,0X1D,0X1D,0X29,0X29,0X29,0X49,0X49,
0X49,0X80,0X80,0X80,0XAF,0XAF,0XAF,0XBF,0XBF,0XBF,0XB4,0XB4,0XB4,0XDD,0XDD,0XDD,
0XEF,0XEF,0XEF,0XFC,0XFC,0XFC,0XF3,0XF3,0XF3,0XED,0XED,0XED,0XF4,0XF4,0XF4,0XFD,
0XFD,0XFD,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF8,0XF8,0XF8,0XEE,0XEE,
0XEE,0XFC,0XFC,0XFC,0XF5,0XF5,0XF5,0XFC,0XFC,0XFC,0XEC,0XEC,0XEC,0XDF,0XDF,0XDF,
0XC2,0XC2,0XC2,0X9E,0X9E,0X9E,0XA7,0XA7,0XA7,0X58,0X58,0X58,0X2A,0X2A,0X2A,0X44,
0X44,0X44,0X6F,0X6F,0X6F,0XA2,0XA2,0XA2,0XBE,0XBE,0XBE,0XCC,0XCC,0XCC,0XC9,0XC9,
0XC9,0XB7,0XB7,0XB7,0X9B,0X9B,0X9B,0X6B,0X6B,0X6B,0X2F,0X2F,0X2F,0X25,0X25,0X25,
0X4E,0X4E,0X4E,0X9C,0X9C,0X9C,0XAA,0XAA,0XAA,0XC9,0XC9,0XC9,0XE2,0XE2,0XE2,0XFA,
0XFA,0XFA,0XFE,0XFE,0XFE,0XF7,0XF7,0XF7,0XF0,0XF0,0XF0,0XF6,0XF6,0XF6,0XF7,0XF7,
0XF7,0XFF,0XFF,0XFF,0XF9,0XF9,0XF9,0XF4,0XF4,0XF4,0XF8,0XF8,0XF8,0XF5,0XF5,0XF5,
0XF0,0XF0,0XF0,0XED,0XED,0XED,0XAF,0XAF,0XAF,0XA2,0XA2,0XA2,0X6B,0X6B,0X6B,0X2D,
0X2D,0X2D,0X4B,0X4B,0X4B,0X9C,0X9C,0X9C,0XDD,0XDD,0XDD,0XFA,0XFA,0XFA,0XF2,0XF2,
0XF2,0XEC,0XEC,0XEC,0XEF,0XEF,0XEF,0XF0,0XF0,0XF0,0XF7,0XF7,0XF7,0XFA,0XFA,0XFA,
0XF1,0XF1,0XF1,0XD4,0XD4,0XD4,0X8F,0X8F,0X8F,0X43,0X43,0X43,0X26,0X26,0X26,0X9A,
0X9A,0X9A,0XB3,0XB3,0XB3,0XBC,0XBC,0XBC,0XE9,0XE9,0XE9,0XF5,0XF5,0XF5,0XF2,0XF2,
0XF2,0XF9,0XF9,0XF9,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF2,0XF2,0XF2,
0XFF,0XFF,0XFF,0XF2,0XF2,0XF2,0XE9,0XE9,0XE9,0XEE,0XEE,0XEE,0XB7,0XB7,0XB7,0XAE,
0XAE,0XAE,0X50,0X50,0X50,0X3D,0X3D,0X3D,0X7F,0X7F,0X7F,0XED,0XED,0XED,0XFC,0XFC,
0XFC,0XF1,0XF1,0XF1,0XF7,0XF7,0XF7,0XD3,0XD3,0XD3,0XA8,0XA8,0XA8,0X9B,0X9B,0X9B,
0XD9,0XD9,0XD9,0XF8,0XF8,0XF8,0XF2,0XF2,0XF2,0XF9,0XF9,0XF9,0XFF,0XFF,0XFF,0XEF,
0XEF,0XEF,0XDC,0XDC,0XDC,0X74,0X74,0X74,0X22,0X22,0X22,0X5F,0X5F,0X5F,0XBB,0XBB,
0XBB,0XBE,0XBE,0XBE,0XE9,0XE9,0XE9,0XF5,0XF5,0XF5,0XF9,0XF9,0XF9,0XF6,0XF6,0XF6,
0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF2,0XF2,0XF2,0XF1,0XF1,0XF1,0XFA,0XFA,0XFA,0XEC,
0XEC,0XEC,0XB6,0XB6,0XB6,0XA4,0XA4,0XA4,0X57,0X57,0X57,0X46,0X46,0X46,0XA1,0XA1,
0XA1,0XF0,0XF0,0XF0,0XF3,0XF3,0XF3,0XF5,0XF5,0XF5,0XFE,0XFE,0XFE,0XEF,0XEF,0XEF,
0XCB,0XCB,0XCB,0X4C,0X4C,0X4C,0X1C,0X1C,0X1C,0X7B,0X7B,0X7B,0XDB,0XDB,0XDB,0XFA,
0XFA,0XFA,0XF1,0XF1,0XF1,0XF1,0XF1,0XF1,0XFA,0XFA,0XFA,0XF8,0XF8,0XF8,0XE8,0XE8,
0XE8,0X89,0X89,0X89,0X21,0X21,0X21,0X65,0X65,0X65,0XBC,0XBC,0XBC,0XC8,0XC8,0XC8,
0XEF,0XEF,0XEF,0XF5,0XF5,0XF5,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF9,
0XF9,0XF9,0XF8,0XF8,0XF8,0XF1,0XF1,0XF1,0XCA,0XCA,0XCA,0XAE,0XAE,0XAE,0X62,0X62,
0X62,0X3D,0X3D,0X3D,0XAE,0XAE,0XAE,0XF2,0XF2,0XF2,0XF2,0XF2,0XF2,0XFA,0XFA,0XFA,
0XF8,0XF8,0XF8,0XF1,0XF1,0XF1,0XF6,0XF6,0XF6,0XDB,0XDB,0XDB,0X66,0X66,0X66,0X0A,
0X0A,0X0A,0X46,0X46,0X46,0X8D,0X8D,0X8D,0XC4,0XC4,0XC4,0XEB,0XEB,0XEB,0XFA,0XFA,
0XFA,0XF7,0XF7,0XF7,0XF5,0XF5,0XF5,0XF8,0XF8,0XF8,0XEB,0XEB,0XEB,0X7D,0X7D,0X7D,
0X37,0X37,0X37,0X8C,0X8C,0X8C,0XAA,0XAA,0XAA,0XE0,0XE0,0XE0,0XF3,0XF3,0XF3,0XF6,
0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF4,0XF4,0XF4,0XF7,0XF7,0XF7,0XE1,0XE1,
0XE1,0XA9,0XA9,0XA9,0XA1,0XA1,0XA1,0X2E,0X2E,0X2E,0X97,0X97,0X97,0XEE,0XEE,0XEE,
0XF5,0XF5,0XF5,0XF8,0XF8,0XF8,0XF5,0XF5,0XF5,0XF2,0XF2,0XF2,0XE9,0XE9,0XE9,0XC6,
0XC6,0XC6,0XA9,0XA9,0XA9,0X53,0X53,0X53,0X03,0X03,0X03,0X07,0X07,0X07,0X16,0X16,
0X16,0X6D,0X6D,0X6D,0XD4,0XD4,0XD4,0XF6,0XF6,0XF6,0XF5,0XF5,0XF5,0XF8,0XF8,0XF8,
0XF6,0XF6,0XF6,0XF2,0XF2,0XF2,0XE5,0XE5,0XE5,0X6B,0X6B,0X6B,0X2E,0X2E,0X2E,0XA7,
0XA7,0XA7,0XB6,0XB6,0XB6,0XEC,0XEC,0XEC,0XF9,0XF9,0XF9,0XF3,0XF3,0XF3,0XFF,0XFF,
0XFF,0XFA,0XFA,0XFA,0XEF,0XEF,0XEF,0XC0,0XC0,0XC0,0XAC,0XAC,0XAC,0X45,0X45,0X45,
0X54,0X54,0X54,0XE7,0XE7,0XE7,0XF2,0XF2,0XF2,0XF5,0XF5,0XF5,0XF5,0XF5,0XF5,0XF5,
0XF5,0XF5,0XF7,0XF7,0XF7,0XDB,0XDB,0XDB,0X6D,0X6D,0X6D,0X19,0X19,0X19,0X03,0X03,
0X03,0X03,0X03,0X03,0X33,0X33,0X33,0X70,0X70,0X70,0XB5,0XB5,0XB5,0XE5,0XE5,0XE5,
0XF8,0XF8,0XF8,0XF3,0XF3,0XF3,0XF5,0XF5,0XF5,0XF3,0XF3,0XF3,0XFF,0XFF,0XFF,0XF3,
0XF3,0XF3,0XC8,0XC8,0XC8,0X48,0X48,0X48,0X67,0X67,0X67,0XB6,0XB6,0XB6,0XCE,0XCE,
0XCE,0XF7,0XF7,0XF7,0XF5,0XF5,0XF5,0XFF,0XFF,0XFF,0XF3,0XF3,0XF3,0XED,0XED,0XED,
0XB4,0XB4,0XB4,0X83,0X83,0X83,0X24,0X24,0X24,0XAB,0XAB,0XAB,0XF4,0XF4,0XF4,0XFE,
0XFE,0XFE,0XFD,0XFD,0XFD,0XF0,0XF0,0XF0,0XF5,0XF5,0XF5,0XEE,0XEE,0XEE,0XDB,0XDB,
0XDB,0X9F,0X9F,0X9F,0X57,0X57,0X57,0X33,0X33,0X33,0X12,0X12,0X12,0X4B,0X4B,0X4B,
0X92,0X92,0X92,0XAD,0XAD,0XAD,0XA7,0XA7,0XA7,0XD1,0XD1,0XD1,0XF4,0XF4,0XF4,0XF3,
0XF3,0XF3,0XF4,0XF4,0XF4,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XF9,0XF9,0XF9,0X8F,0X8F,
0X8F,0X31,0X31,0X31,0XB6,0XB6,0XB6,0XBB,0XBB,0XBB,0XF0,0XF0,0XF0,0XF7,0XF7,0XF7,
0XFF,0XFF,0XFF,0XF7,0XF7,0XF7,0XD0,0XD0,0XD0,0XBC,0XBC,0XBC,0X5D,0X5D,0X5D,0X48,
0X48,0X48,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XF6,0XF6,0XF6,0XF1,0XF1,0XF1,0XF3,0XF3,
0XF3,0XF8,0XF8,0XF8,0XD5,0XD5,0XD5,0XB5,0XB5,0XB5,0XA7,0XA7,0XA7,0X93,0X93,0X93,
0X50,0X50,0X50,0X0E,0X0E,0X0E,0X22,0X22,0X22,0X3E,0X3E,0X3E,0X3E,0X3E,0X3E,0X2D,
0X2D,0X2D,0X4F,0X4F,0X4F,0XB1,0XB1,0XB1,0XF4,0XF4,0XF4,0XFD,0XFD,0XFD,0XEF,0XEF,
0XEF,0XF8,0XF8,0XF8,0XF4,0XF4,0XF4,0XD5,0XD5,0XD5,0X2D,0X2D,0X2D,0X87,0X87,0X87,
0XAF,0XAF,0XAF,0XE4,0XE4,0XE4,0XF8,0XF8,0XF8,0XFF,0XFF,0XFF,0XFA,0XFA,0XFA,0XBF,
0XBF,0XBF,0XB0,0XB0,0XB0,0X3C,0X3C,0X3C,0X87,0X87,0X87,0XF8,0XF8,0XF8,0XFB,0XFB,
0XFB,0XF2,0XF2,0XF2,0XF8,0XF8,0XF8,0XF2,0XF2,0XF2,0XCA,0XCA,0XCA,0XAF,0XAF,0XAF,
0XB0,0XB0,0XB0,0X83,0X83,0X83,0X67,0X67,0X67,0X27,0X27,0X27,0X0A,0X0A,0X0A,0X5F,
0X5F,0X5F,0XA5,0XA5,0XA5,0X92,0X92,0X92,0X3D,0X3D,0X3D,0X01,0X01,0X01,0X69,0X69,
0X69,0XE1,0XE1,0XE1,0XF3,0XF3,0XF3,0XF6,0XF6,0XF6,0XF8,0XF8,0XF8,0XF5,0XF5,0XF5,
0XF0,0XF0,0XF0,0X55,0X55,0X55,0X4A,0X4A,0X4A,0XB1,0XB1,0XB1,0XD5,0XD5,0XD5,0XF7,
0XF7,0XF7,0XFE,0XFE,0XFE,0XF4,0XF4,0XF4,0XBD,0XBD,0XBD,0X9F,0X9F,0X9F,0X23,0X23,
0X23,0XBB,0XBB,0XBB,0XF6,0XF6,0XF6,0XF4,0XF4,0XF4,0XF9,0XF9,0XF9,0XF4,0XF4,0XF4,
0XDF,0XDF,0XDF,0X90,0X90,0X90,0X74,0X74,0X74,0X9F,0X9F,0X9F,0X90,0X90,0X90,0X78,
0X78,0X78,0X46,0X46,0X46,0X0D,0X0D,0X0D,0X4F,0X4F,0X4F,0XBB,0XBB,0XBB,0XC0,0XC0,
0XC0,0X52,0X52,0X52,0X16,0X16,0X16,0X7F,0X7F,0X7F,0XD9,0XD9,0XD9,0XEE,0XEE,0XEE,
0XF9,0XF9,0XF9,0XF4,0XF4,0XF4,0XF7,0XF7,0XF7,0XF5,0XF5,0XF5,0X84,0X84,0X84,0X35,
0X35,0X35,0XB6,0XB6,0XB6,0XC6,0XC6,0XC6,0XF6,0XF6,0XF6,0XFE,0XFE,0XFE,0XF9,0XF9,
0XF9,0XA3,0XA3,0XA3,0X91,0X91,0X91,0X2B,0X2B,0X2B,0XCF,0XCF,0XCF,0XF8,0XF8,0XF8,
0XF3,0XF3,0XF3,0XF6,0XF6,0XF6,0XF9,0XF9,0XF9,0XD6,0XD6,0XD6,0X71,0X71,0X71,0X2F,
0X2F,0X2F,0X64,0X64,0X64,0XA7,0XA7,0XA7,0X81,0X81,0X81,0X38,0X38,0X38,0X09,0X09,
0X09,0X1E,0X1E,0X1E,0X8F,0X8F,0X8F,0XA3,0XA3,0XA3,0X39,0X39,0X39,0X41,0X41,0X41,
0XB2,0XB2,0XB2,0XF0,0XF0,0XF0,0XFC,0XFC,0XFC,0XF8,0XF8,0XF8,0XF5,0XF5,0XF5,0XF5,
0XF5,0XF5,0XF5,0XF5,0XF5,0XA4,0XA4,0XA4,0X2E,0X2E,0X2E,0XAB,0XAB,0XAB,0XBA,0XBA,
0XBA,0XF6,0XF6,0XF6,0XFF,0XFF,0XFF,0XF8,0XF8,0XF8,0X9B,0X9B,0X9B,0X7A,0X7A,0X7A,
0X32,0X32,0X32,0XE2,0XE2,0XE2,0XF7,0XF7,0XF7,0XF4,0XF4,0XF4,0XF8,0XF8,0XF8,0XF5,
0XF5,0XF5,0XF3,0XF3,0XF3,0XA6,0XA6,0XA6,0X3B,0X3B,0X3B,0X45,0X45,0X45,0X95,0X95,
0X95,0X53,0X53,0X53,0X1B,0X1B,0X1B,0X06,0X06,0X06,0X48,0X48,0X48,0XA7,0XA7,0XA7,
0X82,0X82,0X82,0X31,0X31,0X31,0X8F,0X8F,0X8F,0XE3,0XE3,0XE3,0XF6,0XF6,0XF6,0XF8,
0XF8,0XF8,0XF2,0XF2,0XF2,0XF3,0XF3,0XF3,0XFA,0XFA,0XFA,0XF4,0XF4,0XF4,0XC0,0XC0,
0XC0,0X25,0X25,0X25,0XA8,0XA8,0XA8,0XB5,0XB5,0XB5,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,
0XF9,0XF9,0XF9,0X9A,0X9A,0X9A,0X7D,0X7D,0X7D,0X31,0X31,0X31,0XDC,0XDC,0XDC,0XF6,
0XF6,0XF6,0XF8,0XF8,0XF8,0XF3,0XF3,0XF3,0XF3,0XF3,0XF3,0XF7,0XF7,0XF7,0XE5,0XE5,
0XE5,0X87,0X87,0X87,0X43,0X43,0X43,0X96,0X96,0X96,0X74,0X74,0X74,0X20,0X20,0X20,
0X07,0X07,0X07,0X35,0X35,0X35,0X67,0X67,0X67,0X49,0X49,0X49,0X6C,0X6C,0X6C,0XCD,
0XCD,0XCD,0XF2,0XF2,0XF2,0XF4,0XF4,0XF4,0XF7,0XF7,0XF7,0XF7,0XF7,0XF7,0XF4,0XF4,
0XF4,0XFA,0XFA,0XFA,0XF3,0XF3,0XF3,0XBF,0XBF,0XBF,0X27,0X27,0X27,0XA4,0XA4,0XA4,
0XB7,0XB7,0XB7,0XF8,0XF8,0XF8,0XFF,0XFF,0XFF,0XF1,0XF1,0XF1,0XA4,0XA4,0XA4,0X8B,
0X8B,0X8B,0X27,0X27,0X27,0XD6,0XD6,0XD6,0XFE,0XFE,0XFE,0XF0,0XF0,0XF0,0XFA,0XFA,
0XFA,0XFC,0XFC,0XFC,0XF2,0XF2,0XF2,0XF2,0XF2,0XF2,0XB9,0XB9,0XB9,0X4E,0X4E,0X4E,
0X4F,0X4F,0X4F,0X3A,0X3A,0X3A,0X00,0X00,0X00,0X0A,0X0A,0X0A,0X19,0X19,0X19,0X5B,
0X5B,0X5B,0X89,0X89,0X89,0XC5,0XC5,0XC5,0XF1,0XF1,0XF1,0XF3,0XF3,0XF3,0XF7,0XF7,
0XF7,0XF7,0XF7,0XF7,0XF3,0XF3,0XF3,0XF0,0XF0,0XF0,0XF3,0XF3,0XF3,0XFE,0XFE,0XFE,
0XAA,0XAA,0XAA,0X35,0X35,0X35,0XA8,0XA8,0XA8,0XBA,0XBA,0XBA,0XF6,0XF6,0XF6,0XFF,
0XFF,0XFF,0XFB,0XFB,0XFB,0XB5,0XB5,0XB5,0X9F,0X9F,0X9F,0X25,0X25,0X25,0XBD,0XBD,
0XBD,0XF2,0XF2,0XF2,0XF7,0XF7,0XF7,0XF4,0XF4,0XF4,0XF8,0XF8,0XF8,0XF2,0XF2,0XF2,
0XF9,0XF9,0XF9,0XE4,0XE4,0XE4,0X7E,0X7E,0X7E,0X46,0X46,0X46,0X41,0X41,0X41,0X26,
0X26,0X26,0X11,0X11,0X11,0X4F,0X4F,0X4F,0X9E,0X9E,0X9E,0XA9,0XA9,0XA9,0X9F,0X9F,
0X9F,0X96,0X96,0X96,0X94,0X94,0X94,0X9A,0X9A,0X9A,0XBC,0XBC,0XBC,0XEE,0XEE,0XEE,
0XF7,0XF7,0XF7,0XF6,0XF6,0XF6,0XF5,0XF5,0XF5,0X89,0X89,0X89,0X3A,0X3A,0X3A,0XB3,
0XB3,0XB3,0XC3,0XC3,0XC3,0XF5,0XF5,0XF5,0XFE,0XFE,0XFE,0XFB,0XFB,0XFB,0XBC,0XBC,
0XBC,0XB1,0XB1,0XB1,0X30,0X30,0X30,0X93,0X93,0X93,0XF4,0XF4,0XF4,0XFD,0XFD,0XFD,
0XF4,0XF4,0XF4,0XF7,0XF7,0XF7,0XF7,0XF7,0XF7,0XF0,0XF0,0XF0,0XE4,0XE4,0XE4,0XB2,
0XB2,0XB2,0X72,0X72,0X72,0X56,0X56,0X56,0X2D,0X2D,0X2D,0X0B,0X0B,0X0B,0X28,0X28,
0X28,0X3F,0X3F,0X3F,0X32,0X32,0X32,0X2C,0X2C,0X2C,0X28,0X28,0X28,0X29,0X29,0X29,
0X24,0X24,0X24,0X34,0X34,0X34,0XB2,0XB2,0XB2,0XF1,0XF1,0XF1,0XF7,0XF7,0XF7,0XEF,
0XEF,0XEF,0X62,0X62,0X62,0X4A,0X4A,0X4A,0XAB,0XAB,0XAB,0XD0,0XD0,0XD0,0XF5,0XF5,
0XF5,0XFF,0XFF,0XFF,0XF7,0XF7,0XF7,0XD1,0XD1,0XD1,0XBB,0XBB,0XBB,0X55,0X55,0X55,
0X53,0X53,0X53,0XF6,0XF6,0XF6,0XEF,0XEF,0XEF,0XEC,0XEC,0XEC,0XCD,0XCD,0XCD,0XAD,
0XAD,0XAD,0X8A,0X8A,0X8A,0X69,0X69,0X69,0X52,0X52,0X52,0X39,0X39,0X39,0X35,0X35,
0X35,0X12,0X12,0X12,0X0B,0X0B,0X0B,0X42,0X42,0X42,0X70,0X70,0X70,0X73,0X73,0X73,
0X71,0X71,0X71,0X64,0X64,0X64,0X56,0X56,0X56,0X42,0X42,0X42,0X28,0X28,0X28,0X9B,
0X9B,0X9B,0XEA,0XEA,0XEA,0XF1,0XF1,0XF1,0XDC,0XDC,0XDC,0X30,0X30,0X30,0X7B,0X7B,
0X7B,0XA9,0XA9,0XA9,0XE1,0XE1,0XE1,0XF6,0XF6,0XF6,0XFF,0XFF,0XFF,0XF7,0XF7,0XF7,
0XEC,0XEC,0XEC,0XAF,0XAF,0XAF,0X8D,0X8D,0X8D,0X21,0X21,0X21,0XC0,0XC0,0XC0,0XF8,
0XF8,0XF8,0XE2,0XE2,0XE2,0X85,0X85,0X85,0X3B,0X3B,0X3B,0X1C,0X1C,0X1C,0X1C,0X1C,
0X1C,0X2D,0X2D,0X2D,0X51,0X51,0X51,0X79,0X79,0X79,0X54,0X54,0X54,0X17,0X17,0X17,
0X80,0X80,0X80,0XD5,0XD5,0XD5,0XD8,0XD8,0XD8,0XD7,0XD7,0XD7,0XD9,0XD9,0XD9,0XD1,
0XD1,0XD1,0XBC,0XBC,0XBC,0XA9,0XA9,0XA9,0XD7,0XD7,0XD7,0XF2,0XF2,0XF2,0XF3,0XF3,
0XF3,0X9E,0X9E,0X9E,0X22,0X22,0X22,0XA7,0XA7,0XA7,0XBF,0XBF,0XBF,0XEF,0XEF,0XEF,
0XF6,0XF6,0XF6,0XFF,0XFF,0XFF,0XF3,0XF3,0XF3,0XF0,0XF0,0XF0,0XB5,0XB5,0XB5,0XAB,
0XAB,0XAB,0X44,0X44,0X44,0X6C,0X6C,0X6C,0XEE,0XEE,0XEE,0XEC,0XEC,0XEC,0XB8,0XB8,
0XB8,0X74,0X74,0X74,0X6A,0X6A,0X6A,0X90,0X90,0X90,0XB4,0XB4,0XB4,0XD4,0XD4,0XD4,
0XD9,0XD9,0XD9,0X7E,0X7E,0X7E,0X23,0X23,0X23,0X8D,0X8D,0X8D,0XEE,0XEE,0XEE,0XF8,
0XF8,0XF8,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF5,0XF5,0XF5,0XF7,0XF7,0XF7,0XEF,0XEF,
0XEF,0XF9,0XF9,0XF9,0XF3,0XF3,0XF3,0XD2,0XD2,0XD2,0X59,0X59,0X59,0X5F,0X5F,0X5F,
0XB3,0XB3,0XB3,0XD7,0XD7,0XD7,0XF7,0XF7,0XF7,0XF5,0XF5,0XF5,0XFF,0XFF,0XFF,0XF8,
0XF8,0XF8,0XF1,0XF1,0XF1,0XE1,0XE1,0XE1,0XA5,0XA5,0XA5,0X90,0X90,0X90,0X32,0X32,
0X32,0XAC,0XAC,0XAC,0XF2,0XF2,0XF2,0XEF,0XEF,0XEF,0XDD,0XDD,0XDD,0XDB,0XDB,0XDB,
0XEA,0XEA,0XEA,0XF0,0XF0,0XF0,0XF7,0XF7,0XF7,0XF2,0XF2,0XF2,0X93,0X93,0X93,0X24,
0X24,0X24,0X8F,0X8F,0X8F,0XF2,0XF2,0XF2,0XF7,0XF7,0XF7,0XF5,0XF5,0XF5,0XF8,0XF8,
0XF8,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XF8,0XF8,0XF8,0XF4,0XF4,0XF4,0XEE,0XEE,0XEE,
0X8A,0X8A,0X8A,0X30,0X30,0X30,0XA6,0XA6,0XA6,0XB5,0XB5,0XB5,0XE7,0XE7,0XE7,0XFA,
0XFA,0XFA,0XF3,0XF3,0XF3,0XFF,0XFF,0XFF,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF2,0XF2,
0XF2,0XC8,0XC8,0XC8,0XBB,0XBB,0XBB,0X4F,0X4F,0X4F,0X41,0X41,0X41,0XC5,0XC5,0XC5,
0XF6,0XF6,0XF6,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XF4,0XF4,0XF4,0XF9,
0XF9,0XF9,0XF4,0XF4,0XF4,0XA7,0XA7,0XA7,0X37,0X37,0X37,0X9A,0X9A,0X9A,0XF3,0XF3,
0XF3,0XF4,0XF4,0XF4,0XFA,0XFA,0XFA,0XF2,0XF2,0XF2,0XF5,0XF5,0XF5,0XFA,0XFA,0XFA,
0XF8,0XF8,0XF8,0XEE,0XEE,0XEE,0X8E,0X8E,0X8E,0X3B,0X3B,0X3B,0X88,0X88,0X88,0XA2,
0XA2,0XA2,0XDE,0XDE,0XDE,0XF0,0XF0,0XF0,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,
0XFF,0XF3,0XF3,0XF3,0XFA,0XFA,0XFA,0XF8,0XF8,0XF8,0XDC,0XDC,0XDC,0XB3,0XB3,0XB3,
0XA8,0XA8,0XA8,0X2B,0X2B,0X2B,0X53,0X53,0X53,0XC4,0XC4,0XC4,0XF4,0XF4,0XF4,0XF7,
0XF7,0XF7,0XF0,0XF0,0XF0,0XFA,0XFA,0XFA,0XF9,0XF9,0XF9,0XF3,0XF3,0XF3,0XBA,0XBA,
0XBA,0X6C,0X6C,0X6C,0XAE,0XAE,0XAE,0XF9,0XF9,0XF9,0XF8,0XF8,0XF8,0XF3,0XF3,0XF3,
0XF4,0XF4,0XF4,0XFC,0XFC,0XFC,0XEF,0XEF,0XEF,0XEC,0XEC,0XEC,0X9D,0X9D,0X9D,0X38,
0X38,0X38,0X5B,0X5B,0X5B,0XA9,0XA9,0XA9,0XBF,0XBF,0XBF,0XF1,0XF1,0XF1,0XF6,0XF6,
0XF6,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF9,0XF9,0XF9,0XF0,0XF0,0XF0,
0XF4,0XF4,0XF4,0XF4,0XF4,0XF4,0XDE,0XDE,0XDE,0XB6,0XB6,0XB6,0XA6,0XA6,0XA6,0X33,
0X33,0X33,0X3B,0X3B,0X3B,0XA6,0XA6,0XA6,0XED,0XED,0XED,0XFC,0XFC,0XFC,0XF9,0XF9,
0XF9,0XF3,0XF3,0XF3,0XF9,0XF9,0XF9,0XE3,0XE3,0XE3,0XC1,0XC1,0XC1,0XDF,0XDF,0XDF,
0XFD,0XFD,0XFD,0XF2,0XF2,0XF2,0XF9,0XF9,0XF9,0XF7,0XF7,0XF7,0XEE,0XEE,0XEE,0XDF,
0XDF,0XDF,0X82,0X82,0X82,0X32,0X32,0X32,0X64,0X64,0X64,0XAC,0XAC,0XAC,0XBB,0XBB,
0XBB,0XE6,0XE6,0XE6,0XED,0XED,0XED,0XF9,0XF9,0XF9,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,
0XFF,0XFF,0XFF,0XF6,0XF6,0XF6,0XF5,0XF5,0XF5,0XF6,0XF6,0XF6,0XFE,0XFE,0XFE,0XF3,
0XF3,0XF3,0XCC,0XCC,0XCC,0XA9,0XA9,0XA9,0XA6,0XA6,0XA6,0X49,0X49,0X49,0X20,0X20,
0X20,0X7D,0X7D,0X7D,0XD3,0XD3,0XD3,0XEC,0XEC,0XEC,0XFC,0XFC,0XFC,0XF7,0XF7,0XF7,
0XFB,0XFB,0XFB,0XF4,0XF4,0XF4,0XEE,0XEE,0XEE,0XF9,0XF9,0XF9,0XF0,0XF0,0XF0,0XF5,
0XF5,0XF5,0XEC,0XEC,0XEC,0XB1,0XB1,0XB1,0X5C,0X5C,0X5C,0X2F,0X2F,0X2F,0X76,0X76,
0X76,0X9D,0X9D,0X9D,0XB9,0XB9,0XB9,0XE3,0XE3,0XE3,0XF4,0XF4,0XF4,0XFB,0XFB,0XFB,
0XF3,0XF3,0XF3,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF7,0XF7,0XF7,0XF9,
0XF9,0XF9,0XF9,0XF9,0XF9,0XEA,0XEA,0XEA,0XF4,0XF4,0XF4,0XF9,0XF9,0XF9,0XDD,0XDD,
0XDD,0XB4,0XB4,0XB4,0XBF,0XBF,0XBF,0X87,0X87,0X87,0X27,0X27,0X27,0X1E,0X1E,0X1E,
0X55,0X55,0X55,0X93,0X93,0X93,0XCE,0XCE,0XCE,0XDB,0XDB,0XDB,0XE2,0XE2,0XE2,0XE5,
0XE5,0XE5,0XDC,0XDC,0XDC,0XBC,0XBC,0XBC,0X90,0X90,0X90,0X47,0X47,0X47,0X2B,0X2B,
0X2B,0X4D,0X4D,0X4D,0XA0,0XA0,0XA0,0XA7,0XA7,0XA7,0XD1,0XD1,0XD1,0XE5,0XE5,0XE5,
0XF5,0XF5,0XF5,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XF5,0XF5,0XF5,0XF6,0XF6,0XF6,0XF7,
0XF7,0XF7,0XFF,0XFF,0XFF,0XF5,0XF5,0XF5,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XFF,0XFF,
0XFF,0XF6,0XF6,0XF6,0XFA,0XFA,0XFA,0XED,0XED,0XED,0XE5,0XE5,0XE5,0XBF,0XBF,0XBF,
0XB8,0XB8,0XB8,0XA8,0XA8,0XA8,0X75,0X75,0X75,0X43,0X43,0X43,0X35,0X35,0X35,0X2B,
0X2B,0X2B,0X37,0X37,0X37,0X33,0X33,0X33,0X2E,0X2E,0X2E,0X2F,0X2F,0X2F,0X30,0X30,
0X30,0X3F,0X3F,0X3F,0X59,0X59,0X59,0X80,0X80,0X80,0XAA,0XAA,0XAA,0XB3,0XB3,0XB3,
0XCD,0XCD,0XCD,0XE3,0XE3,0XE3,0XF1,0XF1,0XF1,0XF4,0XF4,0XF4,0XF6,0XF6,0XF6,0XFA,
0XFA,0XFA,0XF6,0XF6,0XF6,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF8,0XF8,
0XF8,0XF9,0XF9,0XF9,0XF1,0XF1,0XF1,0XF7,0XF7,0XF7,0XF6,0XF6,0XF6,0XF1,0XF1,0XF1,
0XF9,0XF9,0XF9,0XF2,0XF2,0XF2,0XFA,0XFA,0XFA,0XDB,0XDB,0XDB,0XBE,0XBE,0XBE,0XBA,
0XBA,0XBA,0XBB,0XBB,0XBB,0XBA,0XBA,0XBA,0XA2,0XA2,0XA2,0X9E,0X9E,0X9E,0X8F,0X8F,
0X8F,0X9B,0X9B,0X9B,0XA4,0XA4,0XA4,0XA8,0XA8,0XA8,0XB3,0XB3,0XB3,0XB4,0XB4,0XB4,
0XB4,0XB4,0XB4,0XCB,0XCB,0XCB,0XDE,0XDE,0XDE,0XFA,0XFA,0XFA,0XF4,0XF4,0XF4,0XF8,
0XF8,0XF8,0XFE,0XFE,0XFE,0XF4,0XF4,0XF4,0XF2,0XF2,0XF2,0XF7,0XF7,0XF7,0XF6,0XF6,
0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,0XF6,0XF6,0XF6,0XF5,0XF5,0XF5,0XF6,0XF6,0XF6,
0XF7,0XF7,0XF7,0XF5,0XF5,0XF5,0XF4,0XF4,0XF4,0XFD,0XFD,0XFD,0XF3,0XF3,0XF3,0XF2,
0XF2,0XF2,0XFC,0XFC,0XFC,0XEE,0XEE,0XEE,0XE8,0XE8,0XE8,0XCD,0XCD,0XCD,0XC0,0XC0,
0XC0,0XBA,0XBA,0XBA,0XA9,0XA9,0XA9,0XA4,0XA4,0XA4,0XA1,0XA1,0XA1,0XAB,0XAB,0XAB,
0XB3,0XB3,0XB3,0XBC,0XBC,0XBC,0XD7,0XD7,0XD7,0XE9,0XE9,0XE9,0XF0,0XF0,0XF0,0XF8,
0XF8,0XF8,0XF1,0XF1,0XF1,0XFC,0XFC,0XFC,0XF3,0XF3,0XF3,0XF0,0XF0,0XF0,0XF7,0XF7,
0XF7,0XFB,0XFB,0XFB,0XF5,0XF5,0XF5,0XF6,0XF6,0XF6,0XF7,0XF7,0XF7,0XFF,0XFF,0XFF,
0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,
0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,
0XFB,0XFB,0XFB,0XFB,0XFC,0XFC,0XFC,0XFC,0XFC,0XFC,0XFA,0XFA,0XFA,0XF7,0XF7,0XF7,
0XF1,0XF1,0XF1,0XF3,0XF3,0XF3,0XF7,0XF7,0XF7,0XFB,0XFB,0XFB,0XFC,0XFC,0XFC,0XFB,
0XFB,0XFB,0XFA,0XFA,0XFA,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,
0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,0XFB,
0XFB,0XFB,0XFB,0XFC,0XFC,0XFC,0XFE,0XFE,0XFE,};
