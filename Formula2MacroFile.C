void Formula2_SamplePlot()
{
//=========Macro generated from canvas: Formula2_SamplePlot/TF2 Plot Sample
//=========  (Mon Jun 14 21:55:01 2021) by ROOT version 6.24/00
   TCanvas *Formula2_SamplePlot = new TCanvas("Formula2_SamplePlot", "TF2 Plot Sample",163,111,546,234);
   Formula2_SamplePlot->Range(0,0,1,1);
   Formula2_SamplePlot->SetFillColor(0);
   Formula2_SamplePlot->SetBorderMode(0);
   Formula2_SamplePlot->SetBorderSize(2);
   Formula2_SamplePlot->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Formula2_SamplePlot_1
   TPad *Formula2_SamplePlot_1 = new TPad("Formula2_SamplePlot_1", "Formula2_SamplePlot_1",0.01,0.01,0.3233333,0.99);
   Formula2_SamplePlot_1->Draw();
   Formula2_SamplePlot_1->cd();
   Formula2_SamplePlot_1->Range(-11.25,-4.125688,11.25,4.140684);
   Formula2_SamplePlot_1->SetFillColor(0);
   Formula2_SamplePlot_1->SetBorderMode(0);
   Formula2_SamplePlot_1->SetBorderSize(2);
   Formula2_SamplePlot_1->SetFrameBorderMode(0);
   Formula2_SamplePlot_1->SetFrameBorderMode(0);
   
   TF1 *f11 = new TF1("f1","Function 1",-9,9, TF1::EAddToList::kDefault);
   f11->SetFillColor(19);
   f11->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   f11->SetLineColor(ci);
   f11->SetLineWidth(3);
   f11->GetXaxis()->SetLabelFont(42);
   f11->GetXaxis()->SetTitleOffset(1);
   f11->GetXaxis()->SetTitleFont(42);
   f11->GetYaxis()->SetLabelFont(42);
   f11->GetYaxis()->SetTitleFont(42);
   f11->Draw("");
   
   TPaveText *pt = new TPaveText(0.3639734,0.94,0.6360266,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Function 1");
   pt->Draw();
   Formula2_SamplePlot_1->Modified();
   Formula2_SamplePlot->cd();
  
// ------------>Primitives in pad: Formula2_SamplePlot_2
   TPad *Formula2_SamplePlot_2 = new TPad("Formula2_SamplePlot_2", "Formula2_SamplePlot_2",0.3419118,0.01089918,0.65625,0.99);
   Formula2_SamplePlot_2->Draw();
   Formula2_SamplePlot_2->cd();
   Formula2_SamplePlot_2->Range(-11.25,-6.875401,11.25,6.88716);
   Formula2_SamplePlot_2->SetFillColor(0);
   Formula2_SamplePlot_2->SetBorderMode(0);
   Formula2_SamplePlot_2->SetBorderSize(2);
   Formula2_SamplePlot_2->SetFrameBorderMode(0);
   Formula2_SamplePlot_2->SetFrameBorderMode(0);
   
   TF1 *f22 = new TF1("f2","Function 2",-9,9, TF1::EAddToList::kDefault);
   f22->SetFillColor(19);
   f22->SetFillStyle(0);

   ci = TColor::GetColor("#cc0000");
   f22->SetLineColor(ci);
   f22->SetLineWidth(3);
   f22->GetXaxis()->SetLabelFont(42);
   f22->GetXaxis()->SetTitleOffset(1);
   f22->GetXaxis()->SetTitleFont(42);
   f22->GetYaxis()->SetLabelFont(42);
   f22->GetYaxis()->SetTitleFont(42);
   f22->Draw("");
   
   pt = new TPaveText(0.3604234,0.94,0.6395766,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Function 2");
   pt->Draw();
   Formula2_SamplePlot_2->Modified();
   Formula2_SamplePlot->cd();
  
// ------------>Primitives in pad: Formula2_SamplePlot_3
   TPad *Formula2_SamplePlot_3 = new TPad("Formula2_SamplePlot_3", "Formula2_SamplePlot_3",0.6766667,0.01,0.99,0.99);
   Formula2_SamplePlot_3->Draw();
   Formula2_SamplePlot_3->cd();
   Formula2_SamplePlot_3->Range(-11.25,-11.25,11.25,11.25);
   Formula2_SamplePlot_3->SetFillColor(0);
   Formula2_SamplePlot_3->SetBorderMode(0);
   Formula2_SamplePlot_3->SetBorderSize(2);
   Formula2_SamplePlot_3->SetFrameBorderMode(0);
   Formula2_SamplePlot_3->SetFrameBorderMode(0);
   
   TF2 *f3 = new TF2("f3","Product of Functions 1 and 2",-9,9,-9,9);
   f3->SetFillColor(19);
   f3->SetFillStyle(0);
   f3->SetLineColor(2);
   f3->SetLineWidth(2);
   f3->SetNpx(30);
   f3->Draw("colz");
   
   pt = new TPaveText(0.15,0.94,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Product of Functions 1 and 2");
   pt->Draw();
   Formula2_SamplePlot_3->Modified();
   Formula2_SamplePlot->cd();
   Formula2_SamplePlot->Modified();
   Formula2_SamplePlot->cd();
   Formula2_SamplePlot->SetSelected(Formula2_SamplePlot);
}
