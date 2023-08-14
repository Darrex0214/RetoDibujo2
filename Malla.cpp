#include "Malla.h"

Malla::Malla() {};

void Malla::DibujarMalla(float x, float y, float z)
{
	glPushMatrix();
	glTranslated(x, y, z);
	glBegin(GL_TRIANGLES);
	glVertex3f(1.5, 0, 0);
	glVertex3f(0, 1.5, 0);
	glVertex3f(-1.5, 0, 0);

	glEnd();

	glPopMatrix();
};
