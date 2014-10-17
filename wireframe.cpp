/*
 * wireframe.cpp
 *
 *  Created on: Oct 17, 2014
 *      Author: KraczekJ
 */

#include "wireframe.h"
using namespace std;

wireframe::wireframe() {
  ofstream wf_file;
  wf_file.open ("wireframe.g");
  wf_file << "Writing this to a file.\n";
  wf_file.close();
  return;
}

wireframe::~wireframe() {

}

void wireframe::first_layer(){


}

int main() {

	wireframe();

	return 0;
}
