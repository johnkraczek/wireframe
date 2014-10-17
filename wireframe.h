/*
 * wireframe.h
 *
 *  Created on: Oct 17, 2014
 *      Author: KraczekJ
 */

#ifndef WIREFRAME_H_
#define WIREFRAME_H_

#include <iostream>
#include <fstream>

class wireframe {
public:
	wireframe();
	virtual ~wireframe();

	//basic math
	double PI = 3.14159265359;

	// box or cube setup
	int width = 50;
	int height = 50;
	int depth = 50;
	int points = 5;

	// wireframe info
	int w_height;

	//printer info
	double nozzle_d = .4;
	double filament_d = 1.75;
	int bedWidth = 200;
	int bedHeight = 160;

	// first layer
	int rotate = 45;
	double fill_layer_height = .35;
	double
	// Extrusion Width
	double ext_width = nozzle_d;
	double fill_width = nozzle_d;
	double extrude_volume = (nozzle_d/2)^2 * PI;
	double fill_volume = (fill_width-fill_layer_height)*fill_layer_height+PI*(fill_layer_height/2)^2;
	double filament_volume = (filament_d/2)^2 * PI;
	//final ratios
	double extrude_ratio = extrude_volume/filament_volume;
	double extrude_fill_ratio = fill_volume/filament_volume;

	void first_layer();
};
#endif /* WIREFRAME_H_ */

