#include <math.h>

{
	double x,y,m,n;

	TH2D *hist = new TH2D("XY", "Sample Gaussian Distribution",30, 3, 8, 30, 3, 8);

	for(int i=0; i<1e6; i++) {
		x = gRandom->Uniform(0.5); //In order for the sqrt in the below function to be defined, the ln part has to be negative. Therefore, 2x<1, x<0.5
		y = gRandom->Uniform(0.5); 
		m = 4+sqrt(-2*log(2*x)); //Inverse of Gaussian function 0.5*exp(-(x-4)^2/2)
		n = 4+sqrt(-2*log(2*y));
		hist->Fill(m, n);
	}
	
	TCanvas *c1 = new TCanvas("Gaussian", "Random Gaussian distribution", 1200, 1200);
	c1->cd();
	hist->Draw("LEGO2");

}
