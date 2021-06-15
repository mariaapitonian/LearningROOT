//Using a formula and a for loop to generate data, then plotting it

{
	g1 = new TGraph();
	g1->SetMarkerStyle(8);
	g1->SetMarkerSize(1.5);
	g1->SetMarkerColor(kRed+1);
	g1->SetLineWidth(2);
	g1->SetLineColor(kRed);
	g1->SetTitle("Using the Formula x^2+3x-7");
	for(int i=0; i<10; i++) g1->SetPoint(i, i, i*i+3*i-7); //Generates 10 points on the line with the given formula

	g2 = new TGraph();
	g2->SetMarkerStyle(22);
	g2->SetMarkerSize(1);
	g2->SetMarkerColor(kGreen+3);
	g2->SetTitle("Random Generation Centered at (5,0)");
	for(int j=0; j<100; j++) g2->SetPoint(j, gRandom->Gaus(5, 0.5), gRandom->Gaus(0, 1.5)); //Generates random values centered at (5, 0). STDEV(x)=0.5, STDEV(y)=1.5
	
	c1 = new TCanvas("c1", "UsingLoop", 1600, 800);
	c1->Divide(2,1);
	c1->cd(1);
	g1->Draw("ACP"); //Curve
	c1->cd(2);
	g2->Draw("AP"); //Curve/Line not drawn
}
