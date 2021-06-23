//Modelling the random movement of a particle with a mean free path lamda. When lamda is exceeded, assume that a collision happens and stop movement

{
	double x = 5.0;
	double y = 5.0;
	double z = 5.0;
	double distance = 0;
	double lamda = 10;
	double deltax, deltay, deltaz; 
	double totalx = 0;
	double totaly = 0;
	double totalz = 0;
	int i=0;

	TGraph2D *graph = new TGraph2D();
	graph->SetPoint(i,x,y,z);

	//for(int i=1; i<20; i++) {
	while(true) {
		i+=1;

		deltax = (gRandom->Uniform(1)-0.5); //extra distance to be added
		deltay = (gRandom->Uniform(1)-0.5);
		deltaz = (gRandom->Uniform(1)-0.5);

		x+=deltax; //current position (x, y, z coordinates)
		y+=deltay;
		z+=deltaz;
		
		totalx+=deltax; //total displacement (negative or positive)
		totaly+=deltay;
		totalz+=deltaz;
		
		distance+=sqrt(totalx*totalx+totaly*totaly+totalz*totalz); //module of displacement vector
	
		if(distance<lamda) {
			graph->SetPoint(i,x,y,z);
		}
		else { break; } //once mean free path is reached, stop movement
	}

	graph->Draw("AP LINE");
	graph->SetMarkerStyle(22);
	graph->SetMarkerSize(1);
	graph->SetMarkerColor(kBlue+2);
	graph->SetLineColor(kBlue);
	graph->SetTitle("Random Particle Movement");

}
