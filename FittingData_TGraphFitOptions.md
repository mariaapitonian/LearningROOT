TGraph::Fit

Ways of using TGraph::Fit
1. Using Parameters
	TF1 *f =  new TF1("f", "[0]*x*x+[1]*x+[2]", -5, 5);
	g->Fit(f);

2. Using Previously Defined Forms
	TF1 *f = new TF1("f", "pol1", -5, 5);
		pol1 = first degree polynomial
		pol2, pol3, pol4.....


Information given for fitted line
1. Chi2 - Chi-squared distribution
	Used with NDf (see below)
2. NDf - Number of Degrees of freedom
	If given 10 data points and 2 parameters, NDf is 8
	Shows how much information is available (statistically) to learn about the system
	Chi2/NDf should ideally be close to 1, certainly less than 2
3. Edm - Expected distance from minimum
	Size of the error matrix
4. p0, p1, ..... - Parameters with their calculated value and uncertainty
