//Note: need to try defining double array, then, at the end, attaching arrays to a TGraph2D each


//Modelling the random movement of a particle with a mean free path lamda. When lamda is exceeded, assume that a collision happens and stop movement
#include <math.h>
{
	int n = 10;
	//double distance = 0;
	double lamda1 = 10;
	double lamda2 = 14;
	double lamda[10]; //particles initially start off in area with lamda1 mean free path
	double xmax = 10;
	double xmin = -10;
	double ymax = 10;
	double ymin = -10;
	double zmax = 10;
	double zmin = -2;

	double ybound = 3;
	
	double x[10][5]; //y[n], z[n], r[n], theta[n], phi[n];
	double y[10][5];	
	double z[10][5];	
	double r[10];	
	double theta[10];	
	double phi[10];
	
	double rtemp, thetatemp, phitemp, deltar,random, xtemp, ytemp, ztemp;
 	
	TMultiGraph *G = new TMultiGraph();
	TGraph2D *p1 = new TGraph2D;
	TGraph2D *p2 = new TGraph2D;
	TGraph2D *p3 = new TGraph2D;
	TGraph2D *p4 = new TGraph2D;
	TGraph2D *p5 = new TGraph2D;
	TGraph2D *p6 = new TGraph2D;
	TGraph2D *p7 = new TGraph2D;
	TGraph2D *p8 = new TGraph2D;
	TGraph2D *p9 = new TGraph2D;
	TGraph2D *p10 = new TGraph2D;
	
	//for(int j=1;j<(n+1);j++){
	//	p[j] = new TGraph2D();
	//}





	for(int i=0; i<n; i++) {    //imax (n) particles total
		x[i][0]=0;
		y[i][0]=0;
		z[i][0]=0;
		theta[i]=0;
		phi[i]=0;
		r[i]=0;
		//p[i]->SetPoint(0,x[i],y[i],z[i]);
		


	for(int t=1; t<5; t++) {    //generating tmax (30) movement points for each particle
		
		//Setting appropriate lamda for calculations
		if((y[i][t]) < ybound) {   
		lamda[i]=lamda1;
		}
		else              lamda[i]=lamda2;
		
		//Generating temporary movement details for the t-th movement of the i-th particle
//		while(true) {
		random = gRandom->Uniform(0.5);
		deltar = sqrt(-2*log(0.5*random));
		rtemp = r[i] + lamda[i] + deltar;
		thetatemp = theta[i] + gRandom->Uniform(3.141593);
		phitemp = phi[i] + gRandom->Uniform(3.141593);
		
		xtemp = rtemp*cos(thetatemp)*sin(phitemp);
		ytemp = rtemp*sin(thetatemp)*sin(phitemp);
		ztemp = rtemp*cos(phitemp);

		//If temporary movement is appropriate, it is accepted. If not, while loop contibues infinitely until appropriate movement is generated
		//if(xtemp<xmax and xtemp>xmin and ytemp<ymax and ytemp>ymin) { // and ztemp<zmax and ztemp<zmin) {   
		//x[i][t] = xtemp;
		//y[i][t] = ytemp;
		//z[i][t] = ztemp;	
			//p[i]->SetPoint(t,x[i],y[i],z[i]);
//			break;
		//}
		if(xtemp > xmax) {
			x[i][t] = xmax;
		}
		else if(xtemp < xmin) {
			x[i][t] = xmin;
		}
		else {
			x[i][t] = xtemp;
		}


		if(ytemp > ymax) {
			y[i][t] = ymax;
		}
		else if(ytemp < ymin) {
			y[i][t] = ymin;
		}
		else {
			y[i][t] = ytemp;
		}
		
		if(ztemp > zmax) {
			z[i][t] = zmax;
		}
		else if(ztemp < zmin) {
			z[i][t] = zmin;		
		}
		else {
			z[i][t] = ztemp;
		}
		
		r[i]= double(sqrt( x[i][t]*x[i][t] + y[i][t]*y[i][t] + z[i][t]*z[i][t]));
		theta[i]= double(atan(sqrt(x[i][t]*x[i][t]+y[i][t]*y[i][t])/z[i][t]));
		phi[i]= double(atan(y[i][t]/x[i][t]));


//		}
		//After the while loop ends, lamda is updated according to the particle's latest position, and the next (30 - t) points are generated
	}
	
	}

	TGraph2D *p0 = new TGraph2D();
	p0->SetPoint(1, xmax, ymax, 0);
	p0->SetPoint(2, xmin, ymin, 0);
//	p0->Draw("p LINE");
//	p0->SetMarkerColor(kWhite);

	int q=0;

	for(int p=0; p<5; p++) {
		p1->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p1->Draw("LINE");
		p1->SetLineColor(q);
		p1->SetLineWidth(3);
	//	p1->SetXmax(xmax);
		p1->SetTitle("Simulation of 10 particles in a box; X displacement; Y displacement; Z displacement");
		p1->GetXaxis()->SetRange(-10,10);
		p1->GetYaxis()->SetRange(-10,10);
		p1->GetZaxis()->SetLimits(-3, 11);
		//p1->SetMaximum(10);
		//p1->SetMinimum(-2);
	}
	q++;

	for(int p=0; p<5; p++) {
		p2->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p2->Draw("A SAME LINE");
		p2->SetLineColor(q);
	}
	q++;
	
	for(int p=0; p<5; p++) {
		p3->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p3->Draw("A SAME LINE");
		p3->SetLineColor(q);
	}
	q++;

	for(int p=0; p<5; p++) {
		p4->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p4->Draw("A SAME LINE");
		p4->SetLineColor(q);
	}
	q++;

	for(int p=0; p<5; p++) {
		p5->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p5->Draw("A SAME LINE");
		p5->SetLineColor(q);
	}
	q++;

	for(int p=0; p<5; p++) {
		p6->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p6->Draw("A SAME LINE");
		p6->SetLineColor(q);
	}
	q++;

	for(int p=0; p<5; p++) {
		p7->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p7->Draw("A SAME LINE");
		p7->SetLineColor(q);
	}
	q++;

	for(int p=0; p<5; p++) {
		p8->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p8->Draw("A SAME LINE");
		p8->SetLineColor(q);
	}
	q++;

	for(int p=0; p<5; p++) {
		p9->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p9->Draw("A SAME LINE");
		p9->SetLineColor(q);
	}
	q++;

	for(int p=0; p<5; p++) {
		p10->SetPoint(p, x[q][p], y[q][p], z[q][p]);
		p10->Draw("A SAME LINE");
		p10->SetLineColor(q);
	}
	q++;
/*
	G->Add(p1); // LINE");
	G->Add(p2); // LINE");
	G->Add(p3); // LINE");
	G->Add(p4); // LINE");
	G->Add(p5); // LINE");
	G->Add(p6); // LINE");
	G->Add(p7); // LINE");
	G->Add(p8); // LINE");
	G->Add(p9); // LINE");
	G->Add(p10); // LINE");
	G->Draw("APL");
*/

//	p[]->Draw("P LINE");
//	p[]->SetMarkerColor(1);
//	p[]->SetMarkerSize(1);
	
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
