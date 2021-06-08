//Example: Use of ROOT TFormula class to declare and plot a 1-Dim TF1 function

{
	f1 = new TF1("f1", "sin(x)", -6, 6);
	f1->Draw();
}
