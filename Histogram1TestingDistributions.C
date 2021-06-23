{
	TH1D *GausHist = new TH1D("g", "Gaussian Distribution;X;Frequency",50,0,10); //Histogram with doubles. First number = bins, second and third = range (min and max)
	TH1D *PoisHist = new TH1D("p", "Poisson Distribution;X;Frequency",14,0,14);
	TH1D *RndmHist = new TH1D("r", "Random Distribution;X;Frequency",50,0,1); 
	TH1D *LandHist = new TH1D("l", "Landau Distribution;X;Frequency",50,0,14);
	TH1D *UnifHist = new TH1D("u", "Uniform Distribution;X;Frequency",50,0,14);
	TH1D *BinoHist = new TH1D("b", "Binomial Distribution;X;Frequency",14,0,14);
	
	
	
	
	for(int i=0; i<5000; i++) {
		GausHist->Fill(gRandom->Gaus(5, 2));
		PoisHist->Fill(gRandom->Poisson(7.5));
		RndmHist->Fill(gRandom->Rndm());
		LandHist->Fill(gRandom->Landau(5, 1));
		UnifHist->Fill(gRandom->Uniform(14));
		BinoHist->Fill(gRandom->Binomial(14, 0.4));
	}
	
	
	GausHist->SetFillStyle(3001);
	PoisHist->SetFillStyle(3001);
	RndmHist->SetFillStyle(3001);
	LandHist->SetFillStyle(3001);
	UnifHist->SetFillStyle(3001);
	BinoHist->SetFillStyle(3001);
	

	TCanvas *c1 = new TCanvas("HistogramVariousDistributions", "Histogram with various distributions", 9000, 6000);
	c1->Divide(3,2);

	c1->cd(1);
	GausHist->Draw();
	GausHist->SetFillColor(kCyan-9);
	
	c1->cd(2);
	BinoHist->Draw();
	BinoHist->SetFillColor(kBlue-10);

	c1->cd(3);
	PoisHist->Draw();
	PoisHist->SetFillColor(kMagenta-10);

	c1->cd(4);
	LandHist->Draw();
	LandHist->SetFillColor(kGreen-9);

	c1->cd(5);
	RndmHist->Draw();
	RndmHist->SetFillColor(kYellow-9);

	c1->cd(6);
	UnifHist->Draw();
	UnifHist->SetFillColor(kRed-9);

	

}
