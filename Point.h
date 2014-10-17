/*
 * Point.h
 *
 *  Created on: Oct 17, 2014
 *      Author: KraczekJ
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
public:
	Point(int, int, int);
	virtual ~Point();
	int x;
	int y;
	int z;
};

#endif /* POINT_H_ */
