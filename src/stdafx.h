// stdafx.h : �i�b�����Y�ɤ��]�t�зǪ��t�� Include �ɡA
// �άO�g�`�ϥΫo�ܤ��ܧ�
// �M�ױM�� Include �ɮ�
//

#pragma once

// define _NO_CRT_STDIO_INLINE 1 and link legacy_stdio_definitions.lib to workaround clang/c2 build fail
#define _NO_CRT_STDIO_INLINE 1

#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �q Windows ���Y�ư����`�ϥΪ�����
// Windows ���Y��:
#include <windows.h>

// C RunTime ���Y��
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <iostream>

// TODO:  �b���Ѧұz���{���һݭn����L���Y

#include <GL/glew.h>
#include <GL/glut.h>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/video/video.hpp>

#define _USE_MATH_DEFINES // for C
#include <math.h>
