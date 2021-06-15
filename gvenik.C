{
	g = new TGraph();
	double x, y;
	for(int i=0;i<10;i++){
		x = 0.5*i;
		y = 4*x + 2 + gRandom->Gaus(0,1);
		g->SetPoint(i,x,y);
	}
	f = new TF1("f", "[0]*x+[1]",0,5);
	g->Fit(f);
	g->SetMarkerStyle(30);
	g->SetMarkerSize(3);
	g->Draw("AP");
}


