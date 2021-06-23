{
	f1 = new TF1("f1", "3*sin(x)", -9, 9);
	f1->SetLineColor(kBlue+1);
	f1->SetLineWidth(2);
	f1->SetTitle("Function 1");

	f2 = new TF1("f2", "5*cos(x)", -9, 9);
	f2->SetLineColor(kRed+1);
	f2->SetLineWidth(2);
	f2->SetTitle("Function 2");
	
	f3 = new TF2("f3", "15*sin(x)*cos(y)", -9, 9, -9, 9);
	f3->SetTitle("Product of Functions 1 and 2");

	c1 = new TCanvas("Formula2_SamplePlot", "TF2 Plot Sample", 2100, 700);
	c1->Divide(3,1);
	
	c1->cd(1);
	f1->Draw();
	
	c1->cd(2);
	f2->Draw();

	c1->cd(3);
	//f3->Draw("surf2"); //Adjustable 3D plot with no lines and color gradient
	//f3->Draw("surf1"); //Adjustable 3D plot with lines and color gradient
	f3->Draw("colz"); //Top view 3D plot with a color palette on the side that shows the z value each color corresponds to

}
