void c1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jun 15 16:18:16 2021) by ROOT version 6.22/08
   TCanvas *c1 = new TCanvas("c1", "c1",67,57,700,502);
   c1->Range(-0.6187501,-1.148644,5.56875,23.73681);
   c1->SetFillColor(7);
   c1->SetFillStyle(3004);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameFillColor(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillColor(0);
   c1->SetFrameBorderMode(0);
   
   Double_t _fx1[10] = {
   0,
   0.5,
   1,
   1.5,
   2,
   2.5,
   3,
   3.5,
   4,
   4.5};
   Double_t _fy1[10] = {
   2.998933,
   3.565236,
   6.781796,
   7.969947,
   10.82426,
   11.94328,
   13.09912,
   15.9253,
   18.00791,
   19.58924};
   TGraph *graph = new TGraph(10,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(30);
   graph->SetMarkerSize(3);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,4.95);
   Graph_Graph1->SetMinimum(1.339902);
   Graph_Graph1->SetMaximum(21.24827);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   
   TF1 *f2 = new TF1("f","[0]*x+[1]",0,4.95, TF1::EAddToList::kNo);
   f2->SetFillColor(19);
   f2->SetFillStyle(0);
   f2->SetLineColor(2);
   f2->SetLineWidth(2);
   f2->SetChisquare(2.504151);
   f2->SetNDF(8);
   f2->GetXaxis()->SetLabelFont(42);
   f2->GetXaxis()->SetTitleOffset(1);
   f2->GetXaxis()->SetTitleFont(42);
   f2->GetYaxis()->SetLabelFont(42);
   f2->GetYaxis()->SetTitleFont(42);
   f2->SetParameter(0,3.789521);
   f2->SetParError(0,0.1231936);
   f2->SetParLimits(0,0,0);
   f2->SetParameter(1,2.544079);
   f2->SetParError(1,0.328837);
   f2->SetParLimits(1,0,0);
   f2->SetParent(graph);
   graph->GetListOfFunctions()->Add(f2);
   graph->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
