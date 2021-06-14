//Example of a TF3 (Implicit three dimensional) function plotted next to the explicit version of the same function. Meant to explore how TF3 works.
{
	f1 = new TF3("Sample function implicit", "z+y*cos(x*y)", 3, -3, 3, -3, -10, 10);
	f2 = new TF2("Sample function explicit", "-y*cos(x*y)", 3, -3, 3, -3);

	c1 = new TCanvas("Explicit and Implicit Forms", "Sample", 1600, 800);
	c1->Divide(2,1);

	c1->cd(1);
	f1->Draw();

	c1->cd(2);
	f2->Draw("surf1");

}
