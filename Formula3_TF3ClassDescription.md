TF3 Function Class

TF3 (const char [name],[formula], Double_t [xmin],[xmax],[ymin],[ymax],[zmin],[zmax], Option_t [option])
- 3-Dim Function Class
- Implicit function with x, y, z input. Sets [formula] equal to zero and plots all included points.

Example:
	TF3 ("Sample function", "z*y*cos(x*y)", -3, 3, -3, 3, -10, 10);

PLOTTING:

