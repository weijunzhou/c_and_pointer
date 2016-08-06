/*************************************************************************
	> File Name: 3.h
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 2日 11:02:48
 ************************************************************************/

#include<iostream>
using namespace std;
struct MISC{
	unsigned short opcode;
};
struct REG_SRC{
	unsigned short opcode:7;
	unsigned short src_reg:3;
	unsigned short dst_mode:3;
	unsigned short dst_reg:3;
};
struct BRANCH{
	unsigned char  opcode;
	unsigned char  offset;
};
struct SGL_OP{
	unsigned short opcode:10;
	unsigned short dst_mode:3;
	unsigned short dst_reg:3;
};
struct DBL_OP{
	unsigned short opcode:4;
	unsigned short src_mode:3;
	unsigned short src_reg:3;
	unsigned short dst_mode:3;
	unsigned short dst_reg:3;
};
typedef struct{
	unsigned short addr;
	unsigned short type;
	union{
		struct MISC misc;
		struct REG_SEC reg_src;
		struct BRANCH branch;
		struct DBL_OP dbl_op;
		struct SGL_OP sgl_op;
	}cmd;
};
