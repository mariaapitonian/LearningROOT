TF1 Function Class

TF1 (const char [name], [formula], Double_t [xmin], [xmax], Option_t [option])
- 1-Dim function class in ROOT
- Allows us to declare and plot a 1-Dim function defined between a lower and upper limit of x
- Lower and upper limits for x are given, range for y is automatically determined but can be edited
- In the above construction, the last component is optional. Regardless, available options are:
	1. VEC - vectorize the formula expressions (not possible for lambda based expressions) 
	2. NL - function is not stores in the global list of functions 
	3. GL - function will be always stored in the global list of functions


Example:
	TF1 *fa1 = new TF1("fa1","5*sin(x)/x",0,10)


PLOTTING:

Macro file can be edited to edit the plotted function
OR canvas can be opened and edited through view-> editor (this is easier if you don't know color codes etc)
--> the macro of the edited version can also be saved in order to have that design

In the original document, we can also put something like f1->SetLineColor(kBlue+3) before f->Draw() in order to edit specific features from the default.


For colors, see wheel.png or go to View->Colors on any canva

