//This program attempts to get a probability distribution of the sums you get when rolling two dice. This may be compared with the probability distribution of one die.

{
	//Rolling one die
	int d1, d2;
	TH1I *singular = new TH1I("One Die", "Rolling Singular Die", 6, 0.5, 6.5);
	TH1I *sum = new TH1I("Two Dice", "Sum of Rolling Two Dice", 11, 1.5, 12.5);
	
	
	singular->SetMinimum(0); //makes sure y-axis starts at 0 (no bias)
	singular->SetBarWidth(0.95); //adds gaps between bars (size=.05 of bar)
	singular->SetBarOffset(0); //centers each bar to its corresponding number on the number line. A positive offset would shift right, negative shift left
	singular->SetFillStyle(3001);	
	singular->SetFillColor(kYellow);
	singular->SetStats(1);
	gStyle->SetOptStat(111111); //the last two lines allow stats like overflow and underflow to be added to legend. Here you will see that both of these are 7, since a clear maximum value was given to the number generator.

	sum->SetMinimum(0);
	sum->SetBarWidth(0.95);
	sum->SetBarOffset(0); 
	sum->SetFillStyle(3001);
	sum->SetFillColor(kYellow);
	sum->SetStats(1);
	gStyle->SetOptStat(111111);

	for(int i=0;i<5000;i++) {
		d1 = gRandom->Integer(6)+1;
		d2 = gRandom->Integer(6)+1;
		singular->Fill(d1);
		sum->Fill((d1+d2));
	}
	
	TCanvas *c1 = new TCanvas("Histogram4_RollingDice", "Simulating Dice Probabilities", 1800, 900);
	c1->Divide(2,1);
	c1->cd(1);
	singular->Draw("w bar1"); //Draws bar option (adds spaces)
	c1->cd(2);
	sum->Draw("w bar1");

}
