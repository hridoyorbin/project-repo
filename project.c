#include <stdio.h>
#include<string.h>
struct element {
    int atomicNumber;
    char symbol[10];
    char name[20];
    float atomicWeight;
    char State[20];
    int grpNum;
    int periodicNum;
};
void actinides(struct element ele){
    printf("===========================================\n");
    printf("= Elemnet Information:\n");
    printf("= Atomic Number: %d\n",ele.atomicNumber);
    printf("= Symbol: %s\n", ele.symbol);
    printf("= Name: %s\n",ele.name);
    printf("= Series name = Actinides\n");
    printf("= Atomic Weight: %.4f\n",ele.atomicWeight);
    printf("= State of Element = %s\n",ele.State);
    printf("= Periodic Number = %d\n",ele.periodicNum);
    printf("= Group Number = %d\n",ele.grpNum);
    printf("===========================================\n");  

}
void lanthanide(struct element ele){
    printf("===========================================\n");
    printf("= Elemnet Information:\n");
    printf("= Atomic Number: %d\n",ele.atomicNumber);
    printf("= Symbol: %s\n", ele.symbol);
    printf("= Name: %s\n",ele.name);
    printf("Series Name = Lanthanide\n");
    printf("= Atomic Weight: %.4f\n",ele.atomicWeight);
    printf("= State of Element = %s\n",ele.State);
    printf("= Periodic Number = %d\n",ele.periodicNum);
    printf("f-block Element");
    printf("===========================================\n");  

}
void displayelement(struct element ele){
    printf("===========================================\n");
    printf("= Elemnet Information:\n");
    printf("= Atomic Number: %d\n",ele.atomicNumber);
    printf("= Symbol: %s\n", ele.symbol);
    printf("= Name: %s\n",ele.name);
    printf("= Series Name = Normal\n");
    printf("= Atomic Weight: %.4f\n",ele.atomicWeight);
    printf("= State of Element = %s\n",ele.State);
    printf("= Periodic Number = %d\n",ele.periodicNum);
    printf("= Group Number = %d\n",ele.grpNum);
    printf("===========================================\n");
}
int main(){
    struct element pt[118];
   pt[0].atomicNumber=1;
    strcpy(pt[0].symbol,"H");
    strcpy(pt[0].name,"Hydrogen");
    pt[0].atomicWeight=1.008;
    strcpy(pt[0].State,"Gas");
    pt[0].periodicNum=1;
    pt[0].grpNum=1;
pt[1].atomicNumber=2;
    strcpy(pt[1].symbol,"He");
    strcpy(pt[1].name,"Helium");
    pt[1].atomicWeight=4.0026;
    strcpy(pt[1].State,"Gas");
    pt[1].periodicNum=1;
    pt[1].grpNum=18;
 pt[2].atomicNumber=3;
    strcpy(pt[2].symbol,"Li");
    strcpy(pt[2].name,"Lithium");
    pt[2].atomicWeight=6.94;
    strcpy(pt[2].State,"Solid");
    pt[2].periodicNum=2;
    pt[2].grpNum=1;
 pt[3].atomicNumber=4;
    strcpy(pt[3].symbol,"Be");
    strcpy(pt[3].name,"Beryllium");
    pt[3].atomicWeight=9.0122;
    strcpy(pt[3].State,"Solid");
    pt[3].periodicNum=2;
    pt[3].grpNum=2;
pt[4].atomicNumber=5;
    strcpy(pt[4].symbol,"B");
    strcpy(pt[4].name,"Boron");
    pt[4].atomicWeight=10.81;
    strcpy(pt[4].State,"Solid");
    pt[4].periodicNum=2;
    pt[4].grpNum=13;
pt[5].atomicNumber=6;
    strcpy(pt[5].symbol,"C");
    strcpy(pt[5].name,"Carbon");
    pt[5].atomicWeight=12.011;
    strcpy(pt[5].State,"Solid");
    pt[5].periodicNum=2;
    pt[5].grpNum=14;
pt[6].atomicNumber=7;
    strcpy(pt[6].symbol,"N");
    strcpy(pt[6].name,"Nitrogen");
    pt[6].atomicWeight=14.007;
    strcpy(pt[6].State,"Gas");
    pt[6].periodicNum=2;
    pt[6].grpNum=14;
    
pt[7].atomicNumber=8;
    strcpy(pt[7].symbol,"O");
    strcpy(pt[7].name,"Oxygen");
    pt[7].atomicWeight=15.999;
    strcpy(pt[7].State,"Gas");
    pt[7].periodicNum=2;
    pt[7].grpNum=16;


    
pt[8].atomicNumber=9;
    strcpy(pt[8].symbol,"F");
    strcpy(pt[8].name,"fluorine");
    pt[8].atomicWeight=18.998;
    strcpy(pt[8].State,"Gas");
    pt[8].periodicNum=2;
    pt[8].grpNum=17; 

    
    
pt[9].atomicNumber=10;
    strcpy(pt[9].symbol,"Ne");
    strcpy(pt[9].name,"Neon");
    pt[9].atomicWeight=20.179;
    strcpy(pt[9].State,"Gas");
    pt[9].periodicNum=2;
    pt[9].grpNum=18;
   
    
pt[10].atomicNumber=11;
    strcpy(pt[10].symbol,"Na");
    strcpy(pt[10].name,"Sodium");
    pt[10].atomicWeight=22.981;
    strcpy(pt[10].State,"Solid");
    pt[9].periodicNum=3;
    pt[10].grpNum=1;
    
    
pt[11].atomicNumber=12;
    strcpy(pt[11].symbol,"Mg");
    strcpy(pt[11].name,"Magnesium");
    pt[11].atomicWeight=24.305;
    strcpy(pt[11].State,"Solid");
    pt[11].periodicNum=3;
    pt[11].grpNum=2;
    
    
pt[12].atomicNumber=13;
    strcpy(pt[12].symbol,"Al");
    strcpy(pt[12].name,"Aluminum");
    pt[12].atomicWeight=26.981;
    strcpy(pt[12].State,"Solid");
    pt[12].periodicNum=3;
    pt[12].grpNum=13;
    
    
pt[13].atomicNumber=14;
    strcpy(pt[13].symbol,"Si");
    strcpy(pt[13].name,"Silicon");
    pt[13].atomicWeight=28.0855;
    strcpy(pt[13].State,"Solid");
    pt[13].periodicNum=3;
    pt[13].grpNum=14;
    
    
    
pt[14].atomicNumber=15;
    strcpy(pt[14].symbol,"P");
    strcpy(pt[14].name,"Phosphorus");
    pt[14].atomicWeight=30.97376;
    strcpy(pt[14].State,"Solid");
    pt[14].periodicNum=3;
    pt[14].grpNum=15;
    
    
pt[15].atomicNumber=16;
    strcpy(pt[15].symbol,"S");
    strcpy(pt[15].name,"Sulfur");
    pt[15].atomicWeight=32.06;
    strcpy(pt[15].State,"Solid");
    pt[15].periodicNum=3;
    pt[15].grpNum=16;
    
    
pt[16].atomicNumber=17;
    strcpy(pt[16].symbol,"Cl");
    strcpy(pt[16].name,"chlorine");
    pt[16].atomicWeight=35.453;
    strcpy(pt[16].State,"Gas");
    pt[16].periodicNum=3;
    pt[16].grpNum=17;
    
    
pt[17].atomicNumber=18;
    strcpy(pt[17].symbol,"Ar");
    strcpy(pt[17].name,"Argon");
    pt[17].atomicWeight=39.948;
    strcpy(pt[17].State,"Gas");
    pt[17].periodicNum=3;
    pt[17].grpNum=18;
    
    
pt[18].atomicNumber=19;
    strcpy(pt[18].symbol,"K");
    strcpy(pt[18].name,"Potassium");
    pt[18].atomicWeight=39.0983;
    strcpy(pt[18].State,"Solid");
    pt[18].periodicNum=4;
    pt[18].grpNum=1;
    
    
pt[19].atomicNumber=20;
    strcpy(pt[19].symbol,"Ca");
    strcpy(pt[19].name,"Calcium");
    pt[19].atomicWeight=40.08;
    strcpy(pt[19].State,"Solid");
    pt[19].periodicNum=4;
    pt[19].grpNum=2;
    
    
    
pt[20].atomicNumber=21;
    strcpy(pt[20].symbol,"Sc");
    strcpy(pt[20].name,"Scandium");
    pt[20].atomicWeight=44.9559;
      strcpy(pt[13].State,"Solid");
    pt[13].periodicNum=4;
    pt[13].grpNum=3;
    
    
pt[21].atomicNumber=22;
    strcpy(pt[21].symbol,"Ti");
    strcpy(pt[21].name,"Titanium");
    pt[21].atomicWeight=47.90;
    strcpy(pt[21].State,"Solid");
    pt[21].periodicNum=4;
    pt[21].grpNum=4;
    
    
pt[22].atomicNumber=23;
    strcpy(pt[22].symbol,"V");
    strcpy(pt[22].name,"Vanadium");
    pt[22].atomicWeight=50.9415;
      strcpy(pt[22].State,"Solid");
    pt[22].periodicNum=4;
    pt[22].grpNum=5;
    
    
pt[23].atomicNumber=24;
    strcpy(pt[23].symbol,"Cr");
    strcpy(pt[23].name,"Chromium");
    pt[23].atomicWeight=51.996;
    strcpy(pt[23].State,"Solid");
    pt[23].periodicNum=4;
    pt[23].grpNum=6;
    
    
pt[24].atomicNumber=25;
    strcpy(pt[24].symbol,"Mn");
    strcpy(pt[24].name,"Manganese");
    strcpy(pt[24].State,"Solid");
    pt[24].periodicNum=4;
    pt[24].grpNum=7;
    
    
pt[25].atomicNumber=26;
    strcpy(pt[25].symbol,"Fe");
    strcpy(pt[25].name,"Iron");
    pt[25].atomicWeight=55.847;
    strcpy(pt[25].State,"Solid");
    pt[25].periodicNum=4;
    pt[25].grpNum=8;
    
    
pt[26].atomicNumber=27;
    strcpy(pt[26].symbol,"Co");
    strcpy(pt[26].name,"Cobalt");
    pt[26].atomicWeight=58.9332;
    strcpy(pt[26].State,"Solid");
    pt[26].periodicNum=4;
    pt[26].grpNum=9;
    
    
pt[27].atomicNumber=28;
    strcpy(pt[27].symbol,"Ni");
    strcpy(pt[27].name,"Nickel");
    pt[27].atomicWeight=58.70;
      strcpy(pt[27].State,"Solid");
    pt[27].periodicNum=4;
    pt[27].grpNum=10;
    
    
pt[28].atomicNumber=29;
    strcpy(pt[28].symbol,"Cu");
    strcpy(pt[28].name,"Copper");
    pt[28].atomicWeight=63.546;
      strcpy(pt[28].State,"Solid");
    pt[28].periodicNum=4;
    pt[28].grpNum=11;
    
    
pt[29].atomicNumber=30;
    strcpy(pt[29].symbol,"Zn");
    strcpy(pt[29].name,"Zinc");
    pt[29].atomicWeight=65.38;
     strcpy(pt[29].State,"Solid");
    pt[29].periodicNum=4;
    pt[29].grpNum=12;
    
    
pt[30].atomicNumber=31;
    strcpy(pt[30].symbol,"Ga");
    strcpy(pt[30].name,"Gallium");
    pt[30].atomicWeight=69.72;
    strcpy(pt[30].State,"Solid");
    pt[30].periodicNum=4;
    pt[30].grpNum=13;
    
    
pt[31].atomicNumber=32;
    strcpy(pt[31].symbol,"Ge");
    strcpy(pt[31].name,"Germanium");
    pt[31].atomicWeight=72.59;
      strcpy(pt[13].State,"Solid");
    pt[31].periodicNum=4;
    pt[31].grpNum=14;
    
    
pt[32].atomicNumber=33;
    strcpy(pt[32].symbol,"As");
    strcpy(pt[32].name,"Arsenic");
    pt[32].atomicWeight=74.9216;
    strcpy(pt[32].State,"Solid");
    pt[32].periodicNum=4;
    pt[32].grpNum=15;
    
    
pt[33].atomicNumber=34;
    strcpy(pt[33].symbol,"Se");
    strcpy(pt[33].name,"Selenium");
    pt[33].atomicWeight=78.96;
      strcpy(pt[33].State,"Solid");
    pt[33].periodicNum=4;
    pt[33].grpNum=16;
    
    
pt[34].atomicNumber=35;
    strcpy(pt[34].symbol,"Br");
    strcpy(pt[34].name,"Bromine");
    pt[34].atomicWeight=79.904;
      strcpy(pt[34].State,"Liquid");
    pt[34].periodicNum=4;
    pt[34].grpNum=17;
    
    
pt[35].atomicNumber=36;
    strcpy(pt[35].symbol,"Kr");
    strcpy(pt[35].name,"Krypton");
    pt[35].atomicWeight=83.80;
    strcpy(pt[35].State,"Gas");
    pt[35].periodicNum=4;
    pt[35].grpNum=18;
    
    
pt[36].atomicNumber=37;
    strcpy(pt[36].symbol,"Rb");
    strcpy(pt[36].name,"Rubidium");
    pt[36].atomicWeight=85.4678;
     strcpy(pt[36].State,"Solid");
    pt[36].periodicNum=5;
    pt[36].grpNum=1;
    
    
pt[37].atomicNumber=38;
    strcpy(pt[37].symbol,"Sr");
    strcpy(pt[37].name,"Strontium");
    pt[37].atomicWeight=87.62;
     strcpy(pt[37].State,"Solid");
    pt[37].periodicNum=5;
    pt[37].grpNum=2;
    
    
pt[38].atomicNumber=39;
    strcpy(pt[38].symbol,"Y");
    strcpy(pt[38].name,"Yttrium");
    pt[38].atomicWeight=88.9059;
     strcpy(pt[38].State,"Solid");
    pt[38].periodicNum=5;
    pt[38].grpNum=3;
    
    
pt[39].atomicNumber=40;
    strcpy(pt[39].symbol,"Zr");
    strcpy(pt[39].name,"Zirconium");
    pt[39].atomicWeight=91.22;
    strcpy(pt[39].State,"Solid");
    pt[39].periodicNum=5;
    pt[39].grpNum=4;
    
    
pt[40].atomicNumber=41;
    strcpy(pt[40].symbol,"Nb");
    strcpy(pt[40].name,"Niobium");
    pt[40].atomicWeight=92.9064;
     strcpy(pt[40].State,"Solid");
    pt[41].periodicNum=5;
    pt[41].grpNum=5;
    
    
pt[41].atomicNumber=42;
    strcpy(pt[41].symbol,"Mo");
    strcpy(pt[41].name,"Molybdenum");
    pt[41].atomicWeight=95;
       strcpy(pt[40].State,"Solid");
    pt[41].periodicNum=5;
    pt[41].grpNum=6;
    
pt[42].atomicNumber=43;
    strcpy(pt[42].symbol,"Tc");
    strcpy(pt[42].name,"Technetium");
    pt[42].atomicWeight=98;
       strcpy(pt[40].State,"Solid");
    pt[41].periodicNum=5;
    pt[41].grpNum=7;
    
pt[43].atomicNumber=44;
    strcpy(pt[43].symbol,"Ru");
    strcpy(pt[43].name,"Ruthenium");
    pt[43].atomicWeight=101.07;
       strcpy(pt[40].State,"Solid");
    pt[41].periodicNum=5;
    pt[41].grpNum=8;
    
pt[44].atomicNumber=45;
    strcpy(pt[44].symbol,"Rh");
    strcpy(pt[44].name,"Rhodium");
    pt[44].atomicWeight=102.9055;
       strcpy(pt[44].State,"Solid");
    pt[44].periodicNum=5;
    pt[44].grpNum=9;
pt[45].atomicNumber=46;
    strcpy(pt[45].symbol,"Pd");
    strcpy(pt[45].name,"Palladium");
    pt[45].atomicWeight=106.4;
       strcpy(pt[45].State,"Solid");
    pt[45].periodicNum=5;
    pt[45].grpNum=10;
    
pt[46].atomicNumber=47;
    strcpy(pt[46].symbol,"Ag");
    strcpy(pt[46].name,"Silver");
    pt[46].atomicWeight=107.868;
       strcpy(pt[46].State,"Solid");
    pt[46].periodicNum=5;
    pt[46].grpNum=11;
    
pt[47].atomicNumber=48;
    strcpy(pt[47].symbol,"Cd");
    strcpy(pt[47].name,"Cadmium");
    pt[47].atomicWeight=112.75;
       strcpy(pt[47].State,"Solid");
    pt[47].periodicNum=5;
    pt[47].grpNum=12;
    
pt[48].atomicNumber=49;
    strcpy(pt[48].symbol,"In");
    strcpy(pt[48].name,"Indium");
    pt[48].atomicWeight=114.82;
       strcpy(pt[48].State,"Solid");
    pt[48].periodicNum=5;
    pt[48].grpNum=13;
    
pt[49].atomicNumber=50;
    strcpy(pt[49].symbol,"Sn");
    strcpy(pt[49].name,"Tin");
    pt[49].atomicWeight=118.69;
    strcpy(pt[49].State,"Solid");
    pt[49].periodicNum=5;
    pt[49].grpNum=14;
    
pt[50].atomicNumber=51;
    strcpy(pt[50].symbol,"Sb");
    strcpy(pt[50].name,"Antimony");
    pt[50].atomicWeight=121.75;
       strcpy(pt[50].State,"Solid");
    pt[50].periodicNum=5;
    pt[50].grpNum=15;
    
pt[51].atomicNumber=52;
    strcpy(pt[51].symbol,"Te");
    strcpy(pt[51].name,"Tellurium");
    pt[51].atomicWeight=127.60;
    strcpy(pt[51].State,"Solid");
    pt[51].periodicNum=5;
    pt[51].grpNum=16;
    
pt[52].atomicNumber=53;
    strcpy(pt[52].symbol,"I");
    strcpy(pt[52].name,"Iodine");
    pt[52].atomicWeight=126.9054;
     strcpy(pt[52].State,"Solid");
    pt[52].periodicNum=5;
    pt[52].grpNum=17;
    
pt[53].atomicNumber=54;
    strcpy(pt[53].symbol,"Xe");
    strcpy(pt[53].name,"Xenon");
    pt[53].atomicWeight=131.30;
     strcpy(pt[53].State,"Gas");
    pt[53].periodicNum=5;
    pt[53].grpNum=18;
    
pt[54].atomicNumber=55;
    strcpy(pt[54].symbol,"Cs");
    strcpy(pt[54].name,"Cesium");
    pt[54].atomicWeight=132.9054;
     strcpy(pt[54].State,"Solid");
    pt[54].periodicNum=6;
    pt[54].grpNum=1;
    
pt[55].atomicNumber=56;
    strcpy(pt[55].symbol,"Ba");
    strcpy(pt[55].name,"Barium");
    pt[55].atomicWeight=137.33;
     strcpy(pt[55].State,"Solid");
    pt[55].periodicNum=6;
    pt[55].grpNum=2;
    
pt[56].atomicNumber=57;
    strcpy(pt[56].symbol,"La");
    strcpy(pt[56].name,"Lanthenium");
    pt[56].atomicWeight=138.9055;
     strcpy(pt[56].State,"Solid");
    pt[56].periodicNum=6;

    
pt[57].atomicNumber=58;
    strcpy(pt[57].symbol,"Ce");
    strcpy(pt[57].name,"Cerium");
    pt[57].atomicWeight=140.12;
     strcpy(pt[57].State,"Solid");
    pt[57].periodicNum=6;
    
    
    
pt[58].atomicNumber=59;
    strcpy(pt[58].symbol,"Pr");
    strcpy(pt[58].name,"Praseodymium");
    pt[58].atomicWeight=140.9077;
     strcpy(pt[58].State,"Solid");
    pt[58].periodicNum=6;
  
    
pt[59].atomicNumber=60;
    strcpy(pt[59].symbol,"Nd");
    strcpy(pt[59].name,"Neodymium");
    pt[59].atomicWeight=144.24;
    strcpy(pt[59].State,"Solid");
    pt[59].periodicNum=6;
   
    
pt[60].atomicNumber=61;
    strcpy(pt[60].symbol,"Pm");
    strcpy(pt[60].name,"Promethium");
    pt[60].atomicWeight=145;
    strcpy(pt[60].State,"Solid");
    pt[60].periodicNum=6;
   
    
pt[61].atomicNumber=62;
    strcpy(pt[61].symbol,"Sm");
    strcpy(pt[61].name,"Samarium");
    pt[61].atomicWeight=150.4;
    strcpy(pt[61].State,"Solid");
    pt[61].periodicNum=6;
    
    
pt[62].atomicNumber=63;
    strcpy(pt[62].symbol,"Eu");
    strcpy(pt[62].name,"Europium");
    pt[62].atomicWeight=151.96;
    strcpy(pt[62].State,"Solid");
    pt[62].periodicNum=6;
   
    
pt[63].atomicNumber=64;
    strcpy(pt[63].symbol,"Gd");
    strcpy(pt[63].name,"Gadolinium");
    pt[63].atomicWeight=157.25;
    
    
pt[64].atomicNumber=65;
    strcpy(pt[64].symbol,"Tb");
    strcpy(pt[64].name,"Terbium");
    pt[64].atomicWeight=158.9254;
    
    
pt[65].atomicNumber=66;
    strcpy(pt[65].symbol,"Dy");
    strcpy(pt[65].name,"Dysprosium");
    pt[65].atomicWeight=162.50;
    
   
pt[66].atomicNumber=67;
    strcpy(pt[66].symbol,"Ho");
    strcpy(pt[66].name,"Holmium");
    pt[66].atomicWeight=164.9304;
    
    
pt[67].atomicNumber=68;
    strcpy(pt[67].symbol,"Er");
    strcpy(pt[67].name,"Erbium");
    pt[67].atomicWeight=167.26;
    
    
pt[68].atomicNumber=69;
    strcpy(pt[68].symbol,"Tm");
    strcpy(pt[68].name,"Thulium");
    pt[68].atomicWeight=168.9342;
    
    
pt[69].atomicNumber=70;
    strcpy(pt[69].symbol,"Yb");
    strcpy(pt[69].name,"Ytterbium");
    pt[69].atomicWeight=173.04;
    
    
pt[70].atomicNumber=71;
    strcpy(pt[70].symbol,"Lu");
    strcpy(pt[70].name,"Lutetium");
    pt[70].atomicWeight=174.967;
    
    
pt[71].atomicNumber=72;
    strcpy(pt[71].symbol,"Hf");
    strcpy(pt[71].name,"Hafnium");
    pt[71].atomicWeight=178.49;
    
    
pt[72].atomicNumber=73;
    strcpy(pt[72].symbol,"Ta");
    strcpy(pt[72].name,"Tantalum");
    pt[72].atomicWeight=180.9479;
    
    
pt[73].atomicNumber=74;
    strcpy(pt[73].symbol,"W");
    strcpy(pt[73].name,"Tungsten");
    pt[73].atomicWeight=183.85;
    
    
pt[74].atomicNumber=75;
    strcpy(pt[74].symbol,"Re");
    strcpy(pt[74].name,"Rhenium");
    pt[74].atomicWeight=186.207;
    
    
pt[75].atomicNumber=76;
    strcpy(pt[75].symbol,"Os");
    strcpy(pt[75].name,"Osmium");
    pt[75].atomicWeight=190.2;
    
    
pt[76].atomicNumber=77;
    strcpy(pt[76].symbol,"Ir");
    strcpy(pt[76].name,"Iridium");
    pt[76].atomicWeight=192.22;
    
    
pt[77].atomicNumber=78;
    strcpy(pt[77].symbol,"Pt");
    strcpy(pt[77].name,"Platinum");
    pt[77].atomicWeight=195.09;
    
    
pt[78].atomicNumber=79;
    strcpy(pt[78].symbol,"Au");
    strcpy(pt[78].name,"Gold");
    pt[78].atomicWeight=196.9665;
    
    
pt[79].atomicNumber=80;
    strcpy(pt[79].symbol,"Hg");
    strcpy(pt[79].name,"Mercury");
    pt[79].atomicWeight=200.59;
    
    
pt[80].atomicNumber=81;
    strcpy(pt[80].symbol,"Tl");
    strcpy(pt[80].name,"Thallium");
    pt[80].atomicWeight=204.37;
    
    
pt[81].atomicNumber=82;
    strcpy(pt[81].symbol,"Pb");
    strcpy(pt[81].name,"Lead");
    pt[81].atomicWeight=207.2;
    
    
pt[82].atomicNumber=83;
    strcpy(pt[82].symbol,"Bi");
    strcpy(pt[82].name,"Bismuth");
    pt[82].atomicWeight=208.9804;
    
    
pt[83].atomicNumber=84;
    strcpy(pt[83].symbol,"Po");
    strcpy(pt[83].name,"Polonium");
    pt[83].atomicWeight=209;
    
    
pt[84].atomicNumber=85;
    strcpy(pt[84].symbol,"At");
    strcpy(pt[84].name,"Astatine");
    pt[84].atomicWeight=210;
    
    
pt[85].atomicNumber=86;
    strcpy(pt[85].symbol,"Rn");
    strcpy(pt[85].name,"Radon");
    pt[85].atomicWeight=222;
    
    
pt[86].atomicNumber=87;
    strcpy(pt[86].symbol,"Fr");
    strcpy(pt[86].name,"Francium");
    pt[86].atomicWeight=223;
    
pt[87].atomicNumber=88;
    strcpy(pt[87].symbol,"Ra");
    strcpy(pt[87].name,"Radium");
    pt[87].atomicWeight=226.0254;
    
    
pt[88].atomicNumber=89;
    strcpy(pt[88].symbol,"Ac");
    strcpy(pt[88].name,"Actinium");
    pt[88].atomicWeight=227.0278;
    
    
pt[89].atomicNumber=90;
    strcpy(pt[89].symbol,"Th");
    strcpy(pt[89].name,"Thorium");
    pt[89].atomicWeight=232.0381;
    
    
pt[90].atomicNumber=91;
    strcpy(pt[90].symbol,"Pa");
    strcpy(pt[90].name,"Protactinium");
    pt[90].atomicWeight=231.0359;
    
    
pt[91].atomicNumber=92;
    strcpy(pt[91].symbol,"U");
    strcpy(pt[91].name,"Uranium");
    pt[91].atomicWeight=238.029;
    
    
pt[92].atomicNumber=93;
    strcpy(pt[92].symbol,"Np");
    strcpy(pt[92].name,"Neptunium");
    pt[92].atomicWeight=237.0482;
    
    
pt[93].atomicNumber=94;
    strcpy(pt[93].symbol,"Pu");
    strcpy(pt[93].name,"Plutonium");
    pt[93].atomicWeight=242;
    
    
pt[94].atomicNumber=95;
    strcpy(pt[94].symbol,"Am");
    strcpy(pt[94].name,"Americium");
    pt[94].atomicWeight=243;
    
    
pt[95].atomicNumber=96;
    strcpy(pt[95].symbol,"Cm");
    strcpy(pt[95].name,"Curium");
    pt[95].atomicWeight=247;
    
    
pt[96].atomicNumber=97;
    strcpy(pt[96].symbol,"Bk");
    strcpy(pt[96].name,"Berkelium");
    pt[96].atomicWeight=247;
    
    
pt[97].atomicNumber=98;
    strcpy(pt[97].symbol,"Cf");
    strcpy(pt[97].name,"Californium");
    pt[97].atomicWeight=251;
    
    
pt[98].atomicNumber=99;
    strcpy(pt[98].symbol,"Es");
    strcpy(pt[98].name,"Einsteinium");
    pt[98].atomicWeight=252;
    
    
pt[99].atomicNumber=100;
    strcpy(pt[99].symbol,"Fm");
    strcpy(pt[99].name,"Fermium");
    pt[99].atomicWeight=257;
    
    
pt[100].atomicNumber=101;
    strcpy(pt[100].symbol,"Md");
    strcpy(pt[100].name,"Mendelevium");
    pt[100].atomicWeight=258;
    strcpy(pt[100].State,"Solid");
    pt[100].periodicNum=2;
    pt[100].grpNum=14;
    
    
pt[101].atomicNumber=102;
    strcpy(pt[101].symbol,"No");
    strcpy(pt[101].name,"Nobelium");
    pt[101].atomicWeight=250;
    strcpy(pt[101].State,"Solid");
    pt[101].periodicNum=2;
    pt[101].grpNum=14;
    
    
pt[102].atomicNumber=103;
    strcpy(pt[102].symbol,"Lr");
    strcpy(pt[102].name,"Lawrencium");
    pt[102].atomicWeight=260;
    strcpy(pt[102].State,"Solid");
    pt[102].periodicNum=2;
    pt[102].grpNum=14;
    
    
pt[103].atomicNumber=104;
    strcpy(pt[103].symbol,"Rf");
    strcpy(pt[103].name,"Rutherfordium");
    pt[103].atomicWeight=261;
    strcpy(pt[103].State,"Solid");
    pt[103].periodicNum=2;
    pt[103].grpNum=14;
    
pt[104].atomicNumber=105;
    strcpy(pt[104].symbol,"Db");
    strcpy(pt[104].name,"Dubnium");
    pt[104].atomicWeight=262;
    strcpy(pt[104].State,"Solid");
    pt[104].periodicNum=2;
    pt[104].grpNum=14;
    
pt[105].atomicNumber=106;
    strcpy(pt[105].symbol,"Sg");
    strcpy(pt[105].name,"Seaborgium");
    pt[105].atomicWeight=263;
    strcpy(pt[105].State,"Solid");
    pt[105].periodicNum=2;
    pt[105].grpNum=14;
    
pt[106].atomicNumber=107;
    strcpy(pt[106].symbol,"Bh");
    strcpy(pt[106].name,"Bohrium");
    pt[106].atomicWeight=262;
    strcpy(pt[106].State,"Solid");
    pt[106].periodicNum=2;
    pt[106].grpNum=14;
    
pt[107].atomicNumber=108;
    strcpy(pt[107].symbol,"Hs");
    strcpy(pt[107].name,"Hassium");
    pt[107].atomicWeight=255;
    strcpy(pt[107].State,"Solid");
    pt[107].periodicNum=2;
    pt[107].grpNum=14;
    
pt[108].atomicNumber=109;
    strcpy(pt[108].symbol,"Mt");
    strcpy(pt[108].name,"Meitnerium");
    pt[108].atomicWeight=256;
    strcpy(pt[108].State,"Solid");
    pt[108].periodicNum=2;
    pt[108].grpNum=14;
    
pt[109].atomicNumber=110;
    strcpy(pt[109].symbol,"Ds");
    strcpy(pt[109].name,"Darmstadtiun");
    pt[109].atomicWeight=269;
    strcpy(pt[109].State,"Solid");
    pt[109].periodicNum=2;
    pt[109].grpNum=14;
    
pt[110].atomicNumber=111;
    strcpy(pt[110].symbol,"Rg");
    strcpy(pt[110].name,"Roentgenium");
    pt[110].atomicWeight=272;
    strcpy(pt[110].State,"Solid");
    pt[110].periodicNum=2;
    pt[110].grpNum=14;
    
pt[111].atomicNumber=112;
    strcpy(pt[111].symbol,"Cn");
    strcpy(pt[111].name,"Copernicium");
    pt[111].atomicWeight=277;
    strcpy(pt[111].State,"Solid");
    pt[111].periodicNum=2;
    pt[111].grpNum=14;
    
pt[112].atomicNumber=113;
    strcpy(pt[112].symbol,"Nh");
    strcpy(pt[112].name,"Nihonium");
    pt[112].atomicWeight=284;
    strcpy(pt[112].State,"Solid");
    pt[112].periodicNum=2;
    pt[112].grpNum=14;
    
pt[113].atomicNumber=114;
    strcpy(pt[113].symbol,"Fl");
    strcpy(pt[113].name,"Flerovium");
    pt[113].atomicWeight=285;
    strcpy(pt[113].State,"Solid");
    pt[113].periodicNum=2;
    pt[113].grpNum=14;
    
pt[114].atomicNumber=115;
    strcpy(pt[114].symbol,"Mc");
    strcpy(pt[114].name,"Moscovium");
    pt[114].atomicWeight=288;
    strcpy(pt[114].State,"Solid");
    pt[114].periodicNum=2;
    pt[114].grpNum=14;
    
pt[115].atomicNumber=116;
    strcpy(pt[115].symbol,"Lv");
    strcpy(pt[115].name,"Livermorium");
    pt[115].atomicWeight=293;
    strcpy(pt[115].State,"Solid");
    pt[115].periodicNum=2;
    pt[115].grpNum=14;
    
pt[116].atomicNumber=117;
    strcpy(pt[116].symbol,"Ts");
    strcpy(pt[116].name,"Tennessine");
    pt[116].atomicWeight=294;
    strcpy(pt[116].State,"Solid");
    pt[116].periodicNum=2;
    pt[116].grpNum=14;
        
pt[117].atomicNumber=118;
    strcpy(pt[117].symbol,"Og");
    strcpy(pt[117].name,"Ognesson");
    pt[117].atomicWeight=294;
    strcpy(pt[117].State,"Solid");
    pt[117].periodicNum=2;
    pt[117].grpNum=14;
  

    int input;
    scanf("%d",&input);
    input--;
    switch(input){
        case 0:
            displayelement(pt[0]);
            break;
        case 1:
            displayelement(pt[1]);
            break;
        case 2:
            displayelement(pt[2]);
            break;
        case 3:
            displayelement(pt[3]);
            break;
        case 4:
            displayelement(pt[4]);
            break;
        case 5:
            displayelement(pt[5]);
            break;
        case 6:
            displayelement(pt[6]);
            break;
        case 7:
            displayelement(pt[7]);
            break;
        case 8:
            displayelement(pt[8]);
            break;
        case 9:
            displayelement(pt[9]);
            break;
        case 10:
            displayelement(pt[10]);
            break;
        case 11:
            displayelement(pt[11]);
            break;
        case 12:
            displayelement(pt[12]);
            break;
        case 13:
            displayelement(pt[13]);
            break;
        case 14:
            displayelement(pt[14]);
            break;
        case 15:
            displayelement(pt[15]);
            break;
        case 16:
            displayelement(pt[16]);
            break;
        case 17:
            displayelement(pt[17]);
            break;
        case 18:
            displayelement(pt[18]);
            break;
        case 19:
            displayelement(pt[19]);
            break;
        case 20:
            displayelement(pt[20]);
            break;
        case 21:
            displayelement(pt[21]);
            break;
        case 22:
            displayelement(pt[22]);
            break;
        case 23:
            displayelement(pt[23]);
            break;
        case 24:
            displayelement(pt[24]);
            break;
        case 25:
            displayelement(pt[25]);
            break;
        case 26:
            displayelement(pt[26]);
            break;
        case 27:
            displayelement(pt[27]);
            break;
        case 28:
            displayelement(pt[28]);
            break;
        case 29:
            displayelement(pt[29]);
            break;
        case 30:
            displayelement(pt[30]);
            break;
        case 31:
            displayelement(pt[31]);
            break;
        case 32:
            displayelement(pt[32]);
            break;
        case 33:
            displayelement(pt[33]);
            break;
        case 34:
            displayelement(pt[34]);
            break;
        case 35:
            displayelement(pt[35]);
            break;
        case 36:
            displayelement(pt[36]);
            break;
        case 37:
            displayelement(pt[37]);
            break;
        case 38:
            displayelement(pt[38]);
            break;
        case 39:
            displayelement(pt[39]);
            break;
        case 40:
            displayelement(pt[40]);
            break;
        case 41:
            displayelement(pt[41]);
            break;
        case 42:
            displayelement(pt[42]);
            break;
        case 43:
            displayelement(pt[43]);
            break;
        case 44:
            displayelement(pt[44]);
            break;
        case 45:
            displayelement(pt[45]);
            break;
        case 46:
            displayelement(pt[46]);
            break;
        case 47:
            displayelement(pt[47]);
            break;
        case 48:
            displayelement(pt[48]);
            break;
        case 49:
            displayelement(pt[49]);
            break;
        case 50:
            displayelement(pt[50]);
            break;
        case 51:
            displayelement(pt[51]);
            break;
        case 52:
            displayelement(pt[52]);
            break;
        case 53:
            displayelement(pt[53]);
            break;
        case 54:
            displayelement(pt[54]);
            break;
        case 55:
            displayelement(pt[55]);
            break;
        case 56:
            lanthanide(pt[56]);
            break;
        case 57:
            lanthanide(pt[57]);
            break;
        case 58:
            lanthanide(pt[58]);
            break;
        case 59:
            lanthanide(pt[59]);
            break;
        case 60:
            lanthanide(pt[60]);
            break;
        case 61:
            lanthanide(pt[61]);
            break;
        case 62:
            lanthanide(pt[62]);
            break;
        case 63:
            lanthanide(pt[63]);
            break;
        case 64:
            lanthanide(pt[64]);
            break;
        case 65:
            lanthanide(pt[65]);
            break;                    
        case 66:
            lanthanide(pt[66]);
            break;       
        case 67:
            lanthanide(pt[67]);
            break;
        case 68:
            lanthanide(pt[68]);
            break;
        case 69:
           lanthanide(pt[69]);
            break;
        case 70:
            lanthanide(pt[70]);
            break;
        case 71:
            lanthanide(pt[71]);
            break;
        
        case 72:
            displayelement(pt[72]);
            break;
        case 73:
            displayelement(pt[73]);
            break;
        case 74:
            displayelement(pt[74]);
            break;
        case 75:
            displayelement(pt[75]);
            break;
        case 76:
            displayelement(pt[76]);
            break;
        case 77:
            displayelement(pt[77]);
            break;
        case 78:
            displayelement(pt[78]);
            break;
        case 79:
            displayelement(pt[79]);
            break;
        case 80:
            displayelement(pt[80]);
            break;
        case 81:
            displayelement(pt[81]);
            break;
        case 82:
            displayelement(pt[82]);
            break;
        case 83:
            displayelement(pt[83]);
            break;
        case 84:
            displayelement(pt[84]);
            break;
        case 85:
            displayelement(pt[85]);
            break;
        case 86:
            displayelement(pt[86]);
            break;
        case 87:
            displayelement(pt[87]);
            break;
        case 88:
            displayelement(pt[88]);
            break;
        case 89:
            actinides(pt[89]);
            break;
        case 90:
            actinides(pt[90]);
            break;
        case 91:
            actinides(pt[91]);
            break;
        case 92:
            actinides(pt[92]);
            break;
        case 93:
            actinides(pt[93]);
            break;
        case 94:
            actinides(pt[94]);
            break;
        case 95:
            actinides(pt[95]);
            break;
        case 96:
            actinides(pt[96]);
            break;
        case 97:
            actinides(pt[97]);
            break;
        case 98:
            actinides(pt[98]);
            break;
        case 99:
            actinides(pt[99]);
            break;
        case 100:
            actinides(pt[100]);
            break;
        case 101:
            actinides(pt[101]);
            break;
        case 102:
            displayelement(pt[102]);
            break;
        case 103:
            displayelement(pt[103]);
            break;
        case 104:
            displayelement(pt[104]);
            break;
        case 105:
            displayelement(pt[105]);
            break;
        case 106:
            displayelement(pt[106]);
            break;
        case 107:
            displayelement(pt[107]);
            break;
        case 108:
            displayelement(pt[108]);
            break;
        case 109:
            displayelement(pt[109]);
            break;
        case 110:
            displayelement(pt[110]);
            break;
        case 111:
            displayelement(pt[111]);
            break;
        case 112:
            displayelement(pt[112]);
            break;
        case 113:
            displayelement(pt[113]);
            break;
        case 114:
            displayelement(pt[114]);
            break;
        case 115:
            displayelement(pt[115]);
            break;
        case 116:
            displayelement(pt[116]);
            break;
        case 117:
            displayelement(pt[117]);
            break;
       
        
        default:
            printf("Element not found in the periodic table.\n");
            break;
    }

    
return 0;
}