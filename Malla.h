#pragma once
#include "Malla.h"
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Malla
{
public:
	Malla();
	void DibujarMalla(float x, float y, float z);
	~Malla() {};
};

