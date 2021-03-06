#include <avr/pgmspace.h>

#ifndef _sevensegmentalphabet_h_
#define _sevensegmentalphabet_h_

/*
 *    a       0
 *   f b     5 1
 *    g       6
 *   e c     4 2
 *    d  dp   3   7
 */

const uint8_t SevenSegmentCharToSeg[] PROGMEM = {
	0b0000000, // 00 - 
	0b0000000, // 01 - 
	0b0000000, // 02 - 
	0b0000000, // 03 - 
	0b0000000, // 04 - 
	0b0000000, // 05 - 
	0b0000000, // 06 - 
	0b0000000, // 07 - 
	0b0000000, // 08 - 
	0b0000000, // 09 - 
	0b0000000, // 0a - 
	0b0000000, // 0b - 
	0b0000000, // 0c - 
	0b0000000, // 0d - 
	0b0000000, // 0e - 
	0b0000000, // 0f - 
	0b0000000, // 10 - 
	0b0000000, // 11 - 
	0b0000000, // 12 - 
	0b0000000, // 13 - 
	0b0000000, // 14 - 
	0b0000000, // 15 - 
	0b0000000, // 16 - 
	0b0000000, // 17 - 
	0b0000000, // 18 - 
	0b0000000, // 19 - 
	0b0000000, // 1a - 
	0b0000000, // 1b - 
	0b0000000, // 1c - 
	0b0000000, // 1d - 
	0b0000000, // 1e - 
	0b0000000, // 1f - 
	0b0000000, // 20 - ' '
	0b0000000, // 21 - 
	0b0000000, // 22 - 
	0b0000000, // 23 - 
	0b0000000, // 24 - 
	0b0000000, // 25 - 
	0b0000000, // 26 - 
	0b0000000, // 27 - 
	0b0000000, // 28 - 
	0b0000000, // 29 - 
	0b0000000, // 2a - 
	0b0000000, // 2b - 
	0b0000000, // 2c - 
	0b0000000, // 2d - 
	0b0000000, // 2e - 
	0b0000000, // 2f - 
	0b1111110, // 30 - 0
	0b0110000, // 31 - 1
	0b1101101, // 32 - 2
	0b1111001, // 33 - 3
	0b0110011, // 34 - 4
	0b1011011, // 35 - 5
	0b1011111, // 36 - 6
	0b1110010, // 37 - 7
	0b1111111, // 38 - 8
	0b1111011, // 39 - 9
	0b0000000, // 3a - 
	0b0000000, // 3b - 
	0b0000000, // 3c - 
	0b0000000, // 3d - 
	0b0000000, // 3e - 
	0b0000000, // 3f - 
	0b0000000, // 40 - 
	0b1110111, // 41 - A
	0b0011111, // 42 - B
	0b1001110, // 43 - C
	0b0111101, // 44 - D
	0b1001111, // 45 - E
	0b1000111, // 46 - F
	0b1011110, // 47 - G
	0b0110111, // 48 - H
	0b0010000, // 49 - I
	0b0111100, // 4a - J
	0b1010111, // 4b - K
	0b0001110, // 4c - L
	0b1010101, // 4d - M
	0b1110110, // 4e - N
	0b0011101, // 4f - O
	0b1100111, // 50 - P
	0b1101011, // 51 - Q
	0b1000110, // 52 - R
	0b1011011, // 53 - S
	0b0001111, // 54 - T
	0b0111110, // 55 - U
	0b0111110, // 56 - V
	0b1011100, // 57 - W
	0b1001001, // 58 - X
	0b0111011, // 59 - Y
	0b1101101, // 5a - Z
	0b0000000, // 5b - 
	0b0000000, // 5c - 
	0b0000000, // 5d - 
	0b0000000, // 5e - 
	0b0000000, // 5f - 
	0b0000000, // 60 - 
	0b1110111, // 61 - a
	0b0011111, // 62 - b
	0b0001101, // 63 - c
	0b0111101, // 64 - d
	0b1001111, // 65 - e
	0b1000111, // 66 - f
	0b1011110, // 67 - g
	0b0010111, // 68 - h
	0b0010000, // 69 - i
	0b0111000, // 6a - j
	0b1010111, // 6b - k
	0b0001110, // 6c - l
	0b1010101, // 6d - m
	0b0010101, // 6e - n
	0b0011101, // 6f - o
	0b1100111, // 70 - p
	0b1101011, // 71 - q
	0b0000101, // 72 - r
	0b1011011, // 73 - s
	0b0001111, // 74 - t
	0b0011100, // 75 - u
	0b0011100, // 76 - v
	0b1011100, // 77 - w
	0b1001001, // 78 - x
	0b0111011, // 79 - y
	0b1101101, // 7a - z
	0b0000000, // 7b - 
	0b0000000, // 7c - 
	0b0000000, // 7d - 
	0b0000000, // 7e - 
	0b0000000  // 7f - 
};

const uint8_t SevenSegmentSegToChar[] PROGMEM = {
	' ', // 0x00
	'?', // 0x01
	'?', // 0x02
	'?', // 0x03
	'?', // 0x04
	'r', // 0x05
	'?', // 0x06
	'?', // 0x07
	'?', // 0x08
	'?', // 0x09
	'?', // 0x0a
	'?', // 0x0b
	'?', // 0x0c
	'c', // 0x0d
	'L', // 0x0e
	'T', // 0x0f
	'I', // 0x10
	'?', // 0x11
	'?', // 0x12
	'?', // 0x13
	'?', // 0x14
	'n', // 0x15
	'?', // 0x16
	'h', // 0x17
	'?', // 0x18
	'?', // 0x19
	'?', // 0x1a
	'?', // 0x1b
	'u', // 0x1c
	'o', // 0x1d
	'?', // 0x1e
	'b', // 0x1f
	'?', // 0x20
	'?', // 0x21
	'?', // 0x22
	'?', // 0x23
	'?', // 0x24
	'?', // 0x25
	'?', // 0x26
	'?', // 0x27
	'?', // 0x28
	'?', // 0x29
	'?', // 0x2a
	'?', // 0x2b
	'?', // 0x2c
	'?', // 0x2d
	'?', // 0x2e
	'?', // 0x2f
	'1', // 0x30
	'?', // 0x31
	'?', // 0x32
	'4', // 0x33
	'?', // 0x34
	'?', // 0x35
	'?', // 0x36
	'H', // 0x37
	'j', // 0x38
	'?', // 0x39
	'?', // 0x3a
	'y', // 0x3b
	'J', // 0x3c
	'd', // 0x3d
	'U', // 0x3e
	'?', // 0x3f
	'?', // 0x40
	'?', // 0x41
	'?', // 0x42
	'?', // 0x43
	'?', // 0x44
	'?', // 0x45
	'R', // 0x46
	'F', // 0x47
	'?', // 0x48
	'x', // 0x49
	'?', // 0x4a
	'?', // 0x4b
	'?', // 0x4c
	'?', // 0x4d
	'C', // 0x4e
	'E', // 0x4f
	'?', // 0x50
	'?', // 0x51
	'?', // 0x52
	'?', // 0x53
	'?', // 0x54
	'm', // 0x55
	'?', // 0x56
	'k', // 0x57
	'?', // 0x58
	'?', // 0x59
	'?', // 0x5a
	'5', // 0x5b
	'w', // 0x5c
	'?', // 0x5d
	'G', // 0x5e
	'6', // 0x5f
	'?', // 0x60
	'?', // 0x61
	'?', // 0x62
	'?', // 0x63
	'?', // 0x64
	'?', // 0x65
	'?', // 0x66
	'P', // 0x67
	'?', // 0x68
	'?', // 0x69
	'?', // 0x6a
	'q', // 0x6b
	'?', // 0x6c
	'2', // 0x6d
	'?', // 0x6e
	'?', // 0x6f
	'7', // 0x70
	'?', // 0x71
	'7', // 0x72
	'?', // 0x73
	'?', // 0x74
	'?', // 0x75
	'N', // 0x76
	'A', // 0x77
	'?', // 0x78
	'3', // 0x79
	'?', // 0x7a
	'9', // 0x7b
	'?', // 0x7c
	'?', // 0x7d
	'0', // 0x7e
	'8', // 0x7f
};

#endif
