{
	double x1 = 5.0;
	double x2 = 8.0;
	double y1 = 2.0;
	double y2 = 5.0;
	double x,y;

	TGraph *graph = new TGraph();

	for(int i=0; i<1000; i++) {
		x = (gRandom->Uniform((x2-x1)) + x1);
		y = (gRandom->Uniform((y2-y1)) + y1);
		graph->SetPoint(i, x, y);
	}

	graph->Draw("AP");
	graph->SetMarkerStyle(22);
	graph->SetMarkerSize(1);
	graph->SetMarkerColor(kBlue);
	graph->SetMinimum(0);
	graph->SetTitle("Uniform Distribution");
	graph->SetMaximum(6);


}
