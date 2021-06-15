void c1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jun 15 05:07:02 2021) by ROOT version 6.24/00
   TCanvas *c1 = new TCanvas("c1", "c1",72,64,728,536);
   c1->Range(-0.7500001,4,9.75,46);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[8] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph0_fy1[8] = {
   11,
   15,
   19,
   23,
   27,
   31,
   35,
   39};
   TGraph *graph = new TGraph(8,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph1Data.csv");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#000066");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","Graph1Data.csv",100,0.3,8.7);
   Graph_Graph01->SetMinimum(8.2);
   Graph_Graph01->SetMaximum(41.8);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.3589112,0.9343684,0.6410888,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Graph1Data.csv");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
