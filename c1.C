void c1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 16 14:38:14 2021) by ROOT version 6.22/08
   TCanvas *c1 = new TCanvas("c1", "c1",606,340,700,500);
   c1->Range(-12.5,357.1019,112.5,459.0831);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *hist__1 = new TH1F("hist__1","histogram",25,0,100);
   hist__1->SetBinContent(1,395);
   hist__1->SetBinContent(2,387);
   hist__1->SetBinContent(3,417);
   hist__1->SetBinContent(4,394);
   hist__1->SetBinContent(5,413);
   hist__1->SetBinContent(6,400);
   hist__1->SetBinContent(7,439);
   hist__1->SetBinContent(8,394);
   hist__1->SetBinContent(9,423);
   hist__1->SetBinContent(10,385);
   hist__1->SetBinContent(11,373);
   hist__1->SetBinContent(12,385);
   hist__1->SetBinContent(13,410);
   hist__1->SetBinContent(14,394);
   hist__1->SetBinContent(15,391);
   hist__1->SetBinContent(16,392);
   hist__1->SetBinContent(17,445);
   hist__1->SetBinContent(18,391);
   hist__1->SetBinContent(19,399);
   hist__1->SetBinContent(20,407);
   hist__1->SetBinContent(21,403);
   hist__1->SetBinContent(22,392);
   hist__1->SetBinContent(23,412);
   hist__1->SetBinContent(24,388);
   hist__1->SetBinContent(25,371);
   hist__1->SetEntries(10000);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("hist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10000  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  49.82");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.78");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hist__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hist__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hist__1->SetLineColor(ci);
   hist__1->GetXaxis()->SetLabelFont(42);
   hist__1->GetXaxis()->SetTitleOffset(1);
   hist__1->GetXaxis()->SetTitleFont(42);
   hist__1->GetYaxis()->SetLabelFont(42);
   hist__1->GetYaxis()->SetTitleFont(42);
   hist__1->GetZaxis()->SetLabelFont(42);
   hist__1->GetZaxis()->SetTitleOffset(1);
   hist__1->GetZaxis()->SetTitleFont(42);
   hist__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.4076218,0.9343684,0.5923782,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("histogram");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
