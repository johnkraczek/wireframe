/*
 * Line.h
 *
 *  Created on: Oct 17, 2014
 *      Author: KraczekJ
 */

#ifndef LINE_H_
#define LINE_H_

class Line {
public:
	Line(Point, Point, Line);
	virtual ~Line();
	Point a;
	Point b;
	Line NextLine;
};

#endif /* LINE_H_ */
