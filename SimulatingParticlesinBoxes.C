//Note: need to try defining double array, then, at the end, attaching arrays to a TGraph2D each


//Modelling the random movement of a particle with a mean free path lamda. When lamda is exceeded, assume that a collision happens and stop movement

{
	int n = 10;
	//double distance = 0;
	double lamda1 = 10;
	double lamda2 = 14;
	double lamda[10]; //particles initially start off in area with lamda1 mean free path
	double xmax = 10;
	double ybound = 3;
	
	double x[10]; //y[n], z[n], r[n], theta[n], phi[n];
	double y[10];	
	double z[10];	
	double r[10];	
	double theta[10];	
	double phi[10];
	
	double rtemp, thetatemp, phitemp, deltar,random, xtemp, ytemp, ztemp;
 	
	TMultiGraph *G = new TMultiGraph();
	TGraph2D *p[10];
	for(int j=1;j<(n+1);j++){
		p[j] = new TGraph2D();
	}





	for(int i=1; i<n; i++) {    //imax (n) particles total
		x[i]=0;
		y[i]=0;
		z[i]=0;
		theta[i]=0;
		phi[i]=0;
		r[i]=0;
		p[i]->SetPoint(0,x[i],y[i],z[i]);
		


	for(int t=1; t<8; t++) {    //generating tmax (30) movement points for each particle
		
		//Setting appropriate lamda for calculations
		//if((y[i]) < ybound) {   
		lamda[i]=lamda1;
		//}
		//else              lamda[i]=lamda2;
		
		//Generating temporary movement details for the t-th movement of the i-th particle
		//while(true) {
		random = 1; //gRandom->Uniform(0.5);
		deltar = sqrt(-2*log(0.5*random));
		rtemp = r[i] + lamda[i] + deltar;
		thetatemp = theta[i] + gRandom->Uniform(3.141593);
		phitemp = phi[i] + gRandom->Uniform(3.141593);
		
		xtemp = rtemp*cos(thetatemp)*sin(phitemp);
		ytemp = rtemp*sin(thetatemp)*sin(phitemp);
		ztemp = rtemp*cos(phitemp);

		//If temporary movement is appropriate, it is accepted. If not, while loop contibues infinitely until appropriate movement is generated
//		if(xtemp<xmax) {   
			r[i] = rtemp;
			theta[i] = thetatemp;
			phi[i] = phitemp;
			x[i] = xtemp;
			y[i] = ytemp;
			z[i] = ztemp;
			
			p[i]->SetPoint(t,x[i],y[i],z[i]);
//			break;
//
//		}
//		}
		//After the while loop ends, lamda is updated according to the particle's latest position, and the next (30 - t) points are generated
	}
	
	}

	p[]->Draw("P LINE");
	p[]->SetMarkerColor(1);
	p[]->SetMarkerSize(1);
	
//	for(int k=2;k<(n+1);k++) {
//		p[k]->SetLineColor(k);
///		p[k]->SetMarkerColor(k);
//		p[k]->SetMarkerSize(1);
//		p[k]->Draw("LINE SAME");//G->Add(p[k]);
//	}

	//G->SetTitle("Random Particle Movement given lamda=10; X displacement; Y displacement; Z displacement");
	/*G->GetXaxis()->SetTitleSize(0.04);
	G->GetYaxis()->SetTitleSize(0.04);
	G->GetZaxis()->SetTitleSize(0.04);
	G->GetXaxis()->SetLabelSize(0.035);
	G->GetYaxis()->SetLabelSize(0.035);
	G->GetZaxis()->SetLabelSize(0.035);
	
	G->GetXaxis()->SetTitleOffset(1.7);
	G->GetYaxis()->SetTitleOffset(1.7);
	G->GetZaxis()->SetTitleOffset(1.3);
	
	gPad->SetLeftMargin(0.12);
	gPad->SetRightMargin(0.12);
	//gPad->SetTopMargin(0.12);
	gPad->SetBottomMargin(0.14);
	*/
}
