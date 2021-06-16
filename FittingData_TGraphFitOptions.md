TGraph::Fit and TF1::SetParameter	

Ways of using TGraph::Fit
1. Using Parameters
	- METHOD 1:
	TF1 *f =  new TF1("f", "[0]*x*x+[1]*x+[2]", -5, 5);
	g->Fit(f);

	- METHOD 2:
	Use TF1::SetParameter / TF1::SetParName / TF1::SetPar....

2. Using Previously Defined Forms
	TF1 *f = new TF1("f", "pol1", -5, 5);
	- pol1 = first degree polynomial
	- pol2, pol3, pol4..... pol[n] = polynomial of nth degree
	- gaus = gaussian distribution

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



PARAMETERS

TF1::SetParameters
	f1->SetParameters(2, 1);
TF1::SetParName
	f1->SetParName(int [par number], const char* [par name]);
TF1::SetParNames
	f1->SetParNames("slope", "offset");
TF1::SetParLimits
	f1->SetParLimits(int [par number], double [parmin], double [parmax]);
