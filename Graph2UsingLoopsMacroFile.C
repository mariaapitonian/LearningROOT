void c1()
{
//=========Macro generated from canvas: c1/UsingLoop
//=========  (Tue Jun 15 05:52:45 2021) by ROOT version 6.24/00
   TCanvas *c1 = new TCanvas("c1", "UsingLoop",73,91,725,396);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.01,0.49,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-1.2375,-34,11.1375,128);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   Double_t _fx1[10] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t _fy1[10] = {
   -7,
   -3,
   3,
   11,
   21,
   33,
   47,
   63,
   81,
   101};
   TGraph *graph = new TGraph(10,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("Using the Formula x^2+3x-7");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Using the Formula x^2+3x-7",100,0,9.9);
   Graph_Graph1->SetMinimum(-17.8);
   Graph_Graph1->SetMaximum(111.8);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

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
   
   graph->Draw("acp");
   
   TPaveText *pt = new TPaveText(0.1510346,0.9349605,0.8489654,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Using the Formula x^2+3x-7");
   pt->Draw();
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0.51,0.01,0.99,0.99);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(3.237322,-7.966385,6.902817,5.663058);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   Double_t _fx2[100] = {
   5.460852,
   5.178079,
   4.97831,
   5.050821,
   5.23236,
   4.616278,
   4.976354,
   5.249925,
   4.555634,
   5.234929,
   5.855078,
   4.614695,
   4.764971,
   5.430073,
   5.515349,
   5.178615,
   4.689774,
   4.686747,
   4.469726,
   5.625839,
   5.618122,
   5.028807,
   5.364733,
   5.620723,
   4.864483,
   5.038738,
   6.202195,
   5.645757,
   4.638486,
   5.415974,
   4.395608,
   4.525974,
   5.053998,
   5.44875,
   5.192162,
   4.830212,
   4.792572,
   5.13642,
   4.834032,
   4.82158,
   4.742388,
   5.484939,
   5.628747,
   4.897295,
   4.980476,
   4.89849,
   4.267659,
   5.183702,
   5.227056,
   4.194771,
   4.781034,
   4.714638,
   5.339508,
   5.278844,
   4.248092,
   4.731727,
   4.733702,
   4.758833,
   5.308683,
   5.240124,
   5.079403,
   4.576,
   3.929219,
   4.61674,
   4.720388,
   5.100112,
   4.604426,
   5.310002,
   6.291901,
   4.994935,
   5.680213,
   4.451645,
   4.708062,
   5.596213,
   4.11493,
   4.716865,
   5.372688,
   5.85793,
   5.050848,
   3.911824,
   5.236388,
   4.565806,
   4.655228,
   5.037403,
   4.217725,
   3.848238,
   4.363503,
   4.364627,
   5.110854,
   5.928685,
   4.833682,
   4.514182,
   5.461893,
   4.956704,
   5.186433,
   4.337141,
   5.774629,
   5.080094,
   5.361013,
   5.863627};
   Double_t _fy2[100] = {
   0.05363478,
   1.302389,
   -2.638194,
   0.1502941,
   -1.028675,
   -0.05586006,
   -1.31856,
   -2.523692,
   2.133584,
   -0.1211233,
   0.4113099,
   -0.2803166,
   1.584913,
   -2.025857,
   -1.175584,
   -0.1201782,
   -0.4715835,
   0.4969649,
   -1.875858,
   1.8173,
   -0.6823844,
   -1.782961,
   -0.4509547,
   -0.7180569,
   -0.3772674,
   2.739139,
   0.7666346,
   3.152516,
   1.593361,
   0.08299288,
   -5.694811,
   -0.3706694,
   -0.5697527,
   0.241538,
   2.968992,
   0.2356647,
   -2.740248,
   -1.937143,
   -0.496618,
   2.515209,
   1.265204,
   2.76004,
   1.658863,
   -1.634509,
   -0.4938113,
   1.21283,
   1.101811,
   -0.5905824,
   -0.6550583,
   3.032142,
   -0.2853385,
   -0.1416301,
   -0.2885731,
   -0.5590846,
   -3.979029,
   -1.113921,
   -0.1712105,
   2.657126,
   -0.148566,
   0.07113358,
   -0.8766928,
   0.5787854,
   1.493644,
   1.901028,
   1.830516,
   3.391484,
   1.244973,
   -0.3541607,
   2.029235,
   -0.3405285,
   -0.03996875,
   -1.422446,
   0.9025252,
   -0.9259908,
   0.5912992,
   0.6064741,
   -0.3049307,
   -2.423503,
   -2.164235,
   0.7779558,
   1.793103,
   1.555495,
   -1.203168,
   -1.622561,
   0.3018157,
   -2.76444,
   2.533652,
   1.305662,
   1.614002,
   2.859495,
   0.6195183,
   -0.8835526,
   0.2445882,
   -1.159594,
   -2.03922,
   0.2764332,
   -0.7423947,
   0.6587361,
   0.3927986,
   -0.0923985};
   graph = new TGraph(100,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("Random Generation Centered at (5,0)");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#006600");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(22);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Random Generation Centered at (5,0)",100,3.603872,6.536267);
   Graph_Graph2->SetMinimum(-6.603441);
   Graph_Graph2->SetMaximum(4.300114);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("ap");
   
   pt = new TPaveText(0.15,0.9365405,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Random Generation Centered at (5,0)");
   pt->Draw();
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
