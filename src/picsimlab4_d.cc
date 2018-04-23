CPWindow4::CPWindow4(void)
{
//lxrad automatic generated block start, don't edit below!
  SetFOwner(this);
  SetClass(wxT("CPWindow"));
  SetName(wxT("window4"));
  SetTag(0);
  SetX(283);
  SetY(159);
  SetWidth(1026);
  SetHeight(501);
  SetHint(wxT(""));
  SetEnable(1);
  SetVisible(0);
  SetColor(wxT("#000001"));
  SetPopupMenu(NULL);
  SetTitle(wxT("PICSimLab - Oscilloscope"));
  SetOverrideRedirect(0);
  EvOnDestroy=EVONDESTROY & CPWindow4::_EvOnDestroy;
  EvOnShow=EVONSHOW & CPWindow4::_EvOnShow;
  EvOnHide=EVONHIDE & CPWindow4::_EvOnHide;
  //draw1
  draw1.SetFOwner(this);
  draw1.SetClass(wxT("CDraw"));
  draw1.SetName(wxT("draw1"));
  draw1.SetTag(0);
  draw1.SetX(20);
  draw1.SetY(20);
  draw1.SetWidth(500);
  draw1.SetHeight(400);
  draw1.SetHint(wxT(""));
  draw1.SetEnable(1);
  draw1.SetVisible(1);
  draw1.SetColor(wxT("#000001"));
  draw1.SetPopupMenu(NULL);
  draw1.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::draw1_EvMouseButtonClick;
  draw1.SetTransparent(0);
  draw1.SetImgFileName(wxT(""));
  CreateChild(&draw1);
  //spind1
  spind1.SetFOwner(this);
  spind1.SetClass(wxT("CSpind"));
  spind1.SetName(wxT("spind1"));
  spind1.SetTag(0);
  spind1.SetX(571);
  spind1.SetY(134);
  spind1.SetWidth(80);
  spind1.SetHeight(26);
  spind1.SetHint(wxT(""));
  spind1.SetEnable(1);
  spind1.SetVisible(1);
  spind1.SetColor(wxT("#000001"));
  spind1.SetPopupMenu(NULL);
  spind1.SetValue(2.000000);
  spind1.SetMin(0.100000);
  spind1.SetMax(100.000000);
  spind1.SetInc(0.010000);
  spind1.SetDigits(2);
  CreateChild(&spind1);
  //spind2
  spind2.SetFOwner(this);
  spind2.SetClass(wxT("CSpind"));
  spind2.SetName(wxT("spind2"));
  spind2.SetTag(0);
  spind2.SetX(571);
  spind2.SetY(203);
  spind2.SetWidth(80);
  spind2.SetHeight(26);
  spind2.SetHint(wxT(""));
  spind2.SetEnable(1);
  spind2.SetVisible(1);
  spind2.SetColor(wxT("#000001"));
  spind2.SetPopupMenu(NULL);
  spind2.SetValue(0.000000);
  spind2.SetMin(-100.000000);
  spind2.SetMax(100.000000);
  spind2.SetInc(0.010000);
  spind2.SetDigits(2);
  CreateChild(&spind2);
  //spind3
  spind3.SetFOwner(this);
  spind3.SetClass(wxT("CSpind"));
  spind3.SetName(wxT("spind3"));
  spind3.SetTag(0);
  spind3.SetX(702);
  spind3.SetY(134);
  spind3.SetWidth(80);
  spind3.SetHeight(26);
  spind3.SetHint(wxT(""));
  spind3.SetEnable(1);
  spind3.SetVisible(1);
  spind3.SetColor(wxT("#000001"));
  spind3.SetPopupMenu(NULL);
  spind3.SetValue(2.000000);
  spind3.SetMin(0.100000);
  spind3.SetMax(100.000000);
  spind3.SetInc(0.010000);
  spind3.SetDigits(2);
  CreateChild(&spind3);
  //spind4
  spind4.SetFOwner(this);
  spind4.SetClass(wxT("CSpind"));
  spind4.SetName(wxT("spind4"));
  spind4.SetTag(0);
  spind4.SetX(704);
  spind4.SetY(203);
  spind4.SetWidth(80);
  spind4.SetHeight(26);
  spind4.SetHint(wxT(""));
  spind4.SetEnable(1);
  spind4.SetVisible(1);
  spind4.SetColor(wxT("#000001"));
  spind4.SetPopupMenu(NULL);
  spind4.SetValue(0.000000);
  spind4.SetMin(-100.000000);
  spind4.SetMax(100.000000);
  spind4.SetInc(0.010000);
  spind4.SetDigits(2);
  CreateChild(&spind4);
  //spind5
  spind5.SetFOwner(this);
  spind5.SetClass(wxT("CSpind"));
  spind5.SetName(wxT("spind5"));
  spind5.SetTag(0);
  spind5.SetX(855);
  spind5.SetY(135);
  spind5.SetWidth(80);
  spind5.SetHeight(26);
  spind5.SetHint(wxT(""));
  spind5.SetEnable(1);
  spind5.SetVisible(1);
  spind5.SetColor(wxT("#000001"));
  spind5.SetPopupMenu(NULL);
  spind5.SetValue(10.000000);
  spind5.SetMin(0.001000);
  spind5.SetMax(200.000000);
  spind5.SetInc(0.001000);
  spind5.SetDigits(3);
  spind5.EvOnChangeSpinDouble=EVONCHANGESPINDOUBLE & CPWindow4::spind5_EvOnChangeSpinDouble;
  CreateChild(&spind5);
  //spind6
  spind6.SetFOwner(this);
  spind6.SetClass(wxT("CSpind"));
  spind6.SetName(wxT("spind6"));
  spind6.SetTag(0);
  spind6.SetX(858);
  spind6.SetY(202);
  spind6.SetWidth(80);
  spind6.SetHeight(26);
  spind6.SetHint(wxT(""));
  spind6.SetEnable(1);
  spind6.SetVisible(1);
  spind6.SetColor(wxT("#000001"));
  spind6.SetPopupMenu(NULL);
  spind6.SetValue(0.000000);
  spind6.SetMin(-100.000000);
  spind6.SetMax(100.000000);
  spind6.SetInc(0.001000);
  spind6.SetDigits(3);
  spind6.EvOnChangeSpinDouble=EVONCHANGESPINDOUBLE & CPWindow4::spind6_EvOnChangeSpinDouble;
  CreateChild(&spind6);
  //togglebutton1
  togglebutton1.SetFOwner(this);
  togglebutton1.SetClass(wxT("CToggleButton"));
  togglebutton1.SetName(wxT("togglebutton1"));
  togglebutton1.SetTag(0);
  togglebutton1.SetX(578);
  togglebutton1.SetY(252);
  togglebutton1.SetWidth(65);
  togglebutton1.SetHeight(28);
  togglebutton1.SetHint(wxT(""));
  togglebutton1.SetEnable(1);
  togglebutton1.SetVisible(1);
  togglebutton1.SetColor(wxT("#000001"));
  togglebutton1.SetPopupMenu(NULL);
  togglebutton1.SetText(wxT("On"));
  togglebutton1.SetCheck(1);
  CreateChild(&togglebutton1);
  //button1
  button1.SetFOwner(this);
  button1.SetClass(wxT("CButton"));
  button1.SetName(wxT("button1"));
  button1.SetTag(0);
  button1.SetX(579);
  button1.SetY(294);
  button1.SetWidth(65);
  button1.SetHeight(28);
  button1.SetHint(wxT(""));
  button1.SetEnable(1);
  button1.SetVisible(1);
  button1.SetColor(wxT("#000001"));
  button1.SetPopupMenu(NULL);
  button1.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button1_EvMouseButtonClick;
  button1.SetText(wxT("Color"));
  CreateChild(&button1);
  //togglebutton2
  togglebutton2.SetFOwner(this);
  togglebutton2.SetClass(wxT("CToggleButton"));
  togglebutton2.SetName(wxT("togglebutton2"));
  togglebutton2.SetTag(0);
  togglebutton2.SetX(709);
  togglebutton2.SetY(252);
  togglebutton2.SetWidth(65);
  togglebutton2.SetHeight(28);
  togglebutton2.SetHint(wxT(""));
  togglebutton2.SetEnable(1);
  togglebutton2.SetVisible(1);
  togglebutton2.SetColor(wxT("#000001"));
  togglebutton2.SetPopupMenu(NULL);
  togglebutton2.SetText(wxT("On"));
  togglebutton2.SetCheck(1);
  CreateChild(&togglebutton2);
  //button2
  button2.SetFOwner(this);
  button2.SetClass(wxT("CButton"));
  button2.SetName(wxT("button2"));
  button2.SetTag(0);
  button2.SetX(708);
  button2.SetY(294);
  button2.SetWidth(65);
  button2.SetHeight(28);
  button2.SetHint(wxT(""));
  button2.SetEnable(1);
  button2.SetVisible(1);
  button2.SetColor(wxT("#000001"));
  button2.SetPopupMenu(NULL);
  button2.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button2_EvMouseButtonClick;
  button2.SetText(wxT("Color"));
  CreateChild(&button2);
  //togglebutton3
  togglebutton3.SetFOwner(this);
  togglebutton3.SetClass(wxT("CToggleButton"));
  togglebutton3.SetName(wxT("togglebutton3"));
  togglebutton3.SetTag(0);
  togglebutton3.SetX(578);
  togglebutton3.SetY(344);
  togglebutton3.SetWidth(65);
  togglebutton3.SetHeight(28);
  togglebutton3.SetHint(wxT(""));
  togglebutton3.SetEnable(1);
  togglebutton3.SetVisible(1);
  togglebutton3.SetColor(wxT("#000001"));
  togglebutton3.SetPopupMenu(NULL);
  togglebutton3.SetText(wxT("Inv"));
  togglebutton3.SetCheck(0);
  CreateChild(&togglebutton3);
  //togglebutton4
  togglebutton4.SetFOwner(this);
  togglebutton4.SetClass(wxT("CToggleButton"));
  togglebutton4.SetName(wxT("togglebutton4"));
  togglebutton4.SetTag(0);
  togglebutton4.SetX(708);
  togglebutton4.SetY(344);
  togglebutton4.SetWidth(65);
  togglebutton4.SetHeight(28);
  togglebutton4.SetHint(wxT(""));
  togglebutton4.SetEnable(1);
  togglebutton4.SetVisible(1);
  togglebutton4.SetColor(wxT("#000001"));
  togglebutton4.SetPopupMenu(NULL);
  togglebutton4.SetText(wxT("Inv"));
  togglebutton4.SetCheck(0);
  CreateChild(&togglebutton4);
  //colordialog1
  colordialog1.SetFOwner(this);
  colordialog1.SetClass(wxT("CColorDialog"));
  colordialog1.SetName(wxT("colordialog1"));
  colordialog1.SetTag(0);
  colordialog1.SetColorName(wxT("RED"));
  CreateChild(&colordialog1);
  //togglebutton5
  togglebutton5.SetFOwner(this);
  togglebutton5.SetClass(wxT("CToggleButton"));
  togglebutton5.SetName(wxT("togglebutton5"));
  togglebutton5.SetTag(0);
  togglebutton5.SetX(866);
  togglebutton5.SetY(280);
  togglebutton5.SetWidth(65);
  togglebutton5.SetHeight(28);
  togglebutton5.SetHint(wxT(""));
  togglebutton5.SetEnable(1);
  togglebutton5.SetVisible(1);
  togglebutton5.SetColor(wxT("#000001"));
  togglebutton5.SetPopupMenu(NULL);
  togglebutton5.SetText(wxT("Trigger"));
  togglebutton5.SetCheck(1);
  togglebutton5.EvOnToggleButton=EVONTOGGLEBUTTON & CPWindow4::togglebutton5_EvOnToggleButton;
  CreateChild(&togglebutton5);
  //spind7
  spind7.SetFOwner(this);
  spind7.SetClass(wxT("CSpind"));
  spind7.SetName(wxT("spind7"));
  spind7.SetTag(0);
  spind7.SetX(860);
  spind7.SetY(420);
  spind7.SetWidth(80);
  spind7.SetHeight(26);
  spind7.SetHint(wxT(""));
  spind7.SetEnable(1);
  spind7.SetVisible(1);
  spind7.SetColor(wxT("#000001"));
  spind7.SetPopupMenu(NULL);
  spind7.SetValue(2.500000);
  spind7.SetMin(-100.000000);
  spind7.SetMax(100.000000);
  spind7.SetInc(0.010000);
  spind7.SetDigits(2);
  spind7.EvOnChangeSpinDouble=EVONCHANGESPINDOUBLE & CPWindow4::spind7_EvOnChangeSpinDouble;
  CreateChild(&spind7);
  //combo1
  combo1.SetFOwner(this);
  combo1.SetClass(wxT("CCombo"));
  combo1.SetName(wxT("combo1"));
  combo1.SetTag(0);
  combo1.SetX(860);
  combo1.SetY(344);
  combo1.SetWidth(80);
  combo1.SetHeight(26);
  combo1.SetHint(wxT(""));
  combo1.SetEnable(1);
  combo1.SetVisible(1);
  combo1.SetColor(wxT("#000001"));
  combo1.SetPopupMenu(NULL);
  combo1.SetItems(wxT("1,2,"));
  combo1.SetText(wxT("1"));
  combo1.SetReadOnly(0);
  CreateChild(&combo1);
  //timer1
  timer1.SetFOwner(this);
  timer1.SetClass(wxT("CTimer"));
  timer1.SetName(wxT("timer1"));
  timer1.SetTag(0);
  timer1.SetTime(33);
  timer1.SetRunState(1);
  timer1.EvOnTime=EVONTIME & CPWindow4::timer1_EvOnTime;
  CreateChild(&timer1);
  //combo2
  combo2.SetFOwner(this);
  combo2.SetClass(wxT("CCombo"));
  combo2.SetName(wxT("combo2"));
  combo2.SetTag(0);
  combo2.SetX(537);
  combo2.SetY(420);
  combo2.SetWidth(140);
  combo2.SetHeight(26);
  combo2.SetHint(wxT(""));
  combo2.SetEnable(1);
  combo2.SetVisible(1);
  combo2.SetColor(wxT("#000001"));
  combo2.SetPopupMenu(NULL);
  combo2.SetItems(wxT(""));
  combo2.SetText(wxT("1"));
  combo2.SetReadOnly(0);
  combo2.EvOnComboChange=EVONCOMBOCHANGE & CPWindow4::combo2_EvOnComboChange;
  CreateChild(&combo2);
  //combo3
  combo3.SetFOwner(this);
  combo3.SetClass(wxT("CCombo"));
  combo3.SetName(wxT("combo3"));
  combo3.SetTag(0);
  combo3.SetX(685);
  combo3.SetY(420);
  combo3.SetWidth(140);
  combo3.SetHeight(26);
  combo3.SetHint(wxT(""));
  combo3.SetEnable(1);
  combo3.SetVisible(1);
  combo3.SetColor(wxT("#000001"));
  combo3.SetPopupMenu(NULL);
  combo3.SetItems(wxT(""));
  combo3.SetText(wxT("2"));
  combo3.SetReadOnly(0);
  combo3.EvOnComboChange=EVONCOMBOCHANGE & CPWindow4::combo3_EvOnComboChange;
  CreateChild(&combo3);
  //label1
  label1.SetFOwner(this);
  label1.SetClass(wxT("CLabel"));
  label1.SetName(wxT("label1"));
  label1.SetTag(0);
  label1.SetX(549);
  label1.SetY(105);
  label1.SetWidth(128);
  label1.SetHeight(20);
  label1.SetHint(wxT(""));
  label1.SetEnable(1);
  label1.SetVisible(1);
  label1.SetColor(wxT("#000001"));
  label1.SetPopupMenu(NULL);
  label1.SetText(wxT("Ch 1 scale (V/div)"));
  label1.SetAlign(1);
  CreateChild(&label1);
  //label2
  label2.SetFOwner(this);
  label2.SetClass(wxT("CLabel"));
  label2.SetName(wxT("label2"));
  label2.SetTag(0);
  label2.SetX(686);
  label2.SetY(105);
  label2.SetWidth(130);
  label2.SetHeight(20);
  label2.SetHint(wxT(""));
  label2.SetEnable(1);
  label2.SetVisible(1);
  label2.SetColor(wxT("#000001"));
  label2.SetPopupMenu(NULL);
  label2.SetText(wxT("Ch 2 scale (V/div)"));
  label2.SetAlign(1);
  CreateChild(&label2);
  //label3
  label3.SetFOwner(this);
  label3.SetClass(wxT("CLabel"));
  label3.SetName(wxT("label3"));
  label3.SetTag(0);
  label3.SetX(844);
  label3.SetY(247);
  label3.SetWidth(119);
  label3.SetHeight(20);
  label3.SetHint(wxT(""));
  label3.SetEnable(1);
  label3.SetVisible(1);
  label3.SetColor(wxT("#000001"));
  label3.SetPopupMenu(NULL);
  label3.SetText(wxT("Trigger On/Off"));
  label3.SetAlign(1);
  CreateChild(&label3);
  //label4
  label4.SetFOwner(this);
  label4.SetClass(wxT("CLabel"));
  label4.SetName(wxT("label4"));
  label4.SetTag(0);
  label4.SetX(826);
  label4.SetY(105);
  label4.SetWidth(147);
  label4.SetHeight(20);
  label4.SetHint(wxT(""));
  label4.SetEnable(1);
  label4.SetVisible(1);
  label4.SetColor(wxT("#000001"));
  label4.SetPopupMenu(NULL);
  label4.SetText(wxT("Time Scale (ms/div)"));
  label4.SetAlign(1);
  CreateChild(&label4);
  //label5
  label5.SetFOwner(this);
  label5.SetClass(wxT("CLabel"));
  label5.SetName(wxT("label5"));
  label5.SetTag(0);
  label5.SetX(836);
  label5.SetY(175);
  label5.SetWidth(128);
  label5.SetHeight(20);
  label5.SetHint(wxT(""));
  label5.SetEnable(1);
  label5.SetVisible(1);
  label5.SetColor(wxT("#000001"));
  label5.SetPopupMenu(NULL);
  label5.SetText(wxT("Time offset (ms)"));
  label5.SetAlign(1);
  CreateChild(&label5);
  //label6
  label6.SetFOwner(this);
  label6.SetClass(wxT("CLabel"));
  label6.SetName(wxT("label6"));
  label6.SetTag(0);
  label6.SetX(843);
  label6.SetY(318);
  label6.SetWidth(122);
  label6.SetHeight(20);
  label6.SetHint(wxT(""));
  label6.SetEnable(1);
  label6.SetVisible(1);
  label6.SetColor(wxT("#000001"));
  label6.SetPopupMenu(NULL);
  label6.SetText(wxT("Trigger channel"));
  label6.SetAlign(1);
  CreateChild(&label6);
  //label7
  label7.SetFOwner(this);
  label7.SetClass(wxT("CLabel"));
  label7.SetName(wxT("label7"));
  label7.SetTag(0);
  label7.SetX(837);
  label7.SetY(390);
  label7.SetWidth(128);
  label7.SetHeight(20);
  label7.SetHint(wxT(""));
  label7.SetEnable(1);
  label7.SetVisible(1);
  label7.SetColor(wxT("#000001"));
  label7.SetPopupMenu(NULL);
  label7.SetText(wxT("Trigger level (V)"));
  label7.SetAlign(1);
  CreateChild(&label7);
  //label8
  label8.SetFOwner(this);
  label8.SetClass(wxT("CLabel"));
  label8.SetName(wxT("label8"));
  label8.SetTag(0);
  label8.SetX(562);
  label8.SetY(176);
  label8.SetWidth(113);
  label8.SetHeight(20);
  label8.SetHint(wxT(""));
  label8.SetEnable(1);
  label8.SetVisible(1);
  label8.SetColor(wxT("#000001"));
  label8.SetPopupMenu(NULL);
  label8.SetText(wxT("Ch 1 offset (V)"));
  label8.SetAlign(1);
  CreateChild(&label8);
  //label9
  label9.SetFOwner(this);
  label9.SetClass(wxT("CLabel"));
  label9.SetName(wxT("label9"));
  label9.SetTag(0);
  label9.SetX(692);
  label9.SetY(176);
  label9.SetWidth(115);
  label9.SetHeight(20);
  label9.SetHint(wxT(""));
  label9.SetEnable(1);
  label9.SetVisible(1);
  label9.SetColor(wxT("#000001"));
  label9.SetPopupMenu(NULL);
  label9.SetText(wxT("Ch 2 offset (V)"));
  label9.SetAlign(1);
  CreateChild(&label9);
  //label10
  label10.SetFOwner(this);
  label10.SetClass(wxT("CLabel"));
  label10.SetName(wxT("label10"));
  label10.SetTag(0);
  label10.SetX(549);
  label10.SetY(394);
  label10.SetWidth(60);
  label10.SetHeight(20);
  label10.SetHint(wxT(""));
  label10.SetEnable(1);
  label10.SetVisible(1);
  label10.SetColor(wxT("#000001"));
  label10.SetPopupMenu(NULL);
  label10.SetText(wxT("Ch 1"));
  label10.SetAlign(1);
  CreateChild(&label10);
  //label11
  label11.SetFOwner(this);
  label11.SetClass(wxT("CLabel"));
  label11.SetName(wxT("label11"));
  label11.SetTag(0);
  label11.SetX(693);
  label11.SetY(394);
  label11.SetWidth(60);
  label11.SetHeight(20);
  label11.SetHint(wxT(""));
  label11.SetEnable(1);
  label11.SetVisible(1);
  label11.SetColor(wxT("#000001"));
  label11.SetPopupMenu(NULL);
  label11.SetText(wxT("Ch 2"));
  label11.SetAlign(1);
  CreateChild(&label11);
  //button3
  button3.SetFOwner(this);
  button3.SetClass(wxT("CButton"));
  button3.SetName(wxT("button3"));
  button3.SetTag(0);
  button3.SetX(725);
  button3.SetY(26);
  button3.SetWidth(65);
  button3.SetHeight(28);
  button3.SetHint(wxT(""));
  button3.SetEnable(1);
  button3.SetVisible(1);
  button3.SetColor(wxT("#000001"));
  button3.SetPopupMenu(NULL);
  button3.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button3_EvMouseButtonClick;
  button3.SetText(wxT("Autoset"));
  CreateChild(&button3);
  //togglebutton6
  togglebutton6.SetFOwner(this);
  togglebutton6.SetClass(wxT("CToggleButton"));
  togglebutton6.SetName(wxT("togglebutton6"));
  togglebutton6.SetTag(0);
  togglebutton6.SetX(839);
  togglebutton6.SetY(26);
  togglebutton6.SetWidth(65);
  togglebutton6.SetHeight(28);
  togglebutton6.SetHint(wxT(""));
  togglebutton6.SetEnable(1);
  togglebutton6.SetVisible(1);
  togglebutton6.SetColor(wxT("#000001"));
  togglebutton6.SetPopupMenu(NULL);
  togglebutton6.SetText(wxT("Stop"));
  togglebutton6.SetCheck(0);
  togglebutton6.EvOnToggleButton=EVONTOGGLEBUTTON & CPWindow4::togglebutton6_EvOnToggleButton;
  CreateChild(&togglebutton6);
  //togglebutton7
  togglebutton7.SetFOwner(this);
  togglebutton7.SetClass(wxT("CToggleButton"));
  togglebutton7.SetName(wxT("togglebutton7"));
  togglebutton7.SetTag(0);
  togglebutton7.SetX(920);
  togglebutton7.SetY(26);
  togglebutton7.SetWidth(65);
  togglebutton7.SetHeight(28);
  togglebutton7.SetHint(wxT(""));
  togglebutton7.SetEnable(1);
  togglebutton7.SetVisible(1);
  togglebutton7.SetColor(wxT("#000001"));
  togglebutton7.SetPopupMenu(NULL);
  togglebutton7.SetText(wxT("Single"));
  togglebutton7.SetCheck(0);
  CreateChild(&togglebutton7);
  //button4
  button4.SetFOwner(this);
  button4.SetClass(wxT("CButton"));
  button4.SetName(wxT("button4"));
  button4.SetTag(0);
  button4.SetX(433);
  button4.SetY(430);
  button4.SetWidth(70);
  button4.SetHeight(28);
  button4.SetHint(wxT(""));
  button4.SetEnable(1);
  button4.SetVisible(1);
  button4.SetColor(wxT("#000001"));
  button4.SetPopupMenu(NULL);
  button4.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow4::button4_EvMouseButtonClick;
  button4.SetText(wxT("Save Png"));
  CreateChild(&button4);
  //filedialog1
  filedialog1.SetFOwner(this);
  filedialog1.SetClass(wxT("CFileDialog"));
  filedialog1.SetName(wxT("filedialog1"));
  filedialog1.SetTag(0);
  filedialog1.SetFileName(wxT("untitled.png"));
  filedialog1.SetFilter(wxT("PNG Files (*.png)|*.png"));
  filedialog1.SetType(129);
  CreateChild(&filedialog1);
  /*#Others*/
//lxrad automatic generated block end, don't edit above!
  button1.SetColor(255,0,0);
  button2.SetColor(0,255,0);

  Dt=0;
  Rt=0;
  usetrigger=1;
  triggerlv=2.5;
  chpin[0]=0;
  chpin[1]=1;
  toffset=250;
  run=1;
};
