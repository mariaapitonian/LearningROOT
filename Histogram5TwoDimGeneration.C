//Generating 2D histogram made of doubles

{
	TH2D *hist = new TH2D("XY", "Sample Two Dimensional Histogram", 10, -3, 3, 10, -3, 3);

	for(int i=0;i<1000;i++) {
		hist->Fill(gRandom->Gaus(0,1), gRandom->Gaus(0,1), 1);
	}

	TCanvas *c1 = new TCanvas("Hist5_2DHistograms", "3D Histogram Representations", 1800,1800);
	c1->Divide(2,2);
	c1->cd(1);
	hist->Draw("CONT Z");
	c1->cd(2);
	hist->Draw("E");	
	c1->cd(3);
	hist->Draw("LEGO2");
	c1->cd(4);
	hist->Draw("BOX"); //("LEGO3");

}
