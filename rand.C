void tuts()
{
	Trandom2 *rand = new TRandom2(3);
	for(int i=0;i<3;i++)
	{
		double r = rand->Rndm()*20;
		cout << r << endl;
	}
}
