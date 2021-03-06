//Example: Use of ROOT TFormula class to declare and plot 1-Dim Surface TF1 functions. 
//Two options for plotting the two TF1 functions are presented: On the same plot and side-by-side next to one another.

{
	//DRAWING ON THE SAME PLOT
	/*
	f1 = new TF1("f1", "3*sin(x)", -6, 6);
	f1->SetLineColor(kBlue+2);
	f1->SetLineWidth(3);
	f1->SetTitle("Displacement of objects 1 and 2; Time, t (s); Displacement, x (m)");
	f1->Draw();


	f2 = new TF1("f2", "2*cos(x)", -6, 6);
	f2->SetLineColor(kRed);
	f2->SetLineWidth(3);
	f2->SetTitle("Displacement of objects 1 and 2; Time, t (s); Displacement, x (m)");
	f2->Draw("SAME");  //Allows ROOT to draw both of these functions on the same canvas
	*/





	//DRAWING SIDE-BY-SIDE ON SEPARATE PLOTS
	
        c1 = new TCanvas("Formula1_TwoFunctionsSeparate", "Displacement of objects", 1100, 500); //the dimensions here can be manually adjusted on the canvas later
        c1->Divide(2,1);  //what this does is it divides the canvas into two columns and one row, plotting the functions in the order with which they are specified

        c1->cd(1);
        //define f1
	f1 = new TF1("f1", "3*sin(x)", -6, 6);
        f1->SetLineColor(kBlue+2);
        f1->SetLineWidth(3);
        f1->SetTitle("Displacement of object 1; Time, t (s); Displacement, x (m)");
        f1->Draw();


        c1->cd(2);
        //define f2
	f2 = new TF1("f2", "2*cos(x)", -6, 6);
        f2->SetLineColor(kRed);
        f2->SetLineWidth(3);
        f2->SetTitle("Displacement of object 2; Time, t (s); Displacement, x (m)");
        f2->Draw(); //without "SAME"
        
        //Note: In this case we can also set separate titles for the graphs instead of the title being determined by whatever is written in f1*/
	


}
