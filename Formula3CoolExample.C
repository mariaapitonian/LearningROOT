//Pretty example of an implicit 3D function taken from http://polywww.in2p3.fr/activites/physique/glast/workbook/pages/rootPages/rootUsers_Guide_5_08.pdf (page 45)

{
	f1 = new TF3("Function", "sin(x*x+y*y+z*z-36)", -2, 2, -2, 2, -2, 2);
	f1->SetTitle("Cool Implicit Function :D");
	f1->SetLineColor(kGreen-1);
	f1->SetFillColor(kTeal-9);
	f1->SetFillStyle(3490);

	f1->Draw();

}

