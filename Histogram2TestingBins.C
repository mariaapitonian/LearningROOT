{
	TH1D *h1 = new TH1D("x", "Landau Distribution Using 15 Bins;X;Frequency",15,0,15);
	TH1D *h2 = new TH1D("x", "Landau Distribution Using 50 Bins;X;Frequency",50,0,15);
	TH1D *h3 = new TH1D("x", "Landau Distribution Using 200 Bins;X;Frequency",200,0,15);
	
	for(int i=0; i<5000; i++) {
		h1->Fill(gRandom->Landau(7, 1.5));
		h2->Fill(gRandom->Landau(7, 1.5));
		h3->Fill(gRandom->Landau(7, 1.5));
	}
	
	h1->SetFillStyle(3001);
	h2->SetFillStyle(3001);
	h3->SetFillStyle(3001);

	h1->SetTitleSize(50);
	h2->SetTitleSize(25);
	h3->SetTitleSize(25);
	
	TCanvas *c1 = new TCanvas("Hist2_TestingBins", "Histogram with various bin numbers", 9000, 3000);
	c1->Divide(3,1);

	c1->cd(1);
	h1->Draw();
	h1->SetFillColor(kPink-9);
	h1->SetLineColor(kBlack);

	c1->cd(2);
	h2->Draw();
	h2->SetFillColor(kViolet-5);
	h2->SetLineColor(kBlack);

	c1->cd(3);
	h3->Draw();
	h3->SetFillColor(kBlue-3);	
	h3->SetLineColor(kBlack);


}
