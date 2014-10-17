/*
 * Line.cpp
 *
 *  Created on: Oct 17, 2014
 *      Author: KraczekJ
 */

#include "Line.h"

Line::Line(Point a, Point b, Line l) {
	a = this->a;
	b = this->b;
	l = this->NextLine;
}

Line::~Line() {
	// TODO Auto-generated destructor stub
}

