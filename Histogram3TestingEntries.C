{
	TH1D *h1 = new TH1D("x", "Landau Distribution with 500 Entries;X;Frequency",60,0,15);
	TH1D *h2 = new TH1D("x", "Landau Distribution with 1000 Entries;X;Frequency",60,0,15);
	TH1D *h3 = new TH1D("x", "Landau Distribution with 5000 Entries;X;Frequency",60,0,15);
	TH1D *h4 = new TH1D("x", "Landau Distribution with 1e5 Entries;X;Frequency",60,0,15);
	
	for(int i=0; i<500; i++) { h1->Fill(gRandom->Landau(5, 1.5));}
	for(int j=0; j<1000; j++) { h2->Fill(gRandom->Landau(5, 1.5));}	
	for(int k=0; k<5000; k++) { h3->Fill(gRandom->Landau(5, 1.5));}
	for(int l=0; l<1e5; l++) { h4->Fill(gRandom->Landau(5, 1.5));}

	h1->SetFillStyle(3001);
	h2->SetFillStyle(3001);
	h3->SetFillStyle(3001);
	h4->SetFillStyle(3001);

	TCanvas *c1 = new TCanvas("Hist3_TestingEntries", "Histogram with various entry numbers", 9000, 9000);
	c1->Divide(2,2);

	c1->cd(1);
	h1->Draw();
	h1->SetFillColor(kBlue-10);
	h1->SetLineColor(kBlack);

	c1->cd(2);
	h2->Draw();
	h2->SetFillColor(kBlue-9);
	h2->SetLineColor(kBlack);

	c1->cd(3);
	h3->Draw();
	h3->SetFillColor(kBlue-7);
	h3->SetLineColor(kBlack);

	c1->cd(4);
	h4->Draw();
	h4->SetFillColor(kBlue-2);	
	h4->SetLineColor(kBlack);

}
