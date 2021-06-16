//Generating 2D histogram made of doubles

{
	TH2D *hist = new TH2D("XY", "Sample Two Dimensional Histogram", 10, -3, 3, 10, -3, 3);

	TH1D *h1 = new TH1D("X", "X values", 8, -3, 3);
	TH1D *h2 = new TH1D("Y", "Y values", 8, -3, 3);
	
	for(int i=0;i<1000;i++) {
		h1->Fill(gRandom->Gaus(0,1));
	       	h2->Fill(gRandom->Gaus(1,1));
		hist->Fill(gRandom->Gaus(0,1), gRandom->Gaus(0,1), 1);
	}

	//hist->Add(h1, h2, 1, 1);
	hist->Draw("HIST");
}
