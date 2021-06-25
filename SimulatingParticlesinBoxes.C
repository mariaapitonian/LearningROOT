//Modelling the random movement of a particle with a mean free path lamda. When lamda is exceeded, assume that a collision happens and stop movement

{
	int n = 10;
	//double distance = 0;
	double lamda1 = 10;
	double lamda2 = 14;
	double lamda = lamda1; //particles initially start off in area with lamda1 mean free path
	
	double x[n], y[n], z[n], xtemp[n], ytemp[n], ztemp[n], r[n], t;
	double rtemp, thetatemp, phitemp, deltar, xtemp, ytemp, ztemp;

	TGraph2D *graph = new TGraph2D();
	graph->SetPoint(0,x,y,z);


	for(int i=1; i<n; i++) {    //imax (n) particles total
		
		x[i]=0;
		y[i]=0;
		z[i]=0;
		graph->SetPoint(0,x[i],y[i],z[i]);
		


	for(int t=1; t<30; t++) {    //generating tmax (30) movement points for each particle
		
		//Setting appropriate lamda for calculations
		if(y[i]<ybound)   lamda[i]=lamda1;
		else              lamda[i]=lamda2;
		
		//Generating temporary movement details for the t-th movement of the i-th particle
		while(true) {
		
		deltar = gRandom->Uniform(0.5);

		rtemp = r[i] + lamda[i]+sqrt(-2*log(0.5*deltar));
		thetatemp = theta[i] + gRandom->Uniform(3.141593);
		phitemp = phi[i] + gRandom->Uniform(3.141593);
		
		xtemp = rtemp*cos(thetatemp)*sin(phitemp);
		ytemp = rtemp*sin(thetatemp)*cos(phitemp);
		ztemp = rtemp*cos(phitemp);

		//If temporary movement is appropriate, it is accepted. If not, while loop contibues infinitely until appropriate movement is generated
		if(xtemp<xmax) {   
			r[i] = rtemp;
			theta[i] = thetatemp;
			phi[i] = phitemp;
			x[i] = xtemp;
			y[i] = ytemp;
			z[i] = ztemp;
			
			graph->SetPoint(t,x[i],y[i],z[i]);

		}
		}
		//After the while loop ends, lamda is updated according to the particle's latest position, and the next (30 - t) points are generated
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
