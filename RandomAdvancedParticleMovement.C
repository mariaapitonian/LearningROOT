//Modelling the random movement of a particle with a mean free path lamda. When lamda is exceeded, assume that a collision happens and stop movement

{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	//double distance = 0;
	double lamda = 10;
	double r, theta, phi, deltar;

	TGraph2D *graph = new TGraph2D();
	graph->SetPoint(0,x,y,z);

	for(int t=1; t<30; t++) {
	//while(true) {
	//	t+=1;
		deltar = gRandom->Uniform(0.5);
		
		r += lamda+sqrt(-2*log(0.5*deltar));
		theta += gRandom->Uniform(3.141593);
		phi += gRandom->Uniform(3.141593);
		x=r*cos(theta)*sin(phi);
		y=r*sin(theta)*cos(phi);
		z=r*cos(phi);

		//distance+=sqrt(totalx*totalx+totaly*totaly+totalz*totalz); //module of displacement vector
	
		//if(distance<lamda) {
		graph->SetPoint(t,x,y,z);
		//}
		//else { break; } //once mean free path is reached, stop movement
	}

	graph->Draw("PCOL Z LINE");
	graph->SetMarkerStyle(22);
	graph->SetMarkerSize(2);
	//graph->SetMarkerColor(kBlue+2);
	graph->SetLineColor(kBlack);
	graph->SetTitle("Random Particle Movement given lamda=10; X displacement; Y displacement; Z displacement");
	graph->GetXaxis()->SetTitleSize(0.04);
	graph->GetYaxis()->SetTitleSize(0.04);
	graph->GetZaxis()->SetTitleSize(0.04);
	graph->GetXaxis()->SetLabelSize(0.035);
	graph->GetYaxis()->SetLabelSize(0.035);
	graph->GetZaxis()->SetLabelSize(0.035);
	
	graph->GetXaxis()->SetTitleOffset(1.7);
	graph->GetYaxis()->SetTitleOffset(1.7);
	graph->GetZaxis()->SetTitleOffset(1.3);

	gPad->SetLeftMargin(0.12);
	gPad->SetRightMargin(0.12);
//	gPad->SetTopMargin(0.12);
	gPad->SetBottomMargin(0.14);
}
