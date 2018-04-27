#pragma once
#ifndef __MATCH_TYPE_H__
#define __MATCH_TYPE_H__

// ƥ�������صĽṹ��
//
// isMatch	�Ƿ�ƥ��ɹ�
// x		ƥ�䵽��ͼƬλ�õ�X����
// y		ƥ�䵽��ͼƬλ�õ�Y����
// width	ƥ�䵽��ͼƬ�Ŀ��
// height	ƥ�䵽��ͼƬ�ĸ߶�
typedef struct MatchResult
{
	char *source;
	char *target;
	bool isMatch;
	int x;
	int y;
	int width;
	int height;
};

#endif // __MATCH_TYPE_H__

