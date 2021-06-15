TGraph Class 

1. Exporting data from a .txt file and plotting it
	g1 = new TGraph("name.txt") or ("name.csv");

2. Using formula
	for(int i=0, i<10, i++) {
		g1->SetPoint(i, i, i*i+4*i-7);
	}
	g1->Draw("ACP");

3. Using a random number generator
	


Some features:

g1->SetPoint(x, y);
	Adds a point to g1
g1->MarkerStyle();
g1->MarkerColor();
g1->MarkerSize();
g1->LineColor();
g1->LineWidth();

Drawing the line:

A = Auto adjustment of range
C = Curve fit
L = Linear fit
P = Points
