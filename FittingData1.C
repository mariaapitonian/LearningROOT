//Fitting data with Gaussian random noise

{	
	//Generating Data
	TGraph *g = new TGraph();
	double x,y;
	
	for(int i=0; i<10; i++) {
		x = 0.5*i + 1;
		y = 4*x + 3 + gRandom->Gaus(0, 1);
		g->SetPoint(i, x, y);
	}

	//Finding best fit line
	TF1 *BestFit = new TF1("BestFit", "[0]*x+[1]", 1, 6);
	g->Fit(BestFit);

	//Plotting g
	g->SetTitle("Fitting line with Gaussian noise");
	g->SetMarkerStyle(22);
	g->SetMarkerSize(2);

	TCanvas *c1 = new TCanvas("FittingDataGaussian", "FittingDataGaussian", 1800, 900);
	c1->SetFillStyle(3001);
	c1->SetFillColor(kRed-10);
	c1->cd();
	g->Draw("AP");


}

