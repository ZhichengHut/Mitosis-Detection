#ifndef TREE_H
#define TREE_H

#include <math.h>
#include "Node.h"

class Tree{
private:
	int window_width;
	int maxDepth;
	int NodeNum;
	int minLeafSample;
	float minInfoGain;

	int num_1;
	int num_0;

	vector<Mat> sample;
	vector<int> label;
	int *index;
	int count;
	Node **node;

public:
	Tree(vector<Mat> &SP, vector<int> &LB, int *ID, int NUM, int NUM_1, int w_w = 1, int maxD=10, int minL=1, float minInfo=0);
	~Tree();
	void train();
	int predict(Mat test_set);
};

#endif//TREE_H