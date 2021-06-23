//Creating TGraph using data from a csv file

{
	g1 = new TGraph("Graph1Data.csv"); //Fetches data from csv file
	
	g1->SetMarkerStyle(8); //See ROOT Marker Styles png file for styles
	g1->SetMarkerSize(1.5);
	g1->SetMarkerColor(kBlue+3);
	g1->SetLineWidth(2);
	g1->SetLineColor(kBlue+1);

	g1->Draw("APL"); //Draws line (L), points (P), and calculates axis ranges to fit x and y values (A)

}
