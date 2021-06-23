TF2 Function Class

TF2 (const char [name],[formula], Double_t [xmin],[xmax],[ymin],[ymax], Option_t [option])
- 2-Dim function class in ROOT
- Has parameters x,y and is defined in the xmin, xmax, ymin, ymax territory


Example:
	TF2 *f2 = new TF2("f2","sin(x)*sin(y)/(x*y)",0,5,0,5);



PLOTTING:

Simply saying f2->Draw(); gives us a contour plot of the 3D function

On the canvas, right click + set draw option gives us the possibility to change this. 

Below are some viewing/plotting options for TF2 objects
	1. "surf1" gives us a rotatable 3 dimensional view of the function.
	2. "colz" gives a colored top view, where the hotness/coolness of z hows the rises and falls on the z-axis. A color-scale on the side gives the values of z for each color
	3. Right-click options like "front", "side", "top" give us rotation options.
	4. View -> View with OpenGL gives us the ROOT GL viewer for the 3D plot
	5. View -> Event status bar allows us to glide the mouse over certain spots on the plot and see the x, y, z values (may require top view)

For all plotting options, see https://root.cern/doc/master/classTHistPainter.html#HP01c




