void tuts()
{
	TRandom2 *rand = new TRandom2(1);
	TH1F *hist = new TH1F("hist","histogram",25,0,100);
	for(int i=0;i<10000;i++)
	{
		double r = rand->Rndm()*100;
		cout << r << endl;
		hist->Fill(r);
	}

	TCanvas *c1 = new TCanvas();
	hist->Draw();
}
