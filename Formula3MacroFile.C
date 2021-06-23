void Explicit and Implicit Forms()
{
//=========Macro generated from canvas: Explicit and Implicit Forms/Sample
//=========  (Tue Jun 15 00:43:55 2021) by ROOT version 6.24/00
   TCanvas *Explicit and Implicit Forms = new TCanvas("Explicit and Implicit Forms", "Sample",72,64,728,536);
   Explicit and Implicit Forms->Range(0,0,1,1);
   Explicit and Implicit Forms->SetFillColor(0);
   Explicit and Implicit Forms->SetBorderMode(0);
   Explicit and Implicit Forms->SetBorderSize(2);
   Explicit and Implicit Forms->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Explicit and Implicit Forms_1
   TPad *Explicit and Implicit Forms_1 = new TPad("Explicit and Implicit Forms_1", "Explicit and Implicit Forms_1",0.01,0.01,0.49,0.99);
   Explicit and Implicit Forms_1->Draw();
   Explicit and Implicit Forms_1->cd();
   Explicit and Implicit Forms_1->Range(-1,-1,1,1);
   TView *view1 = TView::CreateView(1);
   view1->SetRange(-3,-3,-10,3,3,10);
   Explicit and Implicit Forms_1->SetFillColor(0);
   Explicit and Implicit Forms_1->SetBorderMode(0);
   Explicit and Implicit Forms_1->SetBorderSize(2);
   Explicit and Implicit Forms_1->SetFrameBorderMode(0);
   
   TF3 *Sample function implicit = new TF3("Sample function implicit","z+y*cos(x*y)",-3,3,-3,3,-10,10);
   Sample function implicit->SetFillColor(19);
   Sample function implicit->SetLineColor(2);
   Sample function implicit->SetNpz(30);
   Sample function implicit->Draw("");
   
   TPaveText *pt = new TPaveText(0.3407249,0.9349605,0.6592751,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("z+y*cos(x*y)");
   pt->Draw();
   Explicit and Implicit Forms_1->Modified();
   Explicit and Implicit Forms->cd();
  
// ------------>Primitives in pad: Explicit and Implicit Forms_2
   TPad *Explicit and Implicit Forms_2 = new TPad("Explicit and Implicit Forms_2", "Explicit and Implicit Forms_2",0.51,0.01,0.99,0.99);
   Explicit and Implicit Forms_2->Draw();
   Explicit and Implicit Forms_2->cd();
   Explicit and Implicit Forms_2->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view2 = TView::CreateView(1);
   view2->SetRange(-3,-3,-3.200746,3,3,3.505614);
   Explicit and Implicit Forms_2->SetFillColor(0);
   Explicit and Implicit Forms_2->SetBorderMode(0);
   Explicit and Implicit Forms_2->SetBorderSize(2);
   Explicit and Implicit Forms_2->SetFrameBorderMode(0);
   
   TF2 *Sample function explicit = new TF2("Sample function explicit","-y*cos(x*y)",-3,3,-3,3);
   Sample function explicit->SetFillColor(19);
   Sample function explicit->SetFillStyle(0);
   Sample function explicit->SetLineColor(2);
   Sample function explicit->SetLineWidth(2);
   Sample function explicit->SetNpx(30);
   Sample function explicit->Draw("surf1");
   
   pt = new TPaveText(0.3596287,0.9349605,0.6403713,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("-y*cos(x*y)");
   pt->Draw();
   Explicit and Implicit Forms_2->Modified();
   Explicit and Implicit Forms->cd();
   Explicit and Implicit Forms->Modified();
   Explicit and Implicit Forms->cd();
   Explicit and Implicit Forms->SetSelected(Explicit and Implicit Forms);
}
