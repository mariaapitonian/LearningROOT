TF12 Function Class

TF12 (const char [name], TF2 [function f2], Double_t [xy], Option_t ["x/y"])
- Allows us to declare/plot projections of TF2 (2-Dim function) along x or y
- Has same behavior as TF1
- In the above structure, Double_t is the value of x (if projection alon y) or the value of y (if projection along x)
- May require prior declaration of TF2

Example:
	TF2 *f2 = new TF2("f2","sin(x)*sin(y)/(x*y)",0,5,0,5);
	TF12 *f12 = new TF12("f12",f2,0.1,"y");
